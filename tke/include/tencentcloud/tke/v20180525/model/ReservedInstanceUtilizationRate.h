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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCEUTILIZATIONRATE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCEUTILIZATIONRATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 预留券的使用率信息
                */
                class ReservedInstanceUtilizationRate : public AbstractModel
                {
                public:
                    ReservedInstanceUtilizationRate();
                    ~ReservedInstanceUtilizationRate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用率
                     * @return Rate 使用率
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置使用率
                     * @param _rate 使用率
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取预留券数量
                     * @return Num 预留券数量
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置预留券数量
                     * @param _num 预留券数量
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取核数
                     * @return CPU 核数
                     * 
                     */
                    double GetCPU() const;

                    /**
                     * 设置核数
                     * @param _cPU 核数
                     * 
                     */
                    void SetCPU(const double& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取 预留券类型
                     * @return Type  预留券类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置 预留券类型
                     * @param _type  预留券类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取GPU 卡数
                     * @return GpuNum GPU 卡数
                     * 
                     */
                    std::string GetGpuNum() const;

                    /**
                     * 设置GPU 卡数
                     * @param _gpuNum GPU 卡数
                     * 
                     */
                    void SetGpuNum(const std::string& _gpuNum);

                    /**
                     * 判断参数 GpuNum 是否已赋值
                     * @return GpuNum 是否已赋值
                     * 
                     */
                    bool GpuNumHasBeenSet() const;

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
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Pod 数量
                     * @return PodNum Pod 数量
                     * 
                     */
                    uint64_t GetPodNum() const;

                    /**
                     * 设置Pod 数量
                     * @param _podNum Pod 数量
                     * 
                     */
                    void SetPodNum(const uint64_t& _podNum);

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                private:

                    /**
                     * 使用率
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 预留券数量
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 核数
                     */
                    double m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     *  预留券类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * GPU 卡数
                     */
                    std::string m_gpuNum;
                    bool m_gpuNumHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Pod 数量
                     */
                    uint64_t m_podNum;
                    bool m_podNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCEUTILIZATIONRATE_H_
