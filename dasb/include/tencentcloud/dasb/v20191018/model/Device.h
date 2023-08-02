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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DEVICE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/Group.h>
#include <tencentcloud/dasb/v20191018/model/Resource.h>
#include <tencentcloud/dasb/v20191018/model/Department.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 资产信息
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产ID
                     * @return Id 资产ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置资产ID
                     * @param _id 资产ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取实例ID，对应CVM、CDB等实例ID
                     * @return InstanceId 实例ID，对应CVM、CDB等实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，对应CVM、CDB等实例ID
                     * @param _instanceId 实例ID，对应CVM、CDB等实例ID
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
                     * 获取资产名
                     * @return Name 资产名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资产名
                     * @param _name 资产名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return PrivateIp 内网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网IP
                     * @param _privateIp 内网IP
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取地域编码
                     * @return ApCode 地域编码
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置地域编码
                     * @param _apCode 地域编码
                     * 
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     * 
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取操作系统名称
                     * @return OsName 操作系统名称
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称
                     * @param _osName 操作系统名称
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer
                     * @return Kind 资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer
                     * @param _kind 资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取管理端口
                     * @return Port 管理端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置管理端口
                     * @param _port 管理端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取所属资产组列表
                     * @return GroupSet 所属资产组列表
                     * 
                     */
                    std::vector<Group> GetGroupSet() const;

                    /**
                     * 设置所属资产组列表
                     * @param _groupSet 所属资产组列表
                     * 
                     */
                    void SetGroupSet(const std::vector<Group>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     * 
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取资产绑定的账号数
                     * @return AccountCount 资产绑定的账号数
                     * 
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 设置资产绑定的账号数
                     * @param _accountCount 资产绑定的账号数
                     * 
                     */
                    void SetAccountCount(const uint64_t& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取堡垒机服务信息，注意没有绑定服务时为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 堡垒机服务信息，注意没有绑定服务时为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置堡垒机服务信息，注意没有绑定服务时为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 堡垒机服务信息，注意没有绑定服务时为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取资产所属部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Department 资产所属部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置资产所属部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _department 资产所属部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDepartment(const Department& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取数据库资产的多节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpPortSet 数据库资产的多节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpPortSet() const;

                    /**
                     * 设置数据库资产的多节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipPortSet 数据库资产的多节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpPortSet(const std::vector<std::string>& _ipPortSet);

                    /**
                     * 判断参数 IpPortSet 是否已赋值
                     * @return IpPortSet 是否已赋值
                     * 
                     */
                    bool IpPortSetHasBeenSet() const;

                private:

                    /**
                     * 资产ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实例ID，对应CVM、CDB等实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 地域编码
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 操作系统名称
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 管理端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 所属资产组列表
                     */
                    std::vector<Group> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * 资产绑定的账号数
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 堡垒机服务信息，注意没有绑定服务时为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 资产所属部门
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 数据库资产的多节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipPortSet;
                    bool m_ipPortSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DEVICE_H_
