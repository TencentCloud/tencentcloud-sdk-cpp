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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_COMPUTEDETAIL_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_COMPUTEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 算力详情
                */
                class ComputeDetail : public AbstractModel
                {
                public:
                    ComputeDetail();
                    ~ComputeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取算力套餐ID
                     * @return BundleType 算力套餐ID
                     * 
                     */
                    std::string GetBundleType() const;

                    /**
                     * 设置算力套餐ID
                     * @param _bundleType 算力套餐ID
                     * 
                     */
                    void SetBundleType(const std::string& _bundleType);

                    /**
                     * 判断参数 BundleType 是否已赋值
                     * @return BundleType 是否已赋值
                     * 
                     */
                    bool BundleTypeHasBeenSet() const;

                    /**
                     * 获取节点数量
                     * @return Count 节点数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置节点数量
                     * @param _count 节点数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取显卡数量
                     * @return GPUCount 显卡数量
                     * 
                     */
                    std::string GetGPUCount() const;

                    /**
                     * 设置显卡数量
                     * @param _gPUCount 显卡数量
                     * 
                     */
                    void SetGPUCount(const std::string& _gPUCount);

                    /**
                     * 判断参数 GPUCount 是否已赋值
                     * @return GPUCount 是否已赋值
                     * 
                     */
                    bool GPUCountHasBeenSet() const;

                    /**
                     * 获取显存
                     * @return GPUMemory 显存
                     * 
                     */
                    std::string GetGPUMemory() const;

                    /**
                     * 设置显存
                     * @param _gPUMemory 显存
                     * 
                     */
                    void SetGPUMemory(const std::string& _gPUMemory);

                    /**
                     * 判断参数 GPUMemory 是否已赋值
                     * @return GPUMemory 是否已赋值
                     * 
                     */
                    bool GPUMemoryHasBeenSet() const;

                    /**
                     * 获取算力
                     * @return GPUPerformance 算力
                     * 
                     */
                    std::string GetGPUPerformance() const;

                    /**
                     * 设置算力
                     * @param _gPUPerformance 算力
                     * 
                     */
                    void SetGPUPerformance(const std::string& _gPUPerformance);

                    /**
                     * 判断参数 GPUPerformance 是否已赋值
                     * @return GPUPerformance 是否已赋值
                     * 
                     */
                    bool GPUPerformanceHasBeenSet() const;

                    /**
                     * 获取CPU核数
                     * @return CPU CPU核数
                     * 
                     */
                    std::string GetCPU() const;

                    /**
                     * 设置CPU核数
                     * @param _cPU CPU核数
                     * 
                     */
                    void SetCPU(const std::string& _cPU);

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
                    std::string GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
                     * 
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * 算力套餐ID
                     */
                    std::string m_bundleType;
                    bool m_bundleTypeHasBeenSet;

                    /**
                     * 节点数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 显卡数量
                     */
                    std::string m_gPUCount;
                    bool m_gPUCountHasBeenSet;

                    /**
                     * 显存
                     */
                    std::string m_gPUMemory;
                    bool m_gPUMemoryHasBeenSet;

                    /**
                     * 算力
                     */
                    std::string m_gPUPerformance;
                    bool m_gPUPerformanceHasBeenSet;

                    /**
                     * CPU核数
                     */
                    std::string m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_COMPUTEDETAIL_H_
