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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PODDEDUCTIONRATE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PODDEDUCTIONRATE_H_

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
                * 可被预留券抵扣的 Pod 某种规格的抵扣率
                */
                class PodDeductionRate : public AbstractModel
                {
                public:
                    PodDeductionRate();
                    ~PodDeductionRate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod的 CPU
                     * @return Cpu Pod的 CPU
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置Pod的 CPU
                     * @param _cpu Pod的 CPU
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Pod 的内存
                     * @return Memory Pod 的内存
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置Pod 的内存
                     * @param _memory Pod 的内存
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
                     * 获取 Pod 的类型
                     * @return Type  Pod 的类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置 Pod 的类型
                     * @param _type  Pod 的类型
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
                     * 获取 Pod 的 GPU 卡数，Pod 类型为 GPU 时有效。
                     * @return GpuNum  Pod 的 GPU 卡数，Pod 类型为 GPU 时有效。
                     * 
                     */
                    std::string GetGpuNum() const;

                    /**
                     * 设置 Pod 的 GPU 卡数，Pod 类型为 GPU 时有效。
                     * @param _gpuNum  Pod 的 GPU 卡数，Pod 类型为 GPU 时有效。
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
                     * 获取这种规格的 Pod总数
                     * @return TotalNum 这种规格的 Pod总数
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置这种规格的 Pod总数
                     * @param _totalNum 这种规格的 Pod总数
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取这种规格的 Pod被预留券抵扣的数量
                     * @return DeductionNum 这种规格的 Pod被预留券抵扣的数量
                     * 
                     */
                    uint64_t GetDeductionNum() const;

                    /**
                     * 设置这种规格的 Pod被预留券抵扣的数量
                     * @param _deductionNum 这种规格的 Pod被预留券抵扣的数量
                     * 
                     */
                    void SetDeductionNum(const uint64_t& _deductionNum);

                    /**
                     * 判断参数 DeductionNum 是否已赋值
                     * @return DeductionNum 是否已赋值
                     * 
                     */
                    bool DeductionNumHasBeenSet() const;

                private:

                    /**
                     * Pod的 CPU
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Pod 的内存
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     *  Pod 的类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     *  Pod 的 GPU 卡数，Pod 类型为 GPU 时有效。
                     */
                    std::string m_gpuNum;
                    bool m_gpuNumHasBeenSet;

                    /**
                     * 这种规格的 Pod总数
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 这种规格的 Pod被预留券抵扣的数量
                     */
                    uint64_t m_deductionNum;
                    bool m_deductionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PODDEDUCTIONRATE_H_
