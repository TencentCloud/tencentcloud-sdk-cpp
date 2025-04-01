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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_CREATEINSTANCESCOMPONENT_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_CREATEINSTANCESCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 组件设置列表
                */
                class CreateInstancesComponent : public AbstractModel
                {
                public:
                    CreateInstancesComponent();
                    ~CreateInstancesComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取底层组件名，需要和产品模型中的保持一致
                     * @return Component 底层组件名，需要和产品模型中的保持一致
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置底层组件名，需要和产品模型中的保持一致
                     * @param _component 底层组件名，需要和产品模型中的保持一致
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取组件cpu大小
                     * @return Cpu 组件cpu大小
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置组件cpu大小
                     * @param _cpu 组件cpu大小
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
                     * 获取组件内存大小
                     * @return Memory 组件内存大小
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置组件内存大小
                     * @param _memory 组件内存大小
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
                     * 获取业务节点数
                     * @return ReplicaNum 业务节点数
                     * 
                     */
                    uint64_t GetReplicaNum() const;

                    /**
                     * 设置业务节点数
                     * @param _replicaNum 业务节点数
                     * 
                     */
                    void SetReplicaNum(const uint64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取自定义组件名
                     * @return Name 自定义组件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义组件名
                     * @param _name 自定义组件名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取组件磁盘大小
                     * @return StorageSize 组件磁盘大小
                     * 
                     */
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置组件磁盘大小
                     * @param _storageSize 组件磁盘大小
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取磁盘类型
                     * @return StorageType 磁盘类型
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置磁盘类型
                     * @param _storageType 磁盘类型
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取组件额外参数，通过JSON提交
                     * @return Params 组件额外参数，通过JSON提交
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置组件额外参数，通过JSON提交
                     * @param _params 组件额外参数，通过JSON提交
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 底层组件名，需要和产品模型中的保持一致
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 组件cpu大小
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 组件内存大小
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 业务节点数
                     */
                    uint64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * 自定义组件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 组件磁盘大小
                     */
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 组件额外参数，通过JSON提交
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_CREATEINSTANCESCOMPONENT_H_
