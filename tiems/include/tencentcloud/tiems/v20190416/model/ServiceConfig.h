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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICECONFIG_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 服务配置
                */
                class ServiceConfig : public AbstractModel
                {
                public:
                    ServiceConfig();
                    ~ServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Id
                     * @return Id Id
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Id
                     * @param Id Id
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取配置名
                     * @return Name 配置名
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名
                     * @param Name 配置名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取模型地址
                     * @return ModelUri 模型地址
                     */
                    std::string GetModelUri() const;

                    /**
                     * 设置模型地址
                     * @param ModelUri 模型地址
                     */
                    void SetModelUri(const std::string& _modelUri);

                    /**
                     * 判断参数 ModelUri 是否已赋值
                     * @return ModelUri 是否已赋值
                     */
                    bool ModelUriHasBeenSet() const;

                    /**
                     * 获取处理器配置, 单位为1/1000核
                     * @return Cpu 处理器配置, 单位为1/1000核
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器配置, 单位为1/1000核
                     * @param Cpu 处理器配置, 单位为1/1000核
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存配置, 单位为1M
                     * @return Memory 内存配置, 单位为1M
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存配置, 单位为1M
                     * @param Memory 内存配置, 单位为1M
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取GPU算力，单位为1/100 tflops
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TflopUnits GPU算力，单位为1/100 tflops
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTflopUnits() const;

                    /**
                     * 设置GPU算力，单位为1/100 tflops
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TflopUnits GPU算力，单位为1/100 tflops
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTflopUnits(const uint64_t& _tflopUnits);

                    /**
                     * 判断参数 TflopUnits 是否已赋值
                     * @return TflopUnits 是否已赋值
                     */
                    bool TflopUnitsHasBeenSet() const;

                    /**
                     * 获取显存配置, 单位为1M
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuMemory 显存配置, 单位为1M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetGpuMemory() const;

                    /**
                     * 设置显存配置, 单位为1M
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GpuMemory 显存配置, 单位为1M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGpuMemory(const uint64_t& _gpuMemory);

                    /**
                     * 判断参数 GpuMemory 是否已赋值
                     * @return GpuMemory 是否已赋值
                     */
                    bool GpuMemoryHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取运行环境
                     * @return Runtime 运行环境
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行环境
                     * @param Runtime 运行环境
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取配置版本
                     * @return Version 配置版本
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置配置版本
                     * @param Version 配置版本
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模型地址
                     */
                    std::string m_modelUri;
                    bool m_modelUriHasBeenSet;

                    /**
                     * 处理器配置, 单位为1/1000核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存配置, 单位为1M
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * GPU算力，单位为1/100 tflops
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tflopUnits;
                    bool m_tflopUnitsHasBeenSet;

                    /**
                     * 显存配置, 单位为1M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpuMemory;
                    bool m_gpuMemoryHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 运行环境
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 配置版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICECONFIG_H_
