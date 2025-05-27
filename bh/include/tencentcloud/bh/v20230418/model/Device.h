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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DEVICE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Group.h>
#include <tencentcloud/bh/v20230418/model/Resource.h>
#include <tencentcloud/bh/v20230418/model/Department.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
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
                     * @return Resource 堡垒机服务信息，注意没有绑定服务时为null
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置堡垒机服务信息，注意没有绑定服务时为null
                     * @param _resource 堡垒机服务信息，注意没有绑定服务时为null
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
                     * @return Department 资产所属部门
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置资产所属部门
                     * @param _department 资产所属部门
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
                     * @return IpPortSet 数据库资产的多节点
                     * 
                     */
                    std::vector<std::string> GetIpPortSet() const;

                    /**
                     * 设置数据库资产的多节点
                     * @param _ipPortSet 数据库资产的多节点
                     * 
                     */
                    void SetIpPortSet(const std::vector<std::string>& _ipPortSet);

                    /**
                     * 判断参数 IpPortSet 是否已赋值
                     * @return IpPortSet 是否已赋值
                     * 
                     */
                    bool IpPortSetHasBeenSet() const;

                    /**
                     * 获取网络域Id
                     * @return DomainId 网络域Id
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置网络域Id
                     * @param _domainId 网络域Id
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取网络域名称
                     * @return DomainName 网络域名称
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置网络域名称
                     * @param _domainName 网络域名称
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取是否启用SSL，仅支持Redis资产。0：禁用 1：启用
                     * @return EnableSSL 是否启用SSL，仅支持Redis资产。0：禁用 1：启用
                     * 
                     */
                    int64_t GetEnableSSL() const;

                    /**
                     * 设置是否启用SSL，仅支持Redis资产。0：禁用 1：启用
                     * @param _enableSSL 是否启用SSL，仅支持Redis资产。0：禁用 1：启用
                     * 
                     */
                    void SetEnableSSL(const int64_t& _enableSSL);

                    /**
                     * 判断参数 EnableSSL 是否已赋值
                     * @return EnableSSL 是否已赋值
                     * 
                     */
                    bool EnableSSLHasBeenSet() const;

                    /**
                     * 获取已上传的SSL证书名称
                     * @return SSLCertName 已上传的SSL证书名称
                     * 
                     */
                    std::string GetSSLCertName() const;

                    /**
                     * 设置已上传的SSL证书名称
                     * @param _sSLCertName 已上传的SSL证书名称
                     * 
                     */
                    void SetSSLCertName(const std::string& _sSLCertName);

                    /**
                     * 判断参数 SSLCertName 是否已赋值
                     * @return SSLCertName 是否已赋值
                     * 
                     */
                    bool SSLCertNameHasBeenSet() const;

                    /**
                     * 获取IOA侧的资源ID
                     * @return IOAId IOA侧的资源ID
                     * 
                     */
                    int64_t GetIOAId() const;

                    /**
                     * 设置IOA侧的资源ID
                     * @param _iOAId IOA侧的资源ID
                     * 
                     */
                    void SetIOAId(const int64_t& _iOAId);

                    /**
                     * 判断参数 IOAId 是否已赋值
                     * @return IOAId 是否已赋值
                     * 
                     */
                    bool IOAIdHasBeenSet() const;

                    /**
                     * 获取K8S集群托管维度。1-集群，2-命名空间，3-工作负载
                     * @return ManageDimension K8S集群托管维度。1-集群，2-命名空间，3-工作负载
                     * 
                     */
                    uint64_t GetManageDimension() const;

                    /**
                     * 设置K8S集群托管维度。1-集群，2-命名空间，3-工作负载
                     * @param _manageDimension K8S集群托管维度。1-集群，2-命名空间，3-工作负载
                     * 
                     */
                    void SetManageDimension(const uint64_t& _manageDimension);

                    /**
                     * 判断参数 ManageDimension 是否已赋值
                     * @return ManageDimension 是否已赋值
                     * 
                     */
                    bool ManageDimensionHasBeenSet() const;

                    /**
                     * 获取K8S集群托管账号id	
                     * @return ManageAccountId K8S集群托管账号id	
                     * 
                     */
                    uint64_t GetManageAccountId() const;

                    /**
                     * 设置K8S集群托管账号id	
                     * @param _manageAccountId K8S集群托管账号id	
                     * 
                     */
                    void SetManageAccountId(const uint64_t& _manageAccountId);

                    /**
                     * 判断参数 ManageAccountId 是否已赋值
                     * @return ManageAccountId 是否已赋值
                     * 
                     */
                    bool ManageAccountIdHasBeenSet() const;

                    /**
                     * 获取K8S集群命名空间	
                     * @return Namespace K8S集群命名空间	
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置K8S集群命名空间	
                     * @param _namespace K8S集群命名空间	
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取K8S集群工作负载	
                     * @return Workload K8S集群工作负载	
                     * 
                     */
                    std::string GetWorkload() const;

                    /**
                     * 设置K8S集群工作负载	
                     * @param _workload K8S集群工作负载	
                     * 
                     */
                    void SetWorkload(const std::string& _workload);

                    /**
                     * 判断参数 Workload 是否已赋值
                     * @return Workload 是否已赋值
                     * 
                     */
                    bool WorkloadHasBeenSet() const;

                    /**
                     * 获取K8S集群pod已同步数量
                     * @return SyncPodCount K8S集群pod已同步数量
                     * 
                     */
                    uint64_t GetSyncPodCount() const;

                    /**
                     * 设置K8S集群pod已同步数量
                     * @param _syncPodCount K8S集群pod已同步数量
                     * 
                     */
                    void SetSyncPodCount(const uint64_t& _syncPodCount);

                    /**
                     * 判断参数 SyncPodCount 是否已赋值
                     * @return SyncPodCount 是否已赋值
                     * 
                     */
                    bool SyncPodCountHasBeenSet() const;

                    /**
                     * 获取K8S集群pod总数量	
                     * @return TotalPodCount K8S集群pod总数量	
                     * 
                     */
                    uint64_t GetTotalPodCount() const;

                    /**
                     * 设置K8S集群pod总数量	
                     * @param _totalPodCount K8S集群pod总数量	
                     * 
                     */
                    void SetTotalPodCount(const uint64_t& _totalPodCount);

                    /**
                     * 判断参数 TotalPodCount 是否已赋值
                     * @return TotalPodCount 是否已赋值
                     * 
                     */
                    bool TotalPodCountHasBeenSet() const;

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
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 资产所属部门
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 数据库资产的多节点
                     */
                    std::vector<std::string> m_ipPortSet;
                    bool m_ipPortSetHasBeenSet;

                    /**
                     * 网络域Id
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 网络域名称
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 是否启用SSL，仅支持Redis资产。0：禁用 1：启用
                     */
                    int64_t m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * 已上传的SSL证书名称
                     */
                    std::string m_sSLCertName;
                    bool m_sSLCertNameHasBeenSet;

                    /**
                     * IOA侧的资源ID
                     */
                    int64_t m_iOAId;
                    bool m_iOAIdHasBeenSet;

                    /**
                     * K8S集群托管维度。1-集群，2-命名空间，3-工作负载
                     */
                    uint64_t m_manageDimension;
                    bool m_manageDimensionHasBeenSet;

                    /**
                     * K8S集群托管账号id	
                     */
                    uint64_t m_manageAccountId;
                    bool m_manageAccountIdHasBeenSet;

                    /**
                     * K8S集群命名空间	
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * K8S集群工作负载	
                     */
                    std::string m_workload;
                    bool m_workloadHasBeenSet;

                    /**
                     * K8S集群pod已同步数量
                     */
                    uint64_t m_syncPodCount;
                    bool m_syncPodCountHasBeenSet;

                    /**
                     * K8S集群pod总数量	
                     */
                    uint64_t m_totalPodCount;
                    bool m_totalPodCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DEVICE_H_
