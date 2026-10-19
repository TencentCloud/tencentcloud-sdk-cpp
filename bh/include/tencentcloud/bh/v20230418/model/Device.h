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
                     * 获取<p>资产ID</p>
                     * @return Id <p>资产ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>资产ID</p>
                     * @param _id <p>资产ID</p>
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
                     * 获取<p>实例ID，对应CVM、CDB等实例ID</p>
                     * @return InstanceId <p>实例ID，对应CVM、CDB等实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，对应CVM、CDB等实例ID</p>
                     * @param _instanceId <p>实例ID，对应CVM、CDB等实例ID</p>
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
                     * 获取<p>资产名</p>
                     * @return Name <p>资产名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资产名</p>
                     * @param _name <p>资产名</p>
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
                     * 获取<p>公网IP</p>
                     * @return PublicIp <p>公网IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网IP</p>
                     * @param _publicIp <p>公网IP</p>
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
                     * 获取<p>内网IP</p>
                     * @return PrivateIp <p>内网IP</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _privateIp <p>内网IP</p>
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
                     * 获取<p>地域编码</p>
                     * @return ApCode <p>地域编码</p>
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置<p>地域编码</p>
                     * @param _apCode <p>地域编码</p>
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
                     * 获取<p>地域名称</p>
                     * @return ApName <p>地域名称</p>
                     * 
                     */
                    std::string GetApName() const;

                    /**
                     * 设置<p>地域名称</p>
                     * @param _apName <p>地域名称</p>
                     * 
                     */
                    void SetApName(const std::string& _apName);

                    /**
                     * 判断参数 ApName 是否已赋值
                     * @return ApName 是否已赋值
                     * 
                     */
                    bool ApNameHasBeenSet() const;

                    /**
                     * 获取<p>操作系统名称</p>
                     * @return OsName <p>操作系统名称</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>操作系统名称</p>
                     * @param _osName <p>操作系统名称</p>
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
                     * 获取<p>资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * @return Kind <p>资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置<p>资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     * @param _kind <p>资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
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
                     * 获取<p>管理端口</p>
                     * @return Port <p>管理端口</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>管理端口</p>
                     * @param _port <p>管理端口</p>
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
                     * 获取<p>所属资产组列表</p>
                     * @return GroupSet <p>所属资产组列表</p>
                     * 
                     */
                    std::vector<Group> GetGroupSet() const;

                    /**
                     * 设置<p>所属资产组列表</p>
                     * @param _groupSet <p>所属资产组列表</p>
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
                     * 获取<p>资产绑定的账号数</p>
                     * @return AccountCount <p>资产绑定的账号数</p>
                     * 
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 设置<p>资产绑定的账号数</p>
                     * @param _accountCount <p>资产绑定的账号数</p>
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
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
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
                     * 获取<p>堡垒机服务信息，注意没有绑定服务时为null</p>
                     * @return Resource <p>堡垒机服务信息，注意没有绑定服务时为null</p>
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置<p>堡垒机服务信息，注意没有绑定服务时为null</p>
                     * @param _resource <p>堡垒机服务信息，注意没有绑定服务时为null</p>
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
                     * 获取<p>资产所属部门</p>
                     * @return Department <p>资产所属部门</p>
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置<p>资产所属部门</p>
                     * @param _department <p>资产所属部门</p>
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
                     * 获取<p>数据库资产的多节点</p>
                     * @return IpPortSet <p>数据库资产的多节点</p>
                     * 
                     */
                    std::vector<std::string> GetIpPortSet() const;

                    /**
                     * 设置<p>数据库资产的多节点</p>
                     * @param _ipPortSet <p>数据库资产的多节点</p>
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
                     * 获取<p>网络域Id</p>
                     * @return DomainId <p>网络域Id</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>网络域Id</p>
                     * @param _domainId <p>网络域Id</p>
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
                     * 获取<p>网络域名称</p>
                     * @return DomainName <p>网络域名称</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>网络域名称</p>
                     * @param _domainName <p>网络域名称</p>
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
                     * 获取<p>是否启用SSL，仅支持Redis资产。0：禁用 1：启用</p>
                     * @return EnableSSL <p>是否启用SSL，仅支持Redis资产。0：禁用 1：启用</p>
                     * 
                     */
                    int64_t GetEnableSSL() const;

                    /**
                     * 设置<p>是否启用SSL，仅支持Redis资产。0：禁用 1：启用</p>
                     * @param _enableSSL <p>是否启用SSL，仅支持Redis资产。0：禁用 1：启用</p>
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
                     * 获取<p>已上传的SSL证书名称</p>
                     * @return SSLCertName <p>已上传的SSL证书名称</p>
                     * 
                     */
                    std::string GetSSLCertName() const;

                    /**
                     * 设置<p>已上传的SSL证书名称</p>
                     * @param _sSLCertName <p>已上传的SSL证书名称</p>
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
                     * 获取<p>IOA侧的资源ID</p>
                     * @return IOAId <p>IOA侧的资源ID</p>
                     * 
                     */
                    int64_t GetIOAId() const;

                    /**
                     * 设置<p>IOA侧的资源ID</p>
                     * @param _iOAId <p>IOA侧的资源ID</p>
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
                     * 获取<p>K8S集群托管维度。1-集群，2-命名空间，3-工作负载</p>
                     * @return ManageDimension <p>K8S集群托管维度。1-集群，2-命名空间，3-工作负载</p>
                     * 
                     */
                    uint64_t GetManageDimension() const;

                    /**
                     * 设置<p>K8S集群托管维度。1-集群，2-命名空间，3-工作负载</p>
                     * @param _manageDimension <p>K8S集群托管维度。1-集群，2-命名空间，3-工作负载</p>
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
                     * 获取<p>K8S集群托管账号id</p>
                     * @return ManageAccountId <p>K8S集群托管账号id</p>
                     * 
                     */
                    uint64_t GetManageAccountId() const;

                    /**
                     * 设置<p>K8S集群托管账号id</p>
                     * @param _manageAccountId <p>K8S集群托管账号id</p>
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
                     * 获取<p>K8S集群命名空间</p>
                     * @return Namespace <p>K8S集群命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>K8S集群命名空间</p>
                     * @param _namespace <p>K8S集群命名空间</p>
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
                     * 获取<p>K8S集群工作负载</p>
                     * @return Workload <p>K8S集群工作负载</p>
                     * 
                     */
                    std::string GetWorkload() const;

                    /**
                     * 设置<p>K8S集群工作负载</p>
                     * @param _workload <p>K8S集群工作负载</p>
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
                     * 获取<p>K8S集群pod已同步数量</p>
                     * @return SyncPodCount <p>K8S集群pod已同步数量</p>
                     * 
                     */
                    uint64_t GetSyncPodCount() const;

                    /**
                     * 设置<p>K8S集群pod已同步数量</p>
                     * @param _syncPodCount <p>K8S集群pod已同步数量</p>
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
                     * 获取<p>K8S集群pod总数量</p>
                     * @return TotalPodCount <p>K8S集群pod总数量</p>
                     * 
                     */
                    uint64_t GetTotalPodCount() const;

                    /**
                     * 设置<p>K8S集群pod总数量</p>
                     * @param _totalPodCount <p>K8S集群pod总数量</p>
                     * 
                     */
                    void SetTotalPodCount(const uint64_t& _totalPodCount);

                    /**
                     * 判断参数 TotalPodCount 是否已赋值
                     * @return TotalPodCount 是否已赋值
                     * 
                     */
                    bool TotalPodCountHasBeenSet() const;

                    /**
                     * 获取<p>云账号id</p>
                     * @return CloudAccountId <p>云账号id</p>
                     * 
                     */
                    uint64_t GetCloudAccountId() const;

                    /**
                     * 设置<p>云账号id</p>
                     * @param _cloudAccountId <p>云账号id</p>
                     * 
                     */
                    void SetCloudAccountId(const uint64_t& _cloudAccountId);

                    /**
                     * 判断参数 CloudAccountId 是否已赋值
                     * @return CloudAccountId 是否已赋值
                     * 
                     */
                    bool CloudAccountIdHasBeenSet() const;

                    /**
                     * 获取<p>云账号名称</p>
                     * @return CloudAccountName <p>云账号名称</p>
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置<p>云账号名称</p>
                     * @param _cloudAccountName <p>云账号名称</p>
                     * 
                     */
                    void SetCloudAccountName(const std::string& _cloudAccountName);

                    /**
                     * 判断参数 CloudAccountName 是否已赋值
                     * @return CloudAccountName 是否已赋值
                     * 
                     */
                    bool CloudAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>云厂商类型1-腾讯云，2-阿里云</p>
                     * @return ProviderType <p>云厂商类型1-腾讯云，2-阿里云</p>
                     * 
                     */
                    uint64_t GetProviderType() const;

                    /**
                     * 设置<p>云厂商类型1-腾讯云，2-阿里云</p>
                     * @param _providerType <p>云厂商类型1-腾讯云，2-阿里云</p>
                     * 
                     */
                    void SetProviderType(const uint64_t& _providerType);

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取<p>云厂商名称</p>
                     * @return ProviderName <p>云厂商名称</p>
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置<p>云厂商名称</p>
                     * @param _providerName <p>云厂商名称</p>
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * @return SyncCloudDeviceStatus <p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * 
                     */
                    uint64_t GetSyncCloudDeviceStatus() const;

                    /**
                     * 设置<p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * @param _syncCloudDeviceStatus <p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     * 
                     */
                    void SetSyncCloudDeviceStatus(const uint64_t& _syncCloudDeviceStatus);

                    /**
                     * 判断参数 SyncCloudDeviceStatus 是否已赋值
                     * @return SyncCloudDeviceStatus 是否已赋值
                     * 
                     */
                    bool SyncCloudDeviceStatusHasBeenSet() const;

                    /**
                     * 获取<p>所属账号 AppId</p>
                     * @return OwnerAppId <p>所属账号 AppId</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>所属账号 AppId</p>
                     * @param _ownerAppId <p>所属账号 AppId</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>所属账号 UIN</p>
                     * @return OwnerAccountUin <p>所属账号 UIN</p>
                     * 
                     */
                    std::string GetOwnerAccountUin() const;

                    /**
                     * 设置<p>所属账号 UIN</p>
                     * @param _ownerAccountUin <p>所属账号 UIN</p>
                     * 
                     */
                    void SetOwnerAccountUin(const std::string& _ownerAccountUin);

                    /**
                     * 判断参数 OwnerAccountUin 是否已赋值
                     * @return OwnerAccountUin 是否已赋值
                     * 
                     */
                    bool OwnerAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>所属账号展示名</p>
                     * @return OwnerAccountName <p>所属账号展示名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>所属账号展示名</p>
                     * @param _ownerAccountName <p>所属账号展示名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                private:

                    /**
                     * <p>资产ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>实例ID，对应CVM、CDB等实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>资产名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>公网IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>地域编码</p>
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * <p>地域名称</p>
                     */
                    std::string m_apName;
                    bool m_apNameHasBeenSet;

                    /**
                     * <p>操作系统名称</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>资产类型 1 - Linux, 2 - Windows, 3 - MySQL, 4 - SQLServer</p>
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>管理端口</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>所属资产组列表</p>
                     */
                    std::vector<Group> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * <p>资产绑定的账号数</p>
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>堡垒机服务信息，注意没有绑定服务时为null</p>
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>资产所属部门</p>
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * <p>数据库资产的多节点</p>
                     */
                    std::vector<std::string> m_ipPortSet;
                    bool m_ipPortSetHasBeenSet;

                    /**
                     * <p>网络域Id</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>网络域名称</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>是否启用SSL，仅支持Redis资产。0：禁用 1：启用</p>
                     */
                    int64_t m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * <p>已上传的SSL证书名称</p>
                     */
                    std::string m_sSLCertName;
                    bool m_sSLCertNameHasBeenSet;

                    /**
                     * <p>IOA侧的资源ID</p>
                     */
                    int64_t m_iOAId;
                    bool m_iOAIdHasBeenSet;

                    /**
                     * <p>K8S集群托管维度。1-集群，2-命名空间，3-工作负载</p>
                     */
                    uint64_t m_manageDimension;
                    bool m_manageDimensionHasBeenSet;

                    /**
                     * <p>K8S集群托管账号id</p>
                     */
                    uint64_t m_manageAccountId;
                    bool m_manageAccountIdHasBeenSet;

                    /**
                     * <p>K8S集群命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>K8S集群工作负载</p>
                     */
                    std::string m_workload;
                    bool m_workloadHasBeenSet;

                    /**
                     * <p>K8S集群pod已同步数量</p>
                     */
                    uint64_t m_syncPodCount;
                    bool m_syncPodCountHasBeenSet;

                    /**
                     * <p>K8S集群pod总数量</p>
                     */
                    uint64_t m_totalPodCount;
                    bool m_totalPodCountHasBeenSet;

                    /**
                     * <p>云账号id</p>
                     */
                    uint64_t m_cloudAccountId;
                    bool m_cloudAccountIdHasBeenSet;

                    /**
                     * <p>云账号名称</p>
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * <p>云厂商类型1-腾讯云，2-阿里云</p>
                     */
                    uint64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * <p>云厂商名称</p>
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * <p>同步的云资产状态，标记同步的资产的状态情况，0-已删除,1-正常,2-已隔离,3-已过期</p>
                     */
                    uint64_t m_syncCloudDeviceStatus;
                    bool m_syncCloudDeviceStatusHasBeenSet;

                    /**
                     * <p>所属账号 AppId</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>所属账号 UIN</p>
                     */
                    std::string m_ownerAccountUin;
                    bool m_ownerAccountUinHasBeenSet;

                    /**
                     * <p>所属账号展示名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DEVICE_H_
