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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCESPEC_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 资源规格
                */
                class ResourceSpec : public AbstractModel
                {
                public:
                    ResourceSpec();
                    ~ResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源包类型</p>
                     * @return ResourceType <p>资源包类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源包类型</p>
                     * @param _resourceType <p>资源包类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>机型，例如X40/T20，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType <p>机型，例如X40/T20，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>机型，例如X40/T20，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType <p>机型，例如X40/T20，仅GU有值</p>
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

                    /**
                     * 获取<p>四层计费项</p><p>枚举值：</p><ul><li>sv_dlc_standard_cu_standard_cu： 标准型cpu，最小单位32</li><li>sv_dlc_high_memory_cu_high_memory_cu： 高内存型cpu，最小单位32</li><li>sv_dlc_gn7_gn75xlarge80： T4，最小单位1</li><li>sv_dlc_gn10xp_gn10xp2xlarge40： V100，最小单位1</li></ul><p>若您想要了解更多的计费规格和产品细节，欢迎联系我们。</p>
                     * @return BillingItem <p>四层计费项</p><p>枚举值：</p><ul><li>sv_dlc_standard_cu_standard_cu： 标准型cpu，最小单位32</li><li>sv_dlc_high_memory_cu_high_memory_cu： 高内存型cpu，最小单位32</li><li>sv_dlc_gn7_gn75xlarge80： T4，最小单位1</li><li>sv_dlc_gn10xp_gn10xp2xlarge40： V100，最小单位1</li></ul><p>若您想要了解更多的计费规格和产品细节，欢迎联系我们。</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>四层计费项</p><p>枚举值：</p><ul><li>sv_dlc_standard_cu_standard_cu： 标准型cpu，最小单位32</li><li>sv_dlc_high_memory_cu_high_memory_cu： 高内存型cpu，最小单位32</li><li>sv_dlc_gn7_gn75xlarge80： T4，最小单位1</li><li>sv_dlc_gn10xp_gn10xp2xlarge40： V100，最小单位1</li></ul><p>若您想要了解更多的计费规格和产品细节，欢迎联系我们。</p>
                     * @param _billingItem <p>四层计费项</p><p>枚举值：</p><ul><li>sv_dlc_standard_cu_standard_cu： 标准型cpu，最小单位32</li><li>sv_dlc_high_memory_cu_high_memory_cu： 高内存型cpu，最小单位32</li><li>sv_dlc_gn7_gn75xlarge80： T4，最小单位1</li><li>sv_dlc_gn10xp_gn10xp2xlarge40： V100，最小单位1</li></ul><p>若您想要了解更多的计费规格和产品细节，欢迎联系我们。</p>
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取<p>规格描述</p>
                     * @return SpecDesc <p>规格描述</p>
                     * 
                     */
                    std::string GetSpecDesc() const;

                    /**
                     * 设置<p>规格描述</p>
                     * @param _specDesc <p>规格描述</p>
                     * 
                     */
                    void SetSpecDesc(const std::string& _specDesc);

                    /**
                     * 判断参数 SpecDesc 是否已赋值
                     * @return SpecDesc 是否已赋值
                     * 
                     */
                    bool SpecDescHasBeenSet() const;

                    /**
                     * 获取<p>规格，格式为 {gpu}:{cpu}:{mem}:{vram}</p>
                     * @return Spec <p>规格，格式为 {gpu}:{cpu}:{mem}:{vram}</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>规格，格式为 {gpu}:{cpu}:{mem}:{vram}</p>
                     * @param _spec <p>规格，格式为 {gpu}:{cpu}:{mem}:{vram}</p>
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
                     * 获取<p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType <p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType <p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>单个物理节点上该计费项对应的最大 GPU 卡数，CPU / HM_CPU 恒为 0</p>
                     * @return MaxCardPerNode <p>单个物理节点上该计费项对应的最大 GPU 卡数，CPU / HM_CPU 恒为 0</p>
                     * 
                     */
                    int64_t GetMaxCardPerNode() const;

                    /**
                     * 设置<p>单个物理节点上该计费项对应的最大 GPU 卡数，CPU / HM_CPU 恒为 0</p>
                     * @param _maxCardPerNode <p>单个物理节点上该计费项对应的最大 GPU 卡数，CPU / HM_CPU 恒为 0</p>
                     * 
                     */
                    void SetMaxCardPerNode(const int64_t& _maxCardPerNode);

                    /**
                     * 判断参数 MaxCardPerNode 是否已赋值
                     * @return MaxCardPerNode 是否已赋值
                     * 
                     */
                    bool MaxCardPerNodeHasBeenSet() const;

                private:

                    /**
                     * <p>资源包类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>机型，例如X40/T20，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>四层计费项</p><p>枚举值：</p><ul><li>sv_dlc_standard_cu_standard_cu： 标准型cpu，最小单位32</li><li>sv_dlc_high_memory_cu_high_memory_cu： 高内存型cpu，最小单位32</li><li>sv_dlc_gn7_gn75xlarge80： T4，最小单位1</li><li>sv_dlc_gn10xp_gn10xp2xlarge40： V100，最小单位1</li></ul><p>若您想要了解更多的计费规格和产品细节，欢迎联系我们。</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>规格描述</p>
                     */
                    std::string m_specDesc;
                    bool m_specDescHasBeenSet;

                    /**
                     * <p>规格，格式为 {gpu}:{cpu}:{mem}:{vram}</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>GPU类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>单个物理节点上该计费项对应的最大 GPU 卡数，CPU / HM_CPU 恒为 0</p>
                     */
                    int64_t m_maxCardPerNode;
                    bool m_maxCardPerNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCESPEC_H_
