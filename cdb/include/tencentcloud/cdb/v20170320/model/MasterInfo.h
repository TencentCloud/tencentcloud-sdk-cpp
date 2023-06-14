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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MASTERINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MASTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 主实例信息
                */
                class MasterInfo : public AbstractModel
                {
                public:
                    MasterInfo();
                    ~MasterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用区信息
                     * @return Zone 可用区信息
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息
                     * @param _zone 可用区信息
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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例长ID
                     * @return ResourceId 实例长ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置实例长ID
                     * @param _resourceId 实例长ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return TaskStatus 任务状态
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态
                     * @param _taskStatus 任务状态
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取内存容量
                     * @return Memory 内存容量
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存容量
                     * @param _memory 内存容量
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取硬盘容量
                     * @return Volume 硬盘容量
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置硬盘容量
                     * @param _volume 硬盘容量
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取实例机型
                     * @return DeviceType 实例机型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机型
                     * @param _deviceType 实例机型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取每秒查询数
                     * @return Qps 每秒查询数
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置每秒查询数
                     * @param _qps 每秒查询数
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

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
                    int64_t GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取独享集群ID
                     * @return ExClusterId 独享集群ID
                     * 
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置独享集群ID
                     * @param _exClusterId 独享集群ID
                     * 
                     */
                    void SetExClusterId(const std::string& _exClusterId);

                    /**
                     * 判断参数 ExClusterId 是否已赋值
                     * @return ExClusterId 是否已赋值
                     * 
                     */
                    bool ExClusterIdHasBeenSet() const;

                    /**
                     * 获取独享集群名称
                     * @return ExClusterName 独享集群名称
                     * 
                     */
                    std::string GetExClusterName() const;

                    /**
                     * 设置独享集群名称
                     * @param _exClusterName 独享集群名称
                     * 
                     */
                    void SetExClusterName(const std::string& _exClusterName);

                    /**
                     * 判断参数 ExClusterName 是否已赋值
                     * @return ExClusterName 是否已赋值
                     * 
                     */
                    bool ExClusterNameHasBeenSet() const;

                private:

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例长ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 实例状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例类型
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 任务状态
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 内存容量
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 硬盘容量
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 实例机型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 每秒查询数
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 独享集群ID
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * 独享集群名称
                     */
                    std::string m_exClusterName;
                    bool m_exClusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MASTERINFO_H_
