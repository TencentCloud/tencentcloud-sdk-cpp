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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_AUTOPROFILINGCONFIG_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_AUTOPROFILINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 自动性能剖析配置
                */
                class AutoProfilingConfig : public AbstractModel
                {
                public:
                    AutoProfilingConfig();
                    ~AutoProfilingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动CPU剖析任务开关
                     * @return CpuProfilingEnable 自动CPU剖析任务开关
                     * 
                     */
                    bool GetCpuProfilingEnable() const;

                    /**
                     * 设置自动CPU剖析任务开关
                     * @param _cpuProfilingEnable 自动CPU剖析任务开关
                     * 
                     */
                    void SetCpuProfilingEnable(const bool& _cpuProfilingEnable);

                    /**
                     * 判断参数 CpuProfilingEnable 是否已赋值
                     * @return CpuProfilingEnable 是否已赋值
                     * 
                     */
                    bool CpuProfilingEnableHasBeenSet() const;

                    /**
                     * 获取自动内存剖析任务开关
                     * @return MemoryProfilingEnable 自动内存剖析任务开关
                     * 
                     */
                    bool GetMemoryProfilingEnable() const;

                    /**
                     * 设置自动内存剖析任务开关
                     * @param _memoryProfilingEnable 自动内存剖析任务开关
                     * 
                     */
                    void SetMemoryProfilingEnable(const bool& _memoryProfilingEnable);

                    /**
                     * 判断参数 MemoryProfilingEnable 是否已赋值
                     * @return MemoryProfilingEnable 是否已赋值
                     * 
                     */
                    bool MemoryProfilingEnableHasBeenSet() const;

                    /**
                     * 获取自动CPU剖析任务阈值
                     * @return CpuProfilingThreshold 自动CPU剖析任务阈值
                     * 
                     */
                    int64_t GetCpuProfilingThreshold() const;

                    /**
                     * 设置自动CPU剖析任务阈值
                     * @param _cpuProfilingThreshold 自动CPU剖析任务阈值
                     * 
                     */
                    void SetCpuProfilingThreshold(const int64_t& _cpuProfilingThreshold);

                    /**
                     * 判断参数 CpuProfilingThreshold 是否已赋值
                     * @return CpuProfilingThreshold 是否已赋值
                     * 
                     */
                    bool CpuProfilingThresholdHasBeenSet() const;

                    /**
                     * 获取自动内存剖析任务阈值
                     * @return MemoryProfilingThreshold 自动内存剖析任务阈值
                     * 
                     */
                    int64_t GetMemoryProfilingThreshold() const;

                    /**
                     * 设置自动内存剖析任务阈值
                     * @param _memoryProfilingThreshold 自动内存剖析任务阈值
                     * 
                     */
                    void SetMemoryProfilingThreshold(const int64_t& _memoryProfilingThreshold);

                    /**
                     * 判断参数 MemoryProfilingThreshold 是否已赋值
                     * @return MemoryProfilingThreshold 是否已赋值
                     * 
                     */
                    bool MemoryProfilingThresholdHasBeenSet() const;

                    /**
                     * 获取CPU自动剖析任务时长
                     * @return CpuProfilingDuration CPU自动剖析任务时长
                     * 
                     */
                    int64_t GetCpuProfilingDuration() const;

                    /**
                     * 设置CPU自动剖析任务时长
                     * @param _cpuProfilingDuration CPU自动剖析任务时长
                     * 
                     */
                    void SetCpuProfilingDuration(const int64_t& _cpuProfilingDuration);

                    /**
                     * 判断参数 CpuProfilingDuration 是否已赋值
                     * @return CpuProfilingDuration 是否已赋值
                     * 
                     */
                    bool CpuProfilingDurationHasBeenSet() const;

                    /**
                     * 获取内存自动剖析任务时长
                     * @return MemoryProfilingDuration 内存自动剖析任务时长
                     * 
                     */
                    int64_t GetMemoryProfilingDuration() const;

                    /**
                     * 设置内存自动剖析任务时长
                     * @param _memoryProfilingDuration 内存自动剖析任务时长
                     * 
                     */
                    void SetMemoryProfilingDuration(const int64_t& _memoryProfilingDuration);

                    /**
                     * 判断参数 MemoryProfilingDuration 是否已赋值
                     * @return MemoryProfilingDuration 是否已赋值
                     * 
                     */
                    bool MemoryProfilingDurationHasBeenSet() const;

                private:

                    /**
                     * 自动CPU剖析任务开关
                     */
                    bool m_cpuProfilingEnable;
                    bool m_cpuProfilingEnableHasBeenSet;

                    /**
                     * 自动内存剖析任务开关
                     */
                    bool m_memoryProfilingEnable;
                    bool m_memoryProfilingEnableHasBeenSet;

                    /**
                     * 自动CPU剖析任务阈值
                     */
                    int64_t m_cpuProfilingThreshold;
                    bool m_cpuProfilingThresholdHasBeenSet;

                    /**
                     * 自动内存剖析任务阈值
                     */
                    int64_t m_memoryProfilingThreshold;
                    bool m_memoryProfilingThresholdHasBeenSet;

                    /**
                     * CPU自动剖析任务时长
                     */
                    int64_t m_cpuProfilingDuration;
                    bool m_cpuProfilingDurationHasBeenSet;

                    /**
                     * 内存自动剖析任务时长
                     */
                    int64_t m_memoryProfilingDuration;
                    bool m_memoryProfilingDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_AUTOPROFILINGCONFIG_H_
