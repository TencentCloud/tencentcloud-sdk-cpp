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
                     * 获取<p>节点规格描述，如CVM.SA2。</p>
                     * @return Spec <p>节点规格描述，如CVM.SA2。</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>节点规格描述，如CVM.SA2。</p>
                     * @param _spec <p>节点规格描述，如CVM.SA2。</p>
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
                     * 获取<p>取值范围:<br>&quot;LOCAL_SSD&quot;   3     //本地SSD<br>&quot;CLOUD_SSD&quot;   4     //云SSD<br>&quot;CLOUD_PREMIUM&quot;  5  //高效云盘<br>&quot;CLOUD_HSSD&quot;   6    //增强型SSD云硬盘<br>&quot;CLOUD_THROUGHPUT&quot; 11//吞吐型云硬盘<br>&quot;CLOUD_TSSD&quot;  12     //极速型SSD云硬盘<br>&quot;CLOUD_BSSD&quot;    13   //通用型SSD云硬盘<br>&quot;CLOUD_BIGDATA&quot; 14   //大数据型云硬盘<br>&quot;CLOUD_HIGHIO&quot;  15   //高IO型云硬盘 </p><p>该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口</p>
                     * @return StorageType <p>取值范围:<br>&quot;LOCAL_SSD&quot;   3     //本地SSD<br>&quot;CLOUD_SSD&quot;   4     //云SSD<br>&quot;CLOUD_PREMIUM&quot;  5  //高效云盘<br>&quot;CLOUD_HSSD&quot;   6    //增强型SSD云硬盘<br>&quot;CLOUD_THROUGHPUT&quot; 11//吞吐型云硬盘<br>&quot;CLOUD_TSSD&quot;  12     //极速型SSD云硬盘<br>&quot;CLOUD_BSSD&quot;    13   //通用型SSD云硬盘<br>&quot;CLOUD_BIGDATA&quot; 14   //大数据型云硬盘<br>&quot;CLOUD_HIGHIO&quot;  15   //高IO型云硬盘 </p><p>该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口</p>
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置<p>取值范围:<br>&quot;LOCAL_SSD&quot;   3     //本地SSD<br>&quot;CLOUD_SSD&quot;   4     //云SSD<br>&quot;CLOUD_PREMIUM&quot;  5  //高效云盘<br>&quot;CLOUD_HSSD&quot;   6    //增强型SSD云硬盘<br>&quot;CLOUD_THROUGHPUT&quot; 11//吞吐型云硬盘<br>&quot;CLOUD_TSSD&quot;  12     //极速型SSD云硬盘<br>&quot;CLOUD_BSSD&quot;    13   //通用型SSD云硬盘<br>&quot;CLOUD_BIGDATA&quot; 14   //大数据型云硬盘<br>&quot;CLOUD_HIGHIO&quot;  15   //高IO型云硬盘 </p><p>该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口</p>
                     * @param _storageType <p>取值范围:<br>&quot;LOCAL_SSD&quot;   3     //本地SSD<br>&quot;CLOUD_SSD&quot;   4     //云SSD<br>&quot;CLOUD_PREMIUM&quot;  5  //高效云盘<br>&quot;CLOUD_HSSD&quot;   6    //增强型SSD云硬盘<br>&quot;CLOUD_THROUGHPUT&quot; 11//吞吐型云硬盘<br>&quot;CLOUD_TSSD&quot;  12     //极速型SSD云硬盘<br>&quot;CLOUD_BSSD&quot;    13   //通用型SSD云硬盘<br>&quot;CLOUD_BIGDATA&quot; 14   //大数据型云硬盘<br>&quot;CLOUD_HIGHIO&quot;  15   //高IO型云硬盘 </p><p>该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口</p>
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
                     * 获取<p>数据盘类型 取值范围：</p><p>CLOUD_SSD：表示云SSD。</p><p>CLOUD_PREMIUM：表示高效云盘。</p><p>CLOUD_BASIC：表示云硬盘。</p><p>LOCAL_BASIC：表示本地盘。</p><p>LOCAL_SSD：表示本地SSD。</p><p>CLOUD_HSSD：表示增强型SSD云硬盘。</p><p>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</p><p>CLOUD_TSSD：表示极速型SSD云硬盘。</p><p>CLOUD_BIGDATA：表示大数据型云硬盘。</p><p>CLOUD_HIGHIO：表示高IO型云硬盘。</p><p>CLOUD_BSSD：表示通用型SSD云硬盘。</p><p>REMOTE_SSD：表示远端SSD盘。</p>
                     * @return DiskType <p>数据盘类型 取值范围：</p><p>CLOUD_SSD：表示云SSD。</p><p>CLOUD_PREMIUM：表示高效云盘。</p><p>CLOUD_BASIC：表示云硬盘。</p><p>LOCAL_BASIC：表示本地盘。</p><p>LOCAL_SSD：表示本地SSD。</p><p>CLOUD_HSSD：表示增强型SSD云硬盘。</p><p>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</p><p>CLOUD_TSSD：表示极速型SSD云硬盘。</p><p>CLOUD_BIGDATA：表示大数据型云硬盘。</p><p>CLOUD_HIGHIO：表示高IO型云硬盘。</p><p>CLOUD_BSSD：表示通用型SSD云硬盘。</p><p>REMOTE_SSD：表示远端SSD盘。</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>数据盘类型 取值范围：</p><p>CLOUD_SSD：表示云SSD。</p><p>CLOUD_PREMIUM：表示高效云盘。</p><p>CLOUD_BASIC：表示云硬盘。</p><p>LOCAL_BASIC：表示本地盘。</p><p>LOCAL_SSD：表示本地SSD。</p><p>CLOUD_HSSD：表示增强型SSD云硬盘。</p><p>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</p><p>CLOUD_TSSD：表示极速型SSD云硬盘。</p><p>CLOUD_BIGDATA：表示大数据型云硬盘。</p><p>CLOUD_HIGHIO：表示高IO型云硬盘。</p><p>CLOUD_BSSD：表示通用型SSD云硬盘。</p><p>REMOTE_SSD：表示远端SSD盘。</p>
                     * @param _diskType <p>数据盘类型 取值范围：</p><p>CLOUD_SSD：表示云SSD。</p><p>CLOUD_PREMIUM：表示高效云盘。</p><p>CLOUD_BASIC：表示云硬盘。</p><p>LOCAL_BASIC：表示本地盘。</p><p>LOCAL_SSD：表示本地SSD。</p><p>CLOUD_HSSD：表示增强型SSD云硬盘。</p><p>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</p><p>CLOUD_TSSD：表示极速型SSD云硬盘。</p><p>CLOUD_BIGDATA：表示大数据型云硬盘。</p><p>CLOUD_HIGHIO：表示高IO型云硬盘。</p><p>CLOUD_BSSD：表示通用型SSD云硬盘。</p><p>REMOTE_SSD：表示远端SSD盘。</p>
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
                     * 获取<p>内存容量,单位为M</p>
                     * @return MemSize <p>内存容量,单位为M</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>内存容量,单位为M</p>
                     * @param _memSize <p>内存容量,单位为M</p>
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
                     * 获取<p>CPU核数</p>
                     * @return Cpu <p>CPU核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>CPU核数</p>
                     * @param _cpu <p>CPU核数</p>
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
                     * 获取<p>数据盘容量</p>
                     * @return DiskSize <p>数据盘容量</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>数据盘容量</p>
                     * @param _diskSize <p>数据盘容量</p>
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
                     * 获取<p>系统盘容量</p>
                     * @return RootSize <p>系统盘容量</p>
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置<p>系统盘容量</p>
                     * @param _rootSize <p>系统盘容量</p>
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
                     * 获取<p>云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiDisks <p>云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置<p>云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiDisks <p>云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks</p>
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
                     * 获取<p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>需要绑定的标签列表</p>
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
                     * 获取<p>规格类型，如S2.MEDIUM8</p>
                     * @return InstanceType <p>规格类型，如S2.MEDIUM8</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>规格类型，如S2.MEDIUM8</p>
                     * @param _instanceType <p>规格类型，如S2.MEDIUM8</p>
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
                     * 获取<p>本地盘数量，该字段已废弃</p>
                     * @return LocalDiskNum <p>本地盘数量，该字段已废弃</p>
                     * 
                     */
                    uint64_t GetLocalDiskNum() const;

                    /**
                     * 设置<p>本地盘数量，该字段已废弃</p>
                     * @param _localDiskNum <p>本地盘数量，该字段已废弃</p>
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
                     * 获取<p>本地盘数量，如2</p>
                     * @return DiskNum <p>本地盘数量，如2</p>
                     * 
                     */
                    uint64_t GetDiskNum() const;

                    /**
                     * 设置<p>本地盘数量，如2</p>
                     * @param _diskNum <p>本地盘数量，如2</p>
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
                     * 获取<p>GPU信息</p>
                     * @return GpuDesc <p>GPU信息</p>
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置<p>GPU信息</p>
                     * @param _gpuDesc <p>GPU信息</p>
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组分区数</p>
                     * @return PartitionNumber <p>分区置放群组分区数</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>分区置放群组分区数</p>
                     * @param _partitionNumber <p>分区置放群组分区数</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                private:

                    /**
                     * <p>节点规格描述，如CVM.SA2。</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>取值范围:<br>&quot;LOCAL_SSD&quot;   3     //本地SSD<br>&quot;CLOUD_SSD&quot;   4     //云SSD<br>&quot;CLOUD_PREMIUM&quot;  5  //高效云盘<br>&quot;CLOUD_HSSD&quot;   6    //增强型SSD云硬盘<br>&quot;CLOUD_THROUGHPUT&quot; 11//吞吐型云硬盘<br>&quot;CLOUD_TSSD&quot;  12     //极速型SSD云硬盘<br>&quot;CLOUD_BSSD&quot;    13   //通用型SSD云硬盘<br>&quot;CLOUD_BIGDATA&quot; 14   //大数据型云硬盘<br>&quot;CLOUD_HIGHIO&quot;  15   //高IO型云硬盘 </p><p>该类型字段为无效字段，实际系统盘类型会根据数据盘类型和节点类型判断，如果节点支持所选的数据盘类型，系统盘类型会跟数据盘保持一致，建议使用CreateCluster接口</p>
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>数据盘类型 取值范围：</p><p>CLOUD_SSD：表示云SSD。</p><p>CLOUD_PREMIUM：表示高效云盘。</p><p>CLOUD_BASIC：表示云硬盘。</p><p>LOCAL_BASIC：表示本地盘。</p><p>LOCAL_SSD：表示本地SSD。</p><p>CLOUD_HSSD：表示增强型SSD云硬盘。</p><p>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</p><p>CLOUD_TSSD：表示极速型SSD云硬盘。</p><p>CLOUD_BIGDATA：表示大数据型云硬盘。</p><p>CLOUD_HIGHIO：表示高IO型云硬盘。</p><p>CLOUD_BSSD：表示通用型SSD云硬盘。</p><p>REMOTE_SSD：表示远端SSD盘。</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>内存容量,单位为M</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>CPU核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>数据盘容量</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>系统盘容量</p>
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * <p>云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                    /**
                     * <p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>规格类型，如S2.MEDIUM8</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>本地盘数量，该字段已废弃</p>
                     */
                    uint64_t m_localDiskNum;
                    bool m_localDiskNumHasBeenSet;

                    /**
                     * <p>本地盘数量，如2</p>
                     */
                    uint64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * <p>GPU信息</p>
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                    /**
                     * <p>分区置放群组分区数</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
