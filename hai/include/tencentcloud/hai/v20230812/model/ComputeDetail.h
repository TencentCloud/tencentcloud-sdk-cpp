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
                     * 获取<p>算力套餐ID</p>
                     * @return BundleType <p>算力套餐ID</p>
                     * 
                     */
                    std::string GetBundleType() const;

                    /**
                     * 设置<p>算力套餐ID</p>
                     * @param _bundleType <p>算力套餐ID</p>
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
                     * 获取<p>节点数量</p>
                     * @return Count <p>节点数量</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>节点数量</p>
                     * @param _count <p>节点数量</p>
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
                     * 获取<p>显卡数量</p>
                     * @return GPUCount <p>显卡数量</p>
                     * 
                     */
                    std::string GetGPUCount() const;

                    /**
                     * 设置<p>显卡数量</p>
                     * @param _gPUCount <p>显卡数量</p>
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
                     * 获取<p>显存</p>
                     * @return GPUMemory <p>显存</p>
                     * 
                     */
                    std::string GetGPUMemory() const;

                    /**
                     * 设置<p>显存</p>
                     * @param _gPUMemory <p>显存</p>
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
                     * 获取<p>算力</p>
                     * @return GPUPerformance <p>算力</p>
                     * 
                     */
                    std::string GetGPUPerformance() const;

                    /**
                     * 设置<p>算力</p>
                     * @param _gPUPerformance <p>算力</p>
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
                     * 获取<p>CPU核数</p>
                     * @return CPU <p>CPU核数</p>
                     * 
                     */
                    std::string GetCPU() const;

                    /**
                     * 设置<p>CPU核数</p>
                     * @param _cPU <p>CPU核数</p>
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
                     * 获取<p>内存</p>
                     * @return Memory <p>内存</p>
                     * 
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置<p>内存</p>
                     * @param _memory <p>内存</p>
                     * 
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>该套餐是否支持包年包月</p>
                     * @return PrepaidEnable <p>该套餐是否支持包年包月</p>
                     * 
                     */
                    bool GetPrepaidEnable() const;

                    /**
                     * 设置<p>该套餐是否支持包年包月</p>
                     * @param _prepaidEnable <p>该套餐是否支持包年包月</p>
                     * 
                     */
                    void SetPrepaidEnable(const bool& _prepaidEnable);

                    /**
                     * 判断参数 PrepaidEnable 是否已赋值
                     * @return PrepaidEnable 是否已赋值
                     * 
                     */
                    bool PrepaidEnableHasBeenSet() const;

                    /**
                     * 获取<p>该套餐是否支持按量计费</p>
                     * @return PostpaidEnable <p>该套餐是否支持按量计费</p>
                     * 
                     */
                    bool GetPostpaidEnable() const;

                    /**
                     * 设置<p>该套餐是否支持按量计费</p>
                     * @param _postpaidEnable <p>该套餐是否支持按量计费</p>
                     * 
                     */
                    void SetPostpaidEnable(const bool& _postpaidEnable);

                    /**
                     * 判断参数 PostpaidEnable 是否已赋值
                     * @return PostpaidEnable 是否已赋值
                     * 
                     */
                    bool PostpaidEnableHasBeenSet() const;

                private:

                    /**
                     * <p>算力套餐ID</p>
                     */
                    std::string m_bundleType;
                    bool m_bundleTypeHasBeenSet;

                    /**
                     * <p>节点数量</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>显卡数量</p>
                     */
                    std::string m_gPUCount;
                    bool m_gPUCountHasBeenSet;

                    /**
                     * <p>显存</p>
                     */
                    std::string m_gPUMemory;
                    bool m_gPUMemoryHasBeenSet;

                    /**
                     * <p>算力</p>
                     */
                    std::string m_gPUPerformance;
                    bool m_gPUPerformanceHasBeenSet;

                    /**
                     * <p>CPU核数</p>
                     */
                    std::string m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>内存</p>
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>该套餐是否支持包年包月</p>
                     */
                    bool m_prepaidEnable;
                    bool m_prepaidEnableHasBeenSet;

                    /**
                     * <p>该套餐是否支持按量计费</p>
                     */
                    bool m_postpaidEnable;
                    bool m_postpaidEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_COMPUTEDETAIL_H_
