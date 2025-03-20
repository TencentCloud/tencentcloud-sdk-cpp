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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 实例节点描述信息
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取机型，如 S1
                     * @return Spec 机型，如 S1
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置机型，如 S1
                     * @param _spec 机型，如 S1
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取cpu核数
                     * @return Core cpu核数
                     * 
                     */
                    int64_t GetCore() const;

                    /**
                     * 设置cpu核数
                     * @param _core cpu核数
                     * 
                     */
                    void SetCore(const int64_t& _core);

                    /**
                     * 判断参数 Core 是否已赋值
                     * @return Core 是否已赋值
                     * 
                     */
                    bool CoreHasBeenSet() const;

                    /**
                     * 获取内存大小
                     * @return Memory 内存大小
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小
                     * @param _memory 内存大小
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
                     * 获取磁盘类型
                     * @return DiskType 磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
                     * @param _diskType 磁盘类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取磁盘大小
                     * @return DiskSize 磁盘大小
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小
                     * @param _diskSize 磁盘大小
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取所属clickhouse cluster名称
                     * @return Cluster 所属clickhouse cluster名称
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置所属clickhouse cluster名称
                     * @param _cluster 所属clickhouse cluster名称
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取节点所属的分组信息
                     * @return NodeGroups 节点所属的分组信息
                     * 
                     */
                    std::vector<GroupInfo> GetNodeGroups() const;

                    /**
                     * 设置节点所属的分组信息
                     * @param _nodeGroups 节点所属的分组信息
                     * 
                     */
                    void SetNodeGroups(const std::vector<GroupInfo>& _nodeGroups);

                    /**
                     * 判断参数 NodeGroups 是否已赋值
                     * @return NodeGroups 是否已赋值
                     * 
                     */
                    bool NodeGroupsHasBeenSet() const;

                    /**
                     * 获取VPC IP
                     * @return Rip VPC IP
                     * 
                     */
                    std::string GetRip() const;

                    /**
                     * 设置VPC IP
                     * @param _rip VPC IP
                     * 
                     */
                    void SetRip(const std::string& _rip);

                    /**
                     * 判断参数 Rip 是否已赋值
                     * @return Rip 是否已赋值
                     * 
                     */
                    bool RipHasBeenSet() const;

                    /**
                     * 获取ture的时候表示该节点上部署了chproxy进程
                     * @return IsCHProxy ture的时候表示该节点上部署了chproxy进程
                     * 
                     */
                    bool GetIsCHProxy() const;

                    /**
                     * 设置ture的时候表示该节点上部署了chproxy进程
                     * @param _isCHProxy ture的时候表示该节点上部署了chproxy进程
                     * 
                     */
                    void SetIsCHProxy(const bool& _isCHProxy);

                    /**
                     * 判断参数 IsCHProxy 是否已赋值
                     * @return IsCHProxy 是否已赋值
                     * 
                     */
                    bool IsCHProxyHasBeenSet() const;

                    /**
                     * 获取节点状态
                     * @return Status 节点状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态
                     * @param _status 节点状态
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
                     * 获取节点uuid
                     * @return UUID 节点uuid
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置节点uuid
                     * @param _uUID 节点uuid
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取区
                     * @return Zone 区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置区
                     * @param _zone 区
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
                     * 获取区描述
                     * @return ZoneDesc 区描述
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置区描述
                     * @param _zoneDesc 区描述
                     * 
                     */
                    void SetZoneDesc(const std::string& _zoneDesc);

                    /**
                     * 判断参数 ZoneDesc 是否已赋值
                     * @return ZoneDesc 是否已赋值
                     * 
                     */
                    bool ZoneDescHasBeenSet() const;

                    /**
                     * 获取真实资源id
                     * @return RealResourceId 真实资源id
                     * 
                     */
                    std::string GetRealResourceId() const;

                    /**
                     * 设置真实资源id
                     * @param _realResourceId 真实资源id
                     * 
                     */
                    void SetRealResourceId(const std::string& _realResourceId);

                    /**
                     * 判断参数 RealResourceId 是否已赋值
                     * @return RealResourceId 是否已赋值
                     * 
                     */
                    bool RealResourceIdHasBeenSet() const;

                private:

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 机型，如 S1
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * cpu核数
                     */
                    int64_t m_core;
                    bool m_coreHasBeenSet;

                    /**
                     * 内存大小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 所属clickhouse cluster名称
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 节点所属的分组信息
                     */
                    std::vector<GroupInfo> m_nodeGroups;
                    bool m_nodeGroupsHasBeenSet;

                    /**
                     * VPC IP
                     */
                    std::string m_rip;
                    bool m_ripHasBeenSet;

                    /**
                     * ture的时候表示该节点上部署了chproxy进程
                     */
                    bool m_isCHProxy;
                    bool m_isCHProxyHasBeenSet;

                    /**
                     * 节点状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点uuid
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 区描述
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * 真实资源id
                     */
                    std::string m_realResourceId;
                    bool m_realResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCENODE_H_
