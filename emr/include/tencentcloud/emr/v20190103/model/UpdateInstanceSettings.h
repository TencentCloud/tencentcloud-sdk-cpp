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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_UPDATEINSTANCESETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_UPDATEINSTANCESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 变配资源规格
                */
                class UpdateInstanceSettings : public AbstractModel
                {
                public:
                    UpdateInstanceSettings();
                    ~UpdateInstanceSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内存容量，单位为G
                     * @return Memory 内存容量，单位为G
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存容量，单位为G
                     * @param _memory 内存容量，单位为G
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
                     * 获取CPU核数
                     * @return CPUCores CPU核数
                     * 
                     */
                    uint64_t GetCPUCores() const;

                    /**
                     * 设置CPU核数
                     * @param _cPUCores CPU核数
                     * 
                     */
                    void SetCPUCores(const uint64_t& _cPUCores);

                    /**
                     * 判断参数 CPUCores 是否已赋值
                     * @return CPUCores 是否已赋值
                     * 
                     */
                    bool CPUCoresHasBeenSet() const;

                    /**
                     * 获取机器资源ID（EMR测资源标识）
                     * @return ResourceId 机器资源ID（EMR测资源标识）
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置机器资源ID（EMR测资源标识）
                     * @param _resourceId 机器资源ID（EMR测资源标识）
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取变配机器规格
                     * @return InstanceType 变配机器规格
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置变配机器规格
                     * @param _instanceType 变配机器规格
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * 内存容量，单位为G
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU核数
                     */
                    uint64_t m_cPUCores;
                    bool m_cPUCoresHasBeenSet;

                    /**
                     * 机器资源ID（EMR测资源标识）
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 变配机器规格
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_UPDATEINSTANCESETTINGS_H_
