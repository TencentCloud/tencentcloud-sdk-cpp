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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MultiDisk.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点描述
                */
                class NodeSpec : public AbstractModel
                {
                public:
                    NodeSpec();
                    ~NodeSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Memory 内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPUCores CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCPUCores() const;

                    /**
                     * 设置CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CPUCores CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCPUCores(const uint64_t& _cPUCores);

                    /**
                     * 判断参数 CPUCores 是否已赋值
                     * @return CPUCores 是否已赋值
                     */
                    bool CPUCoresHasBeenSet() const;

                    /**
                     * 获取数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Volume 数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Volume 数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskType 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Spec 节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootDiskVolume 系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRootDiskVolume() const;

                    /**
                     * 设置系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RootDiskVolume 系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRootDiskVolume(const uint64_t& _rootDiskVolume);

                    /**
                     * 判断参数 RootDiskVolume 是否已赋值
                     * @return RootDiskVolume 是否已赋值
                     */
                    bool RootDiskVolumeHasBeenSet() const;

                    /**
                     * 获取存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStorageType() const;

                    /**
                     * 设置存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageType(const uint64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecName 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取多云盘参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiDisks 多云盘参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置多云盘参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MultiDisks 多云盘参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMultiDisks(const std::vector<MultiDisk>& _multiDisks);

                    /**
                     * 判断参数 MultiDisks 是否已赋值
                     * @return MultiDisks 是否已赋值
                     */
                    bool MultiDisksHasBeenSet() const;

                private:

                    /**
                     * 内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cPUCores;
                    bool m_cPUCoresHasBeenSet;

                    /**
                     * 数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rootDiskVolume;
                    bool m_rootDiskVolumeHasBeenSet;

                    /**
                     * 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 多云盘参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPEC_H_
