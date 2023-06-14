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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEOPTIONS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例机型配置。
                */
                class InstanceTypeOptions : public AbstractModel
                {
                public:
                    InstanceTypeOptions();
                    ~InstanceTypeOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU核数。
                     * @return CPU CPU核数。
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU核数。
                     * @param _cPU CPU核数。
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存值，单位GB。
                     * @return Memory 内存值，单位GB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存值，单位GB。
                     * @param _memory 内存值，单位GB。
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
                     * 获取实例机型类别，可选参数：“ALL”、“GENERAL”、“GENERAL_2”、“GENERAL_3”、“COMPUTE”、“COMPUTE_2”和“COMPUTE_3”。默认值“ALL”。
                     * @return InstanceCategories 实例机型类别，可选参数：“ALL”、“GENERAL”、“GENERAL_2”、“GENERAL_3”、“COMPUTE”、“COMPUTE_2”和“COMPUTE_3”。默认值“ALL”。
                     * 
                     */
                    std::vector<std::string> GetInstanceCategories() const;

                    /**
                     * 设置实例机型类别，可选参数：“ALL”、“GENERAL”、“GENERAL_2”、“GENERAL_3”、“COMPUTE”、“COMPUTE_2”和“COMPUTE_3”。默认值“ALL”。
                     * @param _instanceCategories 实例机型类别，可选参数：“ALL”、“GENERAL”、“GENERAL_2”、“GENERAL_3”、“COMPUTE”、“COMPUTE_2”和“COMPUTE_3”。默认值“ALL”。
                     * 
                     */
                    void SetInstanceCategories(const std::vector<std::string>& _instanceCategories);

                    /**
                     * 判断参数 InstanceCategories 是否已赋值
                     * @return InstanceCategories 是否已赋值
                     * 
                     */
                    bool InstanceCategoriesHasBeenSet() const;

                private:

                    /**
                     * CPU核数。
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存值，单位GB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例机型类别，可选参数：“ALL”、“GENERAL”、“GENERAL_2”、“GENERAL_3”、“COMPUTE”、“COMPUTE_2”和“COMPUTE_3”。默认值“ALL”。
                     */
                    std::vector<std::string> m_instanceCategories;
                    bool m_instanceCategoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEOPTIONS_H_
