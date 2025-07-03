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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpecDisk.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点规格类型
                */
                class NodeSpecInstanceType : public AbstractModel
                {
                public:
                    NodeSpecInstanceType();
                    ~NodeSpecInstanceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取4
                     * @return Cpu 4
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置4
                     * @param _cpu 4
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
                     * 获取8，单位G
                     * @return Memory 8，单位G
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置8，单位G
                     * @param _memory 8，单位G
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
                     * 获取排序，越小排的越前
                     * @return Order 排序，越小排的越前
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置排序，越小排的越前
                     * @param _order 排序，越小排的越前
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Num 数量
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置数量
                     * @param _num 数量
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取售罄原因
                     * @return SellOutReason 售罄原因
                     * 
                     */
                    std::string GetSellOutReason() const;

                    /**
                     * 设置售罄原因
                     * @param _sellOutReason 售罄原因
                     * 
                     */
                    void SetSellOutReason(const std::string& _sellOutReason);

                    /**
                     * 判断参数 SellOutReason 是否已赋值
                     * @return SellOutReason 是否已赋值
                     * 
                     */
                    bool SellOutReasonHasBeenSet() const;

                    /**
                     * 获取系统盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDisk 系统盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecDisk> GetSystemDisk() const;

                    /**
                     * 设置系统盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDisk 系统盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDisk(const std::vector<NodeSpecDisk>& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisk 数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecDisk> GetDataDisk() const;

                    /**
                     * 设置数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisk 数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisk(const std::vector<NodeSpecDisk>& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDataDisk 本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecDisk> GetLocalDataDisk() const;

                    /**
                     * 设置本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDataDisk 本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalDataDisk(const std::vector<NodeSpecDisk>& _localDataDisk);

                    /**
                     * 判断参数 LocalDataDisk 是否已赋值
                     * @return LocalDataDisk 是否已赋值
                     * 
                     */
                    bool LocalDataDiskHasBeenSet() const;

                    /**
                     * 获取售罄原因
                     * @return SoldOutReason 售罄原因
                     * 
                     */
                    std::string GetSoldOutReason() const;

                    /**
                     * 设置售罄原因
                     * @param _soldOutReason 售罄原因
                     * 
                     */
                    void SetSoldOutReason(const std::string& _soldOutReason);

                    /**
                     * 判断参数 SoldOutReason 是否已赋值
                     * @return SoldOutReason 是否已赋值
                     * 
                     */
                    bool SoldOutReasonHasBeenSet() const;

                    /**
                     * 获取机型类别
                     * @return InstanceFamily 机型类别
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置机型类别
                     * @param _instanceFamily 机型类别
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型
                     * @param _nodeType 节点类型
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取类别
                     * @return Type 类别
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类别
                     * @param _type 类别
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取类别名称
                     * @return TypeName 类别名称
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置类别名称
                     * @param _typeName 类别名称
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取类别分类
                     * @return FamilyName 类别分类
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 设置类别分类
                     * @param _familyName 类别分类
                     * 
                     */
                    void SetFamilyName(const std::string& _familyName);

                    /**
                     * 判断参数 FamilyName 是否已赋值
                     * @return FamilyName 是否已赋值
                     * 
                     */
                    bool FamilyNameHasBeenSet() const;

                    /**
                     * 获取cpu类型
                     * @return CpuType cpu类型
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置cpu类型
                     * @param _cpuType cpu类型
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取售罄 RunOut、库存少 Less、充足 Enough
                     * @return Remark 售罄 RunOut、库存少 Less、充足 Enough
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置售罄 RunOut、库存少 Less、充足 Enough
                     * @param _remark 售罄 RunOut、库存少 Less、充足 Enough
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取原价
                     * @return OriginPrice 原价
                     * 
                     */
                    double GetOriginPrice() const;

                    /**
                     * 设置原价
                     * @param _originPrice 原价
                     * 
                     */
                    void SetOriginPrice(const double& _originPrice);

                    /**
                     * 判断参数 OriginPrice 是否已赋值
                     * @return OriginPrice 是否已赋值
                     * 
                     */
                    bool OriginPriceHasBeenSet() const;

                    /**
                     * 获取包销计费机型支持的购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrepaidUnderwritePeriods 包销计费机型支持的购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetPrepaidUnderwritePeriods() const;

                    /**
                     * 设置包销计费机型支持的购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prepaidUnderwritePeriods 包销计费机型支持的购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrepaidUnderwritePeriods(const std::vector<int64_t>& _prepaidUnderwritePeriods);

                    /**
                     * 判断参数 PrepaidUnderwritePeriods 是否已赋值
                     * @return PrepaidUnderwritePeriods 是否已赋值
                     * 
                     */
                    bool PrepaidUnderwritePeriodsHasBeenSet() const;

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
                     * 规格
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 4
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 8，单位G
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 排序，越小排的越前
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 售罄原因
                     */
                    std::string m_sellOutReason;
                    bool m_sellOutReasonHasBeenSet;

                    /**
                     * 系统盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecDisk> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecDisk> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * 本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecDisk> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                    /**
                     * 售罄原因
                     */
                    std::string m_soldOutReason;
                    bool m_soldOutReasonHasBeenSet;

                    /**
                     * 机型类别
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 类别
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 类别名称
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 类别分类
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                    /**
                     * cpu类型
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * 售罄 RunOut、库存少 Less、充足 Enough
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 原价
                     */
                    double m_originPrice;
                    bool m_originPriceHasBeenSet;

                    /**
                     * 包销计费机型支持的购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_prepaidUnderwritePeriods;
                    bool m_prepaidUnderwritePeriodsHasBeenSet;

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

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_
