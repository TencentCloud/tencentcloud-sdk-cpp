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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_RESOURCECONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_RESOURCECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 资源配置
                */
                class ResourceConfiguration : public AbstractModel
                {
                public:
                    ResourceConfiguration();
                    ~ResourceConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu 资源量
                     * @return CPU cpu 资源量
                     * 
                     */
                    std::string GetCPU() const;

                    /**
                     * 设置cpu 资源量
                     * @param _cPU cpu 资源量
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
                     * 获取内存资源量
                     * @return Memory 内存资源量
                     * 
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置内存资源量
                     * @param _memory 内存资源量
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
                     * cpu 资源量
                     */
                    std::string m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存资源量
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_RESOURCECONFIGURATION_H_
