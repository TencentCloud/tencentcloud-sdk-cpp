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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_EMRRESOURCEUSAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_EMRRESOURCEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * EMR-TKE 集群资源用量
                */
                class EmrResourceUsage : public AbstractModel
                {
                public:
                    EmrResourceUsage();
                    ~EmrResourceUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CPU 用量，例如 2core</p>
                     * @return Cpu <p>CPU 用量，例如 2core</p>
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置<p>CPU 用量，例如 2core</p>
                     * @param _cpu <p>CPU 用量，例如 2core</p>
                     * 
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存用量，例如 4GB</p>
                     * @return Mem <p>内存用量，例如 4GB</p>
                     * 
                     */
                    std::string GetMem() const;

                    /**
                     * 设置<p>内存用量，例如 4GB</p>
                     * @param _mem <p>内存用量，例如 4GB</p>
                     * 
                     */
                    void SetMem(const std::string& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                private:

                    /**
                     * <p>CPU 用量，例如 2core</p>
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存用量，例如 4GB</p>
                     */
                    std::string m_mem;
                    bool m_memHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_EMRRESOURCEUSAGE_H_
