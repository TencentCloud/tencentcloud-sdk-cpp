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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Kibana视图数据
                */
                class KibanaView : public AbstractModel
                {
                public:
                    KibanaView();
                    ~KibanaView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Kibana节点IP
                     * @return Ip Kibana节点IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Kibana节点IP
                     * @param _ip Kibana节点IP
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
                     * 获取节点总磁盘大小
                     * @return DiskSize 节点总磁盘大小
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置节点总磁盘大小
                     * @param _diskSize 节点总磁盘大小
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
                     * 获取磁盘使用率
                     * @return DiskUsage 磁盘使用率
                     * 
                     */
                    double GetDiskUsage() const;

                    /**
                     * 设置磁盘使用率
                     * @param _diskUsage 磁盘使用率
                     * 
                     */
                    void SetDiskUsage(const double& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取节点内存大小
                     * @return MemSize 节点内存大小
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置节点内存大小
                     * @param _memSize 节点内存大小
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取内存使用率
                     * @return MemUsage 内存使用率
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置内存使用率
                     * @param _memUsage 内存使用率
                     * 
                     */
                    void SetMemUsage(const double& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取节点cpu个数
                     * @return CpuNum 节点cpu个数
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置节点cpu个数
                     * @param _cpuNum 节点cpu个数
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取cpu使用率
                     * @return CpuUsage cpu使用率
                     * 
                     */
                    double GetCpuUsage() const;

                    /**
                     * 设置cpu使用率
                     * @param _cpuUsage cpu使用率
                     * 
                     */
                    void SetCpuUsage(const double& _cpuUsage);

                    /**
                     * 判断参数 CpuUsage 是否已赋值
                     * @return CpuUsage 是否已赋值
                     * 
                     */
                    bool CpuUsageHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取ts-0noqayxu-az6-hot-03222010-0
                     * @return NodeId ts-0noqayxu-az6-hot-03222010-0
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置ts-0noqayxu-az6-hot-03222010-0
                     * @param _nodeId ts-0noqayxu-az6-hot-03222010-0
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * Kibana节点IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 节点总磁盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 磁盘使用率
                     */
                    double m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 节点内存大小
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 内存使用率
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * 节点cpu个数
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * cpu使用率
                     */
                    double m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * ts-0noqayxu-az6-hot-03222010-0
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_
