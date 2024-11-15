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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DetailData.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC集群内宿主机的统计信息
                */
                class HostStatistic : public AbstractModel
                {
                public:
                    HostStatistic();
                    ~HostStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取宿主机规格
                     * @return HostType 宿主机规格
                     * 
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置宿主机规格
                     * @param _hostType 宿主机规格
                     * 
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取宿主机机型系列
                     * @return HostFamily 宿主机机型系列
                     * 
                     */
                    std::string GetHostFamily() const;

                    /**
                     * 设置宿主机机型系列
                     * @param _hostFamily 宿主机机型系列
                     * 
                     */
                    void SetHostFamily(const std::string& _hostFamily);

                    /**
                     * 判断参数 HostFamily 是否已赋值
                     * @return HostFamily 是否已赋值
                     * 
                     */
                    bool HostFamilyHasBeenSet() const;

                    /**
                     * 获取宿主机的CPU核数，单位：核
                     * @return Cpu 宿主机的CPU核数，单位：核
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置宿主机的CPU核数，单位：核
                     * @param _cpu 宿主机的CPU核数，单位：核
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取宿主机内存大小，单位：GB
                     * @return Memory 宿主机内存大小，单位：GB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置宿主机内存大小，单位：GB
                     * @param _memory 宿主机内存大小，单位：GB
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取该规格宿主机的数量
                     * @return Count 该规格宿主机的数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置该规格宿主机的数量
                     * @param _count 该规格宿主机的数量
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取平均cpu负载百分比
                     * @return CpuAverage 平均cpu负载百分比
                     * 
                     */
                    double GetCpuAverage() const;

                    /**
                     * 设置平均cpu负载百分比
                     * @param _cpuAverage 平均cpu负载百分比
                     * 
                     */
                    void SetCpuAverage(const double& _cpuAverage);

                    /**
                     * 判断参数 CpuAverage 是否已赋值
                     * @return CpuAverage 是否已赋值
                     * 
                     */
                    bool CpuAverageHasBeenSet() const;

                    /**
                     * 获取平均内存使用率百分比
                     * @return MemAverage 平均内存使用率百分比
                     * 
                     */
                    double GetMemAverage() const;

                    /**
                     * 设置平均内存使用率百分比
                     * @param _memAverage 平均内存使用率百分比
                     * 
                     */
                    void SetMemAverage(const double& _memAverage);

                    /**
                     * 判断参数 MemAverage 是否已赋值
                     * @return MemAverage 是否已赋值
                     * 
                     */
                    bool MemAverageHasBeenSet() const;

                    /**
                     * 获取平均网络流量
                     * @return NetAverage 平均网络流量
                     * 
                     */
                    double GetNetAverage() const;

                    /**
                     * 设置平均网络流量
                     * @param _netAverage 平均网络流量
                     * 
                     */
                    void SetNetAverage(const double& _netAverage);

                    /**
                     * 判断参数 NetAverage 是否已赋值
                     * @return NetAverage 是否已赋值
                     * 
                     */
                    bool NetAverageHasBeenSet() const;

                    /**
                     * 获取cpu详细监控数据
                     * @return CpuDetailData cpu详细监控数据
                     * 
                     */
                    DetailData GetCpuDetailData() const;

                    /**
                     * 设置cpu详细监控数据
                     * @param _cpuDetailData cpu详细监控数据
                     * 
                     */
                    void SetCpuDetailData(const DetailData& _cpuDetailData);

                    /**
                     * 判断参数 CpuDetailData 是否已赋值
                     * @return CpuDetailData 是否已赋值
                     * 
                     */
                    bool CpuDetailDataHasBeenSet() const;

                    /**
                     * 获取内存详细数据
                     * @return MemDetailData 内存详细数据
                     * 
                     */
                    DetailData GetMemDetailData() const;

                    /**
                     * 设置内存详细数据
                     * @param _memDetailData 内存详细数据
                     * 
                     */
                    void SetMemDetailData(const DetailData& _memDetailData);

                    /**
                     * 判断参数 MemDetailData 是否已赋值
                     * @return MemDetailData 是否已赋值
                     * 
                     */
                    bool MemDetailDataHasBeenSet() const;

                    /**
                     * 获取网络速率详细数据
                     * @return NetRateDetailData 网络速率详细数据
                     * 
                     */
                    DetailData GetNetRateDetailData() const;

                    /**
                     * 设置网络速率详细数据
                     * @param _netRateDetailData 网络速率详细数据
                     * 
                     */
                    void SetNetRateDetailData(const DetailData& _netRateDetailData);

                    /**
                     * 判断参数 NetRateDetailData 是否已赋值
                     * @return NetRateDetailData 是否已赋值
                     * 
                     */
                    bool NetRateDetailDataHasBeenSet() const;

                    /**
                     * 获取网速包详细数据
                     * @return NetPacketDetailData 网速包详细数据
                     * 
                     */
                    DetailData GetNetPacketDetailData() const;

                    /**
                     * 设置网速包详细数据
                     * @param _netPacketDetailData 网速包详细数据
                     * 
                     */
                    void SetNetPacketDetailData(const DetailData& _netPacketDetailData);

                    /**
                     * 判断参数 NetPacketDetailData 是否已赋值
                     * @return NetPacketDetailData 是否已赋值
                     * 
                     */
                    bool NetPacketDetailDataHasBeenSet() const;

                private:

                    /**
                     * 宿主机规格
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * 宿主机机型系列
                     */
                    std::string m_hostFamily;
                    bool m_hostFamilyHasBeenSet;

                    /**
                     * 宿主机的CPU核数，单位：核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 宿主机内存大小，单位：GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 该规格宿主机的数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 平均cpu负载百分比
                     */
                    double m_cpuAverage;
                    bool m_cpuAverageHasBeenSet;

                    /**
                     * 平均内存使用率百分比
                     */
                    double m_memAverage;
                    bool m_memAverageHasBeenSet;

                    /**
                     * 平均网络流量
                     */
                    double m_netAverage;
                    bool m_netAverageHasBeenSet;

                    /**
                     * cpu详细监控数据
                     */
                    DetailData m_cpuDetailData;
                    bool m_cpuDetailDataHasBeenSet;

                    /**
                     * 内存详细数据
                     */
                    DetailData m_memDetailData;
                    bool m_memDetailDataHasBeenSet;

                    /**
                     * 网络速率详细数据
                     */
                    DetailData m_netRateDetailData;
                    bool m_netRateDetailDataHasBeenSet;

                    /**
                     * 网速包详细数据
                     */
                    DetailData m_netPacketDetailData;
                    bool m_netPacketDetailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_
