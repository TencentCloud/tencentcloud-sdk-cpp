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
                     * 获取<p>Kibana节点IP</p>
                     * @return Ip <p>Kibana节点IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Kibana节点IP</p>
                     * @param _ip <p>Kibana节点IP</p>
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
                     * 获取<p>节点总磁盘大小</p>
                     * @return DiskSize <p>节点总磁盘大小</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>节点总磁盘大小</p>
                     * @param _diskSize <p>节点总磁盘大小</p>
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
                     * 获取<p>磁盘使用率</p>
                     * @return DiskUsage <p>磁盘使用率</p>
                     * 
                     */
                    double GetDiskUsage() const;

                    /**
                     * 设置<p>磁盘使用率</p>
                     * @param _diskUsage <p>磁盘使用率</p>
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
                     * 获取<p>节点内存大小</p>
                     * @return MemSize <p>节点内存大小</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>节点内存大小</p>
                     * @param _memSize <p>节点内存大小</p>
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
                     * 获取<p>内存使用率</p>
                     * @return MemUsage <p>内存使用率</p>
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置<p>内存使用率</p>
                     * @param _memUsage <p>内存使用率</p>
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
                     * 获取<p>节点cpu个数</p>
                     * @return CpuNum <p>节点cpu个数</p>
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置<p>节点cpu个数</p>
                     * @param _cpuNum <p>节点cpu个数</p>
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
                     * 获取<p>cpu使用率</p>
                     * @return CpuUsage <p>cpu使用率</p>
                     * 
                     */
                    double GetCpuUsage() const;

                    /**
                     * 设置<p>cpu使用率</p>
                     * @param _cpuUsage <p>cpu使用率</p>
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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * @return NodeId <p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * @param _nodeId <p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>客户侧Ip信息</p>
                     * @return UserIp <p>客户侧Ip信息</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>客户侧Ip信息</p>
                     * @param _userIp <p>客户侧Ip信息</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                private:

                    /**
                     * <p>Kibana节点IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>节点总磁盘大小</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>磁盘使用率</p>
                     */
                    double m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * <p>节点内存大小</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>内存使用率</p>
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * <p>节点cpu个数</p>
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * <p>cpu使用率</p>
                     */
                    double m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>ts-0noqayxu-az6-hot-03222010-0</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>客户侧Ip信息</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_
