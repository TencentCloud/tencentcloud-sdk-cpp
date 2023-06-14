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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OUTTERRESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OUTTERRESOURCE_H_

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
                * 资源详情
                */
                class OutterResource : public AbstractModel
                {
                public:
                    OutterResource();
                    ~OutterResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spec 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取规格名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName 规格名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置规格名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specName 规格名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskType 硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootSize 系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rootSize 系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRootSize(const int64_t& _rootSize);

                    /**
                     * 判断参数 RootSize 是否已赋值
                     * @return RootSize 是否已赋值
                     * 
                     */
                    bool RootSizeHasBeenSet() const;

                    /**
                     * 获取内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memSize 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取CPU个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu CPU个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu CPU个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSize 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 规格
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 规格名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * CPU个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OUTTERRESOURCE_H_
