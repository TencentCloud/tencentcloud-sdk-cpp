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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DEDICATEDCLUSTER_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DEDICATEDCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 专属集群相关信息，用于查询用户的专属集群列表
                */
                class DedicatedCluster : public AbstractModel
                {
                public:
                    DedicatedCluster();
                    ~DedicatedCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专属集群ID
                     * @return DedicatedClusterId 专属集群ID
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置专属集群ID
                     * @param _dedicatedClusterId 专属集群ID
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取专属集群名称
                     * @return Name 专属集群名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置专属集群名称
                     * @param _name 专属集群名称
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
                     * 获取专属集群所在可用区
                     * @return Zone 专属集群所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置专属集群所在可用区
                     * @param _zone 专属集群所在可用区
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
                     * 获取灾备集群
                     * @return StandbyDedicatedClusterSet 灾备集群
                     * 
                     */
                    std::vector<std::string> GetStandbyDedicatedClusterSet() const;

                    /**
                     * 设置灾备集群
                     * @param _standbyDedicatedClusterSet 灾备集群
                     * 
                     */
                    void SetStandbyDedicatedClusterSet(const std::vector<std::string>& _standbyDedicatedClusterSet);

                    /**
                     * 判断参数 StandbyDedicatedClusterSet 是否已赋值
                     * @return StandbyDedicatedClusterSet 是否已赋值
                     * 
                     */
                    bool StandbyDedicatedClusterSetHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceCount 实例数量
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置实例数量
                     * @param _instanceCount 实例数量
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Cpu总量
                     * @return CpuTotal Cpu总量
                     * 
                     */
                    int64_t GetCpuTotal() const;

                    /**
                     * 设置Cpu总量
                     * @param _cpuTotal Cpu总量
                     * 
                     */
                    void SetCpuTotal(const int64_t& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     * 
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取Cpu可用数量
                     * @return CpuAvailable Cpu可用数量
                     * 
                     */
                    int64_t GetCpuAvailable() const;

                    /**
                     * 设置Cpu可用数量
                     * @param _cpuAvailable Cpu可用数量
                     * 
                     */
                    void SetCpuAvailable(const int64_t& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     * 
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取内存总量
                     * @return MemTotal 内存总量
                     * 
                     */
                    int64_t GetMemTotal() const;

                    /**
                     * 设置内存总量
                     * @param _memTotal 内存总量
                     * 
                     */
                    void SetMemTotal(const int64_t& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     * 
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取内存可用量
                     * @return MemAvailable 内存可用量
                     * 
                     */
                    int64_t GetMemAvailable() const;

                    /**
                     * 设置内存可用量
                     * @param _memAvailable 内存可用量
                     * 
                     */
                    void SetMemAvailable(const int64_t& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     * 
                     */
                    bool MemAvailableHasBeenSet() const;

                    /**
                     * 获取磁盘总量
                     * @return DiskTotal 磁盘总量
                     * 
                     */
                    int64_t GetDiskTotal() const;

                    /**
                     * 设置磁盘总量
                     * @param _diskTotal 磁盘总量
                     * 
                     */
                    void SetDiskTotal(const int64_t& _diskTotal);

                    /**
                     * 判断参数 DiskTotal 是否已赋值
                     * @return DiskTotal 是否已赋值
                     * 
                     */
                    bool DiskTotalHasBeenSet() const;

                    /**
                     * 获取磁盘可用量
                     * @return DiskAvailable 磁盘可用量
                     * 
                     */
                    int64_t GetDiskAvailable() const;

                    /**
                     * 设置磁盘可用量
                     * @param _diskAvailable 磁盘可用量
                     * 
                     */
                    void SetDiskAvailable(const int64_t& _diskAvailable);

                    /**
                     * 判断参数 DiskAvailable 是否已赋值
                     * @return DiskAvailable 是否已赋值
                     * 
                     */
                    bool DiskAvailableHasBeenSet() const;

                private:

                    /**
                     * 专属集群ID
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * 专属集群名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 专属集群所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 灾备集群
                     */
                    std::vector<std::string> m_standbyDedicatedClusterSet;
                    bool m_standbyDedicatedClusterSetHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Cpu总量
                     */
                    int64_t m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * Cpu可用数量
                     */
                    int64_t m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * 内存总量
                     */
                    int64_t m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * 内存可用量
                     */
                    int64_t m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                    /**
                     * 磁盘总量
                     */
                    int64_t m_diskTotal;
                    bool m_diskTotalHasBeenSet;

                    /**
                     * 磁盘可用量
                     */
                    int64_t m_diskAvailable;
                    bool m_diskAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DEDICATEDCLUSTER_H_
