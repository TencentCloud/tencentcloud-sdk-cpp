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
                     * 获取<p>地域信息</p>
                     * @return Region <p>地域信息</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _region <p>地域信息</p>
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
                     * 获取<p>地域ID</p>
                     * @return RegionId <p>地域ID</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionId <p>地域ID</p>
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
                     * 获取<p>可用区ID</p>
                     * @return ZoneId <p>可用区ID</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区ID</p>
                     * @param _zoneId <p>可用区ID</p>
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
                     * 获取<p>可用区信息</p>
                     * @return Zone <p>可用区信息</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区信息</p>
                     * @param _zone <p>可用区信息</p>
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
                     * 获取<p>实例长ID</p>
                     * @return ResourceId <p>实例长ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>实例长ID</p>
                     * @param _resourceId <p>实例长ID</p>
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
                     * 获取<p>实例状态</p>
                     * @return Status <p>实例状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _status <p>实例状态</p>
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
                     * 获取<p>实例类型</p>
                     * @return InstanceType <p>实例类型</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _instanceType <p>实例类型</p>
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
                     * 获取<p>任务状态</p>
                     * @return TaskStatus <p>任务状态</p>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _taskStatus <p>任务状态</p>
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
                     * 获取<p>内存容量</p>
                     * @return Memory <p>内存容量</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存容量</p>
                     * @param _memory <p>内存容量</p>
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
                     * 获取<p>硬盘容量</p>
                     * @return Volume <p>硬盘容量</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>硬盘容量</p>
                     * @param _volume <p>硬盘容量</p>
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
                     * 获取<p>实例机型</p>
                     * @return DeviceType <p>实例机型</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例机型</p>
                     * @param _deviceType <p>实例机型</p>
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
                     * 获取<p>每秒查询数</p>
                     * @return Qps <p>每秒查询数</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置<p>每秒查询数</p>
                     * @param _qps <p>每秒查询数</p>
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
                     * 获取<p>私有网络ID</p>
                     * @return VpcId <p>私有网络ID</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID</p>
                     * @param _vpcId <p>私有网络ID</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
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
                     * 获取<p>独享集群ID</p>
                     * @return ExClusterId <p>独享集群ID</p>
                     * 
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置<p>独享集群ID</p>
                     * @param _exClusterId <p>独享集群ID</p>
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
                     * 获取<p>独享集群名称</p>
                     * @return ExClusterName <p>独享集群名称</p>
                     * 
                     */
                    std::string GetExClusterName() const;

                    /**
                     * 设置<p>独享集群名称</p>
                     * @param _exClusterName <p>独享集群名称</p>
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
                     * <p>地域信息</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>可用区ID</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>可用区信息</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例长ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>内存容量</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>硬盘容量</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>实例机型</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>每秒查询数</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>私有网络ID</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>独享集群ID</p>
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * <p>独享集群名称</p>
                     */
                    std::string m_exClusterName;
                    bool m_exClusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MASTERINFO_H_
