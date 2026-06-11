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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATECLONEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATECLONEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateCloneInstance请求参数结构体
                */
                class CreateCloneInstanceRequest : public AbstractModel
                {
                public:
                    CreateCloneInstanceRequest();
                    ~CreateCloneInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>创建实例区域</p>
                     * @return Zone <p>创建实例区域</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>创建实例区域</p>
                     * @param _zone <p>创建实例区域</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>字符型vpcid</p>
                     * @return VpcId <p>字符型vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>字符型vpcid</p>
                     * @param _vpcId <p>字符型vpcid</p>
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
                     * 获取<p>字符型subnetid</p>
                     * @return SubnetId <p>字符型subnetid</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>字符型subnetid</p>
                     * @param _subnetId <p>字符型subnetid</p>
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
                     * 获取<p>购买规格</p>
                     * @return SpecCode <p>购买规格</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>购买规格</p>
                     * @param _specCode <p>购买规格</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>存储节点磁盘容量，单位GB</p>
                     * @return Disk <p>存储节点磁盘容量，单位GB</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置<p>存储节点磁盘容量，单位GB</p>
                     * @param _disk <p>存储节点磁盘容量，单位GB</p>
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>存储节点数量</p>
                     * @return StorageNodeNum <p>存储节点数量</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 设置<p>存储节点数量</p>
                     * @param _storageNodeNum <p>存储节点数量</p>
                     * 
                     */
                    void SetStorageNodeNum(const int64_t& _storageNodeNum);

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>源实例id</p>
                     * @return InstanceId <p>源实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>源实例id</p>
                     * @param _instanceId <p>源实例id</p>
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
                     * 获取<p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     * @return InstanceName <p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     * @param _instanceName <p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>标签键值对数组</p>
                     * @return ResourceTags <p>标签键值对数组</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>标签键值对数组</p>
                     * @param _resourceTags <p>标签键值对数组</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>备份回档名称</p>
                     * @return BackupName <p>备份回档名称</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>备份回档名称</p>
                     * @param _backupName <p>备份回档名称</p>
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取<p>存储节点CPU核数</p>
                     * @return StorageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>存储节点CPU核数</p>
                     * @param _storageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    void SetStorageNodeCpu(const int64_t& _storageNodeCpu);

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>存储节点内存大小</p>
                     * @return StorageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>存储节点内存大小</p>
                     * @param _storageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    void SetStorageNodeMem(const int64_t& _storageNodeMem);

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>创建版本</p>
                     * @return CreateVersion <p>创建版本</p>
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 设置<p>创建版本</p>
                     * @param _createVersion <p>创建版本</p>
                     * 
                     */
                    void SetCreateVersion(const std::string& _createVersion);

                    /**
                     * 判断参数 CreateVersion 是否已赋值
                     * @return CreateVersion 是否已赋值
                     * 
                     */
                    bool CreateVersionHasBeenSet() const;

                    /**
                     * 获取<p>创建端口号</p>
                     * @return Vport <p>创建端口号</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>创建端口号</p>
                     * @param _vport <p>创建端口号</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>恢复时间点</p>
                     * @return RecoverTime <p>恢复时间点</p>
                     * 
                     */
                    std::string GetRecoverTime() const;

                    /**
                     * 设置<p>恢复时间点</p>
                     * @param _recoverTime <p>恢复时间点</p>
                     * 
                     */
                    void SetRecoverTime(const std::string& _recoverTime);

                    /**
                     * 判断参数 RecoverTime 是否已赋值
                     * @return RecoverTime 是否已赋值
                     * 
                     */
                    bool RecoverTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     * @return InstanceType <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     * @param _instanceType <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     * @return StorageType <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     * @param _storageType <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>多可用区列表，Zones[0]表示主可用区</p>
                     * @return Zones <p>多可用区列表，Zones[0]表示主可用区</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>多可用区列表，Zones[0]表示主可用区</p>
                     * @param _zones <p>多可用区列表，Zones[0]表示主可用区</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>全能型副本数</p>
                     * @return FullReplications <p>全能型副本数</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>全能型副本数</p>
                     * @param _fullReplications <p>全能型副本数</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>实例模式，normal：标准型；enhanced:加强型</p>
                     * @return InstanceMode <p>实例模式，normal：标准型；enhanced:加强型</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 设置<p>实例模式，normal：标准型；enhanced:加强型</p>
                     * @param _instanceMode <p>实例模式，normal：标准型；enhanced:加强型</p>
                     * 
                     */
                    void SetInstanceMode(const std::string& _instanceMode);

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>安全组id列表</p>
                     * @return SecurityGroupIds <p>安全组id列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组id列表</p>
                     * @param _securityGroupIds <p>安全组id列表</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>创建实例区域</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>字符型vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>字符型subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>购买规格</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>存储节点磁盘容量，单位GB</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>存储节点数量</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>源实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>标签键值对数组</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>备份回档名称</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * <p>存储节点CPU核数</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>存储节点内存大小</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>创建版本</p>
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>创建端口号</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>恢复时间点</p>
                     */
                    std::string m_recoverTime;
                    bool m_recoverTimeHasBeenSet;

                    /**
                     * <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>多可用区列表，Zones[0]表示主可用区</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>全能型副本数</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>实例模式，normal：标准型；enhanced:加强型</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>安全组id列表</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATECLONEINSTANCEREQUEST_H_
