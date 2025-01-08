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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MultiDisk.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 询价资源
                */
                class PriceResource : public AbstractModel
                {
                public:
                    PriceResource();
                    ~PriceResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要的规格
                     * @return Spec 需要的规格
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置需要的规格
                     * @param _spec 需要的规格
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
                     * 获取硬盘类型
                     * @return StorageType 硬盘类型
                     * 
                     */
                    uint64_t GetStorageType() const;

                    /**
                     * 设置硬盘类型
                     * @param _storageType 硬盘类型
                     * 
                     */
                    void SetStorageType(const uint64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取硬盘类型
                     * @return DiskType 硬盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘类型
                     * @param _diskType 硬盘类型
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
                     * @return RootSize 系统盘大小
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置系统盘大小
                     * @param _rootSize 系统盘大小
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
                     * @return MemSize 内存大小
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置内存大小
                     * @param _memSize 内存大小
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
                     * 获取核心数量
                     * @return Cpu 核心数量
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置核心数量
                     * @param _cpu 核心数量
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
                     * @return DiskSize 硬盘大小
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置硬盘大小
                     * @param _diskSize 硬盘大小
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
                     * 获取云盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiDisks 云盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置云盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiDisks 云盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiDisks(const std::vector<MultiDisk>& _multiDisks);

                    /**
                     * 判断参数 MultiDisks 是否已赋值
                     * @return MultiDisks 是否已赋值
                     * 
                     */
                    bool MultiDisksHasBeenSet() const;

                    /**
                     * 获取磁盘数量
                     * @return DiskCnt 磁盘数量
                     * 
                     */
                    int64_t GetDiskCnt() const;

                    /**
                     * 设置磁盘数量
                     * @param _diskCnt 磁盘数量
                     * 
                     */
                    void SetDiskCnt(const int64_t& _diskCnt);

                    /**
                     * 判断参数 DiskCnt 是否已赋值
                     * @return DiskCnt 是否已赋值
                     * 
                     */
                    bool DiskCntHasBeenSet() const;

                    /**
                     * 获取规格
                     * @return InstanceType 规格
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置规格
                     * @param _instanceType 规格
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取磁盘数量
                     * @return DiskNum 磁盘数量
                     * 
                     */
                    int64_t GetDiskNum() const;

                    /**
                     * 设置磁盘数量
                     * @param _diskNum 磁盘数量
                     * 
                     */
                    void SetDiskNum(const int64_t& _diskNum);

                    /**
                     * 判断参数 DiskNum 是否已赋值
                     * @return DiskNum 是否已赋值
                     * 
                     */
                    bool DiskNumHasBeenSet() const;

                    /**
                     * 获取本地盘的数量
                     * @return LocalDiskNum 本地盘的数量
                     * 
                     */
                    int64_t GetLocalDiskNum() const;

                    /**
                     * 设置本地盘的数量
                     * @param _localDiskNum 本地盘的数量
                     * 
                     */
                    void SetLocalDiskNum(const int64_t& _localDiskNum);

                    /**
                     * 判断参数 LocalDiskNum 是否已赋值
                     * @return LocalDiskNum 是否已赋值
                     * 
                     */
                    bool LocalDiskNumHasBeenSet() const;

                private:

                    /**
                     * 需要的规格
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 硬盘类型
                     */
                    uint64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 硬盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 系统盘大小
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * 内存大小
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 核心数量
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 硬盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云盘列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                    /**
                     * 磁盘数量
                     */
                    int64_t m_diskCnt;
                    bool m_diskCntHasBeenSet;

                    /**
                     * 规格
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 磁盘数量
                     */
                    int64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * 本地盘的数量
                     */
                    int64_t m_localDiskNum;
                    bool m_localDiskNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESOURCE_H_
