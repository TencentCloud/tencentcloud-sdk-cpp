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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_NODESSUMMARY_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_NODESSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/AttachCBSSpec.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 节点角色描述信息
                */
                class NodesSummary : public AbstractModel
                {
                public:
                    NodesSummary();
                    ~NodesSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机型，如 S1
                     * @return Spec 机型，如 S1
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置机型，如 S1
                     * @param _spec 机型，如 S1
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
                     * 获取节点数目
                     * @return NodeSize 节点数目
                     * 
                     */
                    int64_t GetNodeSize() const;

                    /**
                     * 设置节点数目
                     * @param _nodeSize 节点数目
                     * 
                     */
                    void SetNodeSize(const int64_t& _nodeSize);

                    /**
                     * 判断参数 NodeSize 是否已赋值
                     * @return NodeSize 是否已赋值
                     * 
                     */
                    bool NodeSizeHasBeenSet() const;

                    /**
                     * 获取cpu核数，单位个
                     * @return Core cpu核数，单位个
                     * 
                     */
                    int64_t GetCore() const;

                    /**
                     * 设置cpu核数，单位个
                     * @param _core cpu核数，单位个
                     * 
                     */
                    void SetCore(const int64_t& _core);

                    /**
                     * 判断参数 Core 是否已赋值
                     * @return Core 是否已赋值
                     * 
                     */
                    bool CoreHasBeenSet() const;

                    /**
                     * 获取内存大小，单位G
                     * @return Memory 内存大小，单位G
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位G
                     * @param _memory 内存大小，单位G
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取磁盘大小，单位G
                     * @return Disk 磁盘大小，单位G
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置磁盘大小，单位G
                     * @param _disk 磁盘大小，单位G
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取磁盘类型
                     * @return DiskType 磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
                     * @param _diskType 磁盘类型
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
                     * 获取磁盘描述
                     * @return DiskDesc 磁盘描述
                     * 
                     */
                    std::string GetDiskDesc() const;

                    /**
                     * 设置磁盘描述
                     * @param _diskDesc 磁盘描述
                     * 
                     */
                    void SetDiskDesc(const std::string& _diskDesc);

                    /**
                     * 判断参数 DiskDesc 是否已赋值
                     * @return DiskDesc 是否已赋值
                     * 
                     */
                    bool DiskDescHasBeenSet() const;

                    /**
                     * 获取挂载云盘信息
                     * @return AttachCBSSpec 挂载云盘信息
                     * 
                     */
                    AttachCBSSpec GetAttachCBSSpec() const;

                    /**
                     * 设置挂载云盘信息
                     * @param _attachCBSSpec 挂载云盘信息
                     * 
                     */
                    void SetAttachCBSSpec(const AttachCBSSpec& _attachCBSSpec);

                    /**
                     * 判断参数 AttachCBSSpec 是否已赋值
                     * @return AttachCBSSpec 是否已赋值
                     * 
                     */
                    bool AttachCBSSpecHasBeenSet() const;

                    /**
                     * 获取子产品类型
                     * @return SubProductType 子产品类型
                     * 
                     */
                    std::string GetSubProductType() const;

                    /**
                     * 设置子产品类型
                     * @param _subProductType 子产品类型
                     * 
                     */
                    void SetSubProductType(const std::string& _subProductType);

                    /**
                     * 判断参数 SubProductType 是否已赋值
                     * @return SubProductType 是否已赋值
                     * 
                     */
                    bool SubProductTypeHasBeenSet() const;

                    /**
                     * 获取规格对应的核数
                     * @return SpecCore 规格对应的核数
                     * 
                     */
                    int64_t GetSpecCore() const;

                    /**
                     * 设置规格对应的核数
                     * @param _specCore 规格对应的核数
                     * 
                     */
                    void SetSpecCore(const int64_t& _specCore);

                    /**
                     * 判断参数 SpecCore 是否已赋值
                     * @return SpecCore 是否已赋值
                     * 
                     */
                    bool SpecCoreHasBeenSet() const;

                    /**
                     * 获取规格对应的内存大小
                     * @return SpecMemory 规格对应的内存大小
                     * 
                     */
                    int64_t GetSpecMemory() const;

                    /**
                     * 设置规格对应的内存大小
                     * @param _specMemory 规格对应的内存大小
                     * 
                     */
                    void SetSpecMemory(const int64_t& _specMemory);

                    /**
                     * 判断参数 SpecMemory 是否已赋值
                     * @return SpecMemory 是否已赋值
                     * 
                     */
                    bool SpecMemoryHasBeenSet() const;

                    /**
                     * 获取磁盘的数量
                     * @return DiskCount 磁盘的数量
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置磁盘的数量
                     * @param _diskCount 磁盘的数量
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取磁盘的最大大小
                     * @return MaxDiskSize 磁盘的最大大小
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置磁盘的最大大小
                     * @param _maxDiskSize 磁盘的最大大小
                     * 
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取是否为加密云盘
                     * @return Encrypt 是否为加密云盘
                     * 
                     */
                    int64_t GetEncrypt() const;

                    /**
                     * 设置是否为加密云盘
                     * @param _encrypt 是否为加密云盘
                     * 
                     */
                    void SetEncrypt(const int64_t& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                private:

                    /**
                     * 机型，如 S1
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 节点数目
                     */
                    int64_t m_nodeSize;
                    bool m_nodeSizeHasBeenSet;

                    /**
                     * cpu核数，单位个
                     */
                    int64_t m_core;
                    bool m_coreHasBeenSet;

                    /**
                     * 内存大小，单位G
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘大小，单位G
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘描述
                     */
                    std::string m_diskDesc;
                    bool m_diskDescHasBeenSet;

                    /**
                     * 挂载云盘信息
                     */
                    AttachCBSSpec m_attachCBSSpec;
                    bool m_attachCBSSpecHasBeenSet;

                    /**
                     * 子产品类型
                     */
                    std::string m_subProductType;
                    bool m_subProductTypeHasBeenSet;

                    /**
                     * 规格对应的核数
                     */
                    int64_t m_specCore;
                    bool m_specCoreHasBeenSet;

                    /**
                     * 规格对应的内存大小
                     */
                    int64_t m_specMemory;
                    bool m_specMemoryHasBeenSet;

                    /**
                     * 磁盘的数量
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * 磁盘的最大大小
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * 是否为加密云盘
                     */
                    int64_t m_encrypt;
                    bool m_encryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_NODESSUMMARY_H_
