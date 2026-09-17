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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCE_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * 描述物理机实例信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>绑定的物理机ID</p>
                     * @return MachineId <p>绑定的物理机ID</p>
                     * 
                     */
                    std::string GetMachineId() const;

                    /**
                     * 设置<p>绑定的物理机ID</p>
                     * @param _machineId <p>绑定的物理机ID</p>
                     * 
                     */
                    void SetMachineId(const std::string& _machineId);

                    /**
                     * 判断参数 MachineId 是否已赋值
                     * @return MachineId 是否已赋值
                     * 
                     */
                    bool MachineIdHasBeenSet() const;

                    /**
                     * 获取<p>机型规格</p>
                     * @return InstanceType <p>机型规格</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>机型规格</p>
                     * @param _instanceType <p>机型规格</p>
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
                     * 获取<p>可用区代码</p>
                     * @return Zone <p>可用区代码</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区代码</p>
                     * @param _zone <p>可用区代码</p>
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
                     * 获取<p>镜像ID</p>
                     * @return ImageId <p>镜像ID</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像ID</p>
                     * @param _imageId <p>镜像ID</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像版本号</p>
                     * @return VersionNumber <p>镜像版本号</p>
                     * @deprecated
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置<p>镜像版本号</p>
                     * @param _versionNumber <p>镜像版本号</p>
                     * @deprecated
                     */
                    void SetVersionNumber(const std::string& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * @deprecated
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取<p>实例状态，可选值：allocating、running、isolating、isolated、terminating、error</p>
                     * @return InstanceStatus <p>实例状态，可选值：allocating、running、isolating、isolated、terminating、error</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态，可选值：allocating、running、isolating、isolated、terminating、error</p>
                     * @param _instanceStatus <p>实例状态，可选值：allocating、running、isolating、isolated、terminating、error</p>
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
                     * 获取<p>操作状态，可选值：normal、starting、stopping、stopped、rebooting</p>
                     * @return OperateStatus <p>操作状态，可选值：normal、starting、stopping、stopped、rebooting</p>
                     * 
                     */
                    std::string GetOperateStatus() const;

                    /**
                     * 设置<p>操作状态，可选值：normal、starting、stopping、stopped、rebooting</p>
                     * @param _operateStatus <p>操作状态，可选值：normal、starting、stopping、stopped、rebooting</p>
                     * 
                     */
                    void SetOperateStatus(const std::string& _operateStatus);

                    /**
                     * 判断参数 OperateStatus 是否已赋值
                     * @return OperateStatus 是否已赋值
                     * 
                     */
                    bool OperateStatusHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID</p>
                     * @return PrivateNetworkId <p>私有网络ID</p>
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置<p>私有网络ID</p>
                     * @param _privateNetworkId <p>私有网络ID</p>
                     * 
                     */
                    void SetPrivateNetworkId(const std::string& _privateNetworkId);

                    /**
                     * 判断参数 PrivateNetworkId 是否已赋值
                     * @return PrivateNetworkId 是否已赋值
                     * 
                     */
                    bool PrivateNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>私有IPv4地址</p>
                     * @return PrivateIp <p>私有IPv4地址</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>私有IPv4地址</p>
                     * @param _privateIp <p>私有IPv4地址</p>
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
                     * 获取<p>私有IPv6地址</p>
                     * @return PrivateIpV6 <p>私有IPv6地址</p>
                     * 
                     */
                    std::string GetPrivateIpV6() const;

                    /**
                     * 设置<p>私有IPv6地址</p>
                     * @param _privateIpV6 <p>私有IPv6地址</p>
                     * 
                     */
                    void SetPrivateIpV6(const std::string& _privateIpV6);

                    /**
                     * 判断参数 PrivateIpV6 是否已赋值
                     * @return PrivateIpV6 是否已赋值
                     * 
                     */
                    bool PrivateIpV6HasBeenSet() const;

                    /**
                     * 获取<p>公网网络ID</p>
                     * @return PublicNetworkId <p>公网网络ID</p>
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置<p>公网网络ID</p>
                     * @param _publicNetworkId <p>公网网络ID</p>
                     * 
                     */
                    void SetPublicNetworkId(const std::string& _publicNetworkId);

                    /**
                     * 判断参数 PublicNetworkId 是否已赋值
                     * @return PublicNetworkId 是否已赋值
                     * 
                     */
                    bool PublicNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>公网IPv4地址</p>
                     * @return PublicIp <p>公网IPv4地址</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网IPv4地址</p>
                     * @param _publicIp <p>公网IPv4地址</p>
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
                     * 获取<p>公网IPv6地址</p>
                     * @return PublicIpV6 <p>公网IPv6地址</p>
                     * 
                     */
                    std::string GetPublicIpV6() const;

                    /**
                     * 设置<p>公网IPv6地址</p>
                     * @param _publicIpV6 <p>公网IPv6地址</p>
                     * 
                     */
                    void SetPublicIpV6(const std::string& _publicIpV6);

                    /**
                     * 判断参数 PublicIpV6 是否已赋值
                     * @return PublicIpV6 是否已赋值
                     * 
                     */
                    bool PublicIpV6HasBeenSet() const;

                    /**
                     * 获取<p>文件系统类型</p>
                     * @return FileSystemType <p>文件系统类型</p>
                     * 
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置<p>文件系统类型</p>
                     * @param _fileSystemType <p>文件系统类型</p>
                     * 
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     * 
                     */
                    bool FileSystemTypeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     * @return CreatedTime <p>创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     * @param _createdTime <p>创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>机型族标识</p>
                     * @return InstanceFamily <p>机型族标识</p>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置<p>机型族标识</p>
                     * @param _instanceFamily <p>机型族标识</p>
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取<p>机型族名称</p>
                     * @return InstanceFamilyName <p>机型族名称</p>
                     * 
                     */
                    std::string GetInstanceFamilyName() const;

                    /**
                     * 设置<p>机型族名称</p>
                     * @param _instanceFamilyName <p>机型族名称</p>
                     * 
                     */
                    void SetInstanceFamilyName(const std::string& _instanceFamilyName);

                    /**
                     * 判断参数 InstanceFamilyName 是否已赋值
                     * @return InstanceFamilyName 是否已赋值
                     * 
                     */
                    bool InstanceFamilyNameHasBeenSet() const;

                    /**
                     * 获取<p>CPU 型号</p>
                     * @return CpuType <p>CPU 型号</p>
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置<p>CPU 型号</p>
                     * @param _cpuType <p>CPU 型号</p>
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>CPU 核数</p>
                     * @return Cpu <p>CPU 核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>CPU 核数</p>
                     * @param _cpu <p>CPU 核数</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存大小</p>
                     * @return Memory <p>内存大小</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小</p>
                     * @param _memory <p>内存大小</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>绑定的物理机ID</p>
                     */
                    std::string m_machineId;
                    bool m_machineIdHasBeenSet;

                    /**
                     * <p>机型规格</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>可用区代码</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>镜像ID</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>镜像版本号</p>
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>实例状态，可选值：allocating、running、isolating、isolated、terminating、error</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>操作状态，可选值：normal、starting、stopping、stopped、rebooting</p>
                     */
                    std::string m_operateStatus;
                    bool m_operateStatusHasBeenSet;

                    /**
                     * <p>私有网络ID</p>
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * <p>私有IPv4地址</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>私有IPv6地址</p>
                     */
                    std::string m_privateIpV6;
                    bool m_privateIpV6HasBeenSet;

                    /**
                     * <p>公网网络ID</p>
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * <p>公网IPv4地址</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>公网IPv6地址</p>
                     */
                    std::string m_publicIpV6;
                    bool m_publicIpV6HasBeenSet;

                    /**
                     * <p>文件系统类型</p>
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                    /**
                     * <p>创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>机型族标识</p>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * <p>机型族名称</p>
                     */
                    std::string m_instanceFamilyName;
                    bool m_instanceFamilyNameHasBeenSet;

                    /**
                     * <p>CPU 型号</p>
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * <p>CPU 核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存大小</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCE_H_
