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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRAINSTANCESET_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRAINSTANCESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * libra实例信息
                */
                class LibraInstanceSet : public AbstractModel
                {
                public:
                    LibraInstanceSet();
                    ~LibraInstanceSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库模式
                     * @return DbMode 数据库模式
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置数据库模式
                     * @param _dbMode 数据库模式
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取cpu核数
                     * @return InstanceCpu cpu核数
                     * 
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置cpu核数
                     * @param _instanceCpu cpu核数
                     * 
                     */
                    void SetInstanceCpu(const int64_t& _instanceCpu);

                    /**
                     * 判断参数 InstanceCpu 是否已赋值
                     * @return InstanceCpu 是否已赋值
                     * 
                     */
                    bool InstanceCpuHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InstanceDeviceType 实例类型
                     * 
                     */
                    std::string GetInstanceDeviceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceDeviceType 实例类型
                     * 
                     */
                    void SetInstanceDeviceType(const std::string& _instanceDeviceType);

                    /**
                     * 判断参数 InstanceDeviceType 是否已赋值
                     * @return InstanceDeviceType 是否已赋值
                     * 
                     */
                    bool InstanceDeviceTypeHasBeenSet() const;

                    /**
                     * 获取组id
                     * @return InstanceGroupId 组id
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置组id
                     * @param _instanceGroupId 组id
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取内存
                     * @return InstanceMemory 内存
                     * 
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置内存
                     * @param _instanceMemory 内存
                     * 
                     */
                    void SetInstanceMemory(const int64_t& _instanceMemory);

                    /**
                     * 判断参数 InstanceMemory 是否已赋值
                     * @return InstanceMemory 是否已赋值
                     * 
                     */
                    bool InstanceMemoryHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取付费模式
                     * @return InstancePayMode 付费模式
                     * 
                     */
                    int64_t GetInstancePayMode() const;

                    /**
                     * 设置付费模式
                     * @param _instancePayMode 付费模式
                     * 
                     */
                    void SetInstancePayMode(const int64_t& _instancePayMode);

                    /**
                     * 判断参数 InstancePayMode 是否已赋值
                     * @return InstancePayMode 是否已赋值
                     * 
                     */
                    bool InstancePayModeHasBeenSet() const;

                    /**
                     * 获取付费结束时间
                     * @return InstancePeriodEndTime 付费结束时间
                     * 
                     */
                    std::string GetInstancePeriodEndTime() const;

                    /**
                     * 设置付费结束时间
                     * @param _instancePeriodEndTime 付费结束时间
                     * 
                     */
                    void SetInstancePeriodEndTime(const std::string& _instancePeriodEndTime);

                    /**
                     * 判断参数 InstancePeriodEndTime 是否已赋值
                     * @return InstancePeriodEndTime 是否已赋值
                     * 
                     */
                    bool InstancePeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取实例角色
                     * @return InstanceRole 实例角色
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例角色
                     * @param _instanceRole 实例角色
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return InstanceStatus 实例状态
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态
                     * @param _instanceStatus 实例状态
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例状态描述
                     * @return InstanceStatusDesc 实例状态描述
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置实例状态描述
                     * @param _instanceStatusDesc 实例状态描述
                     * 
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * 
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetType 网络类型
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型
                     * @param _netType 网络类型
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return UniqSubnetId 子网id
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _uniqSubnetId 子网id
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取vpcid
                     * @return UniqVpcId vpcid
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpcid
                     * @param _uniqVpcId vpcid
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取虚拟ip
                     * @return Vip 虚拟ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置虚拟ip
                     * @param _vip 虚拟ip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取虚拟端口
                     * @return Vport 虚拟端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置虚拟端口
                     * @param _vport 虚拟端口
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
                     * 获取外网区域
                     * @return WanDomain 外网区域
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置外网区域
                     * @param _wanDomain 外网区域
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return WanIP 外网ip
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置外网ip
                     * @param _wanIP 外网ip
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取外网port
                     * @return WanPort 外网port
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置外网port
                     * @param _wanPort 外网port
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取外网状态
                     * @return WanStatus 外网状态
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置外网状态
                     * @param _wanStatus 外网状态
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取硬盘
                     * @return InstanceStorage 硬盘
                     * 
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置硬盘
                     * @param _instanceStorage 硬盘
                     * 
                     */
                    void SetInstanceStorage(const int64_t& _instanceStorage);

                    /**
                     * 判断参数 InstanceStorage 是否已赋值
                     * @return InstanceStorage 是否已赋值
                     * 
                     */
                    bool InstanceStorageHasBeenSet() const;

                    /**
                     * 获取硬盘类型
                     * @return InstanceStorageType 硬盘类型
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置硬盘类型
                     * @param _instanceStorageType 硬盘类型
                     * 
                     */
                    void SetInstanceStorageType(const std::string& _instanceStorageType);

                    /**
                     * 判断参数 InstanceStorageType 是否已赋值
                     * @return InstanceStorageType 是否已赋值
                     * 
                     */
                    bool InstanceStorageTypeHasBeenSet() const;

                private:

                    /**
                     * 数据库模式
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * cpu核数
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceDeviceType;
                    bool m_instanceDeviceTypeHasBeenSet;

                    /**
                     * 组id
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 付费模式
                     */
                    int64_t m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * 付费结束时间
                     */
                    std::string m_instancePeriodEndTime;
                    bool m_instancePeriodEndTimeHasBeenSet;

                    /**
                     * 实例角色
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例状态描述
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * 网络类型
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * vpcid
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 虚拟ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 虚拟端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 外网区域
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 外网port
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 外网状态
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 硬盘
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                    /**
                     * 硬盘类型
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRAINSTANCESET_H_
