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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_

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
                * 资源详情
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点规格描述，如CVM.SA2。
                     * @return Spec 节点规格描述，如CVM.SA2。
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置节点规格描述，如CVM.SA2。
                     * @param _spec 节点规格描述，如CVM.SA2。
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
                     * 获取取值范围:
"LOCAL_SSD"   3     //本地SSD 
"CLOUD_SSD"   4     //云SSD 
"CLOUD_PREMIUM"  5  //高效云盘
"CLOUD_HSSD"   6    //增强型SSD云硬盘 
"CLOUD_THROUGHPUT" 11//吞吐型云硬盘 
"CLOUD_TSSD"  12     //极速型SSD云硬盘 
"CLOUD_BSSD"    13   //通用型SSD云硬盘 
"CLOUD_BIGDATA" 14   //大数据型云硬盘
"CLOUD_HIGHIO"  15   //高IO型云硬盘 

该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口
                     * @return StorageType 取值范围:
"LOCAL_SSD"   3     //本地SSD 
"CLOUD_SSD"   4     //云SSD 
"CLOUD_PREMIUM"  5  //高效云盘
"CLOUD_HSSD"   6    //增强型SSD云硬盘 
"CLOUD_THROUGHPUT" 11//吞吐型云硬盘 
"CLOUD_TSSD"  12     //极速型SSD云硬盘 
"CLOUD_BSSD"    13   //通用型SSD云硬盘 
"CLOUD_BIGDATA" 14   //大数据型云硬盘
"CLOUD_HIGHIO"  15   //高IO型云硬盘 

该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置取值范围:
"LOCAL_SSD"   3     //本地SSD 
"CLOUD_SSD"   4     //云SSD 
"CLOUD_PREMIUM"  5  //高效云盘
"CLOUD_HSSD"   6    //增强型SSD云硬盘 
"CLOUD_THROUGHPUT" 11//吞吐型云硬盘 
"CLOUD_TSSD"  12     //极速型SSD云硬盘 
"CLOUD_BSSD"    13   //通用型SSD云硬盘 
"CLOUD_BIGDATA" 14   //大数据型云硬盘
"CLOUD_HIGHIO"  15   //高IO型云硬盘 

该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口
                     * @param _storageType 取值范围:
"LOCAL_SSD"   3     //本地SSD 
"CLOUD_SSD"   4     //云SSD 
"CLOUD_PREMIUM"  5  //高效云盘
"CLOUD_HSSD"   6    //增强型SSD云硬盘 
"CLOUD_THROUGHPUT" 11//吞吐型云硬盘 
"CLOUD_TSSD"  12     //极速型SSD云硬盘 
"CLOUD_BSSD"    13   //通用型SSD云硬盘 
"CLOUD_BIGDATA" 14   //大数据型云硬盘
"CLOUD_HIGHIO"  15   //高IO型云硬盘 

该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口
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
                     * 获取数据盘类型 取值范围：

CLOUD_SSD：表示云SSD。

CLOUD_PREMIUM：表示高效云盘。

CLOUD_BASIC：表示云硬盘。

LOCAL_BASIC：表示本地盘。

LOCAL_SSD：表示本地SSD。

CLOUD_HSSD：表示增强型SSD云硬盘。

CLOUD_THROUGHPUT：表示吞吐型云硬盘。

CLOUD_TSSD：表示极速型SSD云硬盘。

CLOUD_BIGDATA：表示大数据型云硬盘。

CLOUD_HIGHIO：表示高IO型云硬盘。

CLOUD_BSSD：表示通用型SSD云硬盘。

REMOTE_SSD：表示远端SSD盘。
                     * @return DiskType 数据盘类型 取值范围：

CLOUD_SSD：表示云SSD。

CLOUD_PREMIUM：表示高效云盘。

CLOUD_BASIC：表示云硬盘。

LOCAL_BASIC：表示本地盘。

LOCAL_SSD：表示本地SSD。

CLOUD_HSSD：表示增强型SSD云硬盘。

CLOUD_THROUGHPUT：表示吞吐型云硬盘。

CLOUD_TSSD：表示极速型SSD云硬盘。

CLOUD_BIGDATA：表示大数据型云硬盘。

CLOUD_HIGHIO：表示高IO型云硬盘。

CLOUD_BSSD：表示通用型SSD云硬盘。

REMOTE_SSD：表示远端SSD盘。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置数据盘类型 取值范围：

CLOUD_SSD：表示云SSD。

CLOUD_PREMIUM：表示高效云盘。

CLOUD_BASIC：表示云硬盘。

LOCAL_BASIC：表示本地盘。

LOCAL_SSD：表示本地SSD。

CLOUD_HSSD：表示增强型SSD云硬盘。

CLOUD_THROUGHPUT：表示吞吐型云硬盘。

CLOUD_TSSD：表示极速型SSD云硬盘。

CLOUD_BIGDATA：表示大数据型云硬盘。

CLOUD_HIGHIO：表示高IO型云硬盘。

CLOUD_BSSD：表示通用型SSD云硬盘。

REMOTE_SSD：表示远端SSD盘。
                     * @param _diskType 数据盘类型 取值范围：

CLOUD_SSD：表示云SSD。

CLOUD_PREMIUM：表示高效云盘。

CLOUD_BASIC：表示云硬盘。

LOCAL_BASIC：表示本地盘。

LOCAL_SSD：表示本地SSD。

CLOUD_HSSD：表示增强型SSD云硬盘。

CLOUD_THROUGHPUT：表示吞吐型云硬盘。

CLOUD_TSSD：表示极速型SSD云硬盘。

CLOUD_BIGDATA：表示大数据型云硬盘。

CLOUD_HIGHIO：表示高IO型云硬盘。

CLOUD_BSSD：表示通用型SSD云硬盘。

REMOTE_SSD：表示远端SSD盘。
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
                     * 获取内存容量,单位为M
                     * @return MemSize 内存容量,单位为M
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置内存容量,单位为M
                     * @param _memSize 内存容量,单位为M
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
                     * 获取CPU核数
                     * @return Cpu CPU核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核数
                     * @param _cpu CPU核数
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
                     * 获取数据盘容量
                     * @return DiskSize 数据盘容量
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置数据盘容量
                     * @param _diskSize 数据盘容量
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
                     * 获取系统盘容量
                     * @return RootSize 系统盘容量
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置系统盘容量
                     * @param _rootSize 系统盘容量
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
                     * 获取云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiDisks 云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiDisks 云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
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
                     * 获取需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 需要绑定的标签列表
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
                     * 获取规格类型，如S2.MEDIUM8
                     * @return InstanceType 规格类型，如S2.MEDIUM8
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置规格类型，如S2.MEDIUM8
                     * @param _instanceType 规格类型，如S2.MEDIUM8
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
                     * 获取本地盘数量，该字段已废弃
                     * @return LocalDiskNum 本地盘数量，该字段已废弃
                     * 
                     */
                    uint64_t GetLocalDiskNum() const;

                    /**
                     * 设置本地盘数量，该字段已废弃
                     * @param _localDiskNum 本地盘数量，该字段已废弃
                     * 
                     */
                    void SetLocalDiskNum(const uint64_t& _localDiskNum);

                    /**
                     * 判断参数 LocalDiskNum 是否已赋值
                     * @return LocalDiskNum 是否已赋值
                     * 
                     */
                    bool LocalDiskNumHasBeenSet() const;

                    /**
                     * 获取本地盘数量，如2
                     * @return DiskNum 本地盘数量，如2
                     * 
                     */
                    uint64_t GetDiskNum() const;

                    /**
                     * 设置本地盘数量，如2
                     * @param _diskNum 本地盘数量，如2
                     * 
                     */
                    void SetDiskNum(const uint64_t& _diskNum);

                    /**
                     * 判断参数 DiskNum 是否已赋值
                     * @return DiskNum 是否已赋值
                     * 
                     */
                    bool DiskNumHasBeenSet() const;

                    /**
                     * 获取GPU信息
                     * @return GpuDesc GPU信息
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置GPU信息
                     * @param _gpuDesc GPU信息
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                private:

                    /**
                     * 节点规格描述，如CVM.SA2。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 取值范围:
"LOCAL_SSD"   3     //本地SSD 
"CLOUD_SSD"   4     //云SSD 
"CLOUD_PREMIUM"  5  //高效云盘
"CLOUD_HSSD"   6    //增强型SSD云硬盘 
"CLOUD_THROUGHPUT" 11//吞吐型云硬盘 
"CLOUD_TSSD"  12     //极速型SSD云硬盘 
"CLOUD_BSSD"    13   //通用型SSD云硬盘 
"CLOUD_BIGDATA" 14   //大数据型云硬盘
"CLOUD_HIGHIO"  15   //高IO型云硬盘 

该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 数据盘类型 取值范围：

CLOUD_SSD：表示云SSD。

CLOUD_PREMIUM：表示高效云盘。

CLOUD_BASIC：表示云硬盘。

LOCAL_BASIC：表示本地盘。

LOCAL_SSD：表示本地SSD。

CLOUD_HSSD：表示增强型SSD云硬盘。

CLOUD_THROUGHPUT：表示吞吐型云硬盘。

CLOUD_TSSD：表示极速型SSD云硬盘。

CLOUD_BIGDATA：表示大数据型云硬盘。

CLOUD_HIGHIO：表示高IO型云硬盘。

CLOUD_BSSD：表示通用型SSD云硬盘。

REMOTE_SSD：表示远端SSD盘。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 内存容量,单位为M
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * CPU核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 数据盘容量
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 系统盘容量
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * 云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                    /**
                     * 需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 规格类型，如S2.MEDIUM8
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 本地盘数量，该字段已废弃
                     */
                    uint64_t m_localDiskNum;
                    bool m_localDiskNumHasBeenSet;

                    /**
                     * 本地盘数量，如2
                     */
                    uint64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * GPU信息
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
