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
                     * 获取<p>规格</p>
                     * @return InstanceType <p>规格</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>规格</p>
                     * @param _instanceType <p>规格</p>
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
                     * 获取<p>4</p>
                     * @return Cpu <p>4</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>4</p>
                     * @param _cpu <p>4</p>
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
                     * 获取<p>8，单位G</p>
                     * @return Memory <p>8，单位G</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>8，单位G</p>
                     * @param _memory <p>8，单位G</p>
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
                     * 获取<p>排序，越小排的越前</p>
                     * @return Order <p>排序，越小排的越前</p>
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置<p>排序，越小排的越前</p>
                     * @param _order <p>排序，越小排的越前</p>
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
                     * 获取<p>数量</p>
                     * @return Num <p>数量</p>
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置<p>数量</p>
                     * @param _num <p>数量</p>
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
                     * 获取<p>售罄原因</p>
                     * @return SellOutReason <p>售罄原因</p>
                     * 
                     */
                    std::string GetSellOutReason() const;

                    /**
                     * 设置<p>售罄原因</p>
                     * @param _sellOutReason <p>售罄原因</p>
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
                     * 获取<p>系统盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDisk <p>系统盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecDisk> GetSystemDisk() const;

                    /**
                     * 设置<p>系统盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDisk <p>系统盘</p>
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
                     * 获取<p>数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisk <p>数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecDisk> GetDataDisk() const;

                    /**
                     * 设置<p>数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisk <p>数据盘</p>
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
                     * 获取<p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDataDisk <p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeSpecDisk> GetLocalDataDisk() const;

                    /**
                     * 设置<p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDataDisk <p>本地数据盘</p>
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
                     * 获取<p>售罄原因</p>
                     * @return SoldOutReason <p>售罄原因</p>
                     * 
                     */
                    std::string GetSoldOutReason() const;

                    /**
                     * 设置<p>售罄原因</p>
                     * @param _soldOutReason <p>售罄原因</p>
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
                     * 获取<p>机型类别</p>
                     * @return InstanceFamily <p>机型类别</p>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置<p>机型类别</p>
                     * @param _instanceFamily <p>机型类别</p>
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
                     * 获取<p>节点名称</p>
                     * @return NodeName <p>节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称</p>
                     * @param _nodeName <p>节点名称</p>
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
                     * 获取<p>节点类型</p>
                     * @return NodeType <p>节点类型</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _nodeType <p>节点类型</p>
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
                     * 获取<p>类别</p>
                     * @return Type <p>类别</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类别</p>
                     * @param _type <p>类别</p>
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
                     * 获取<p>类别名称</p>
                     * @return TypeName <p>类别名称</p>
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置<p>类别名称</p>
                     * @param _typeName <p>类别名称</p>
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
                     * 获取<p>类别分类</p>
                     * @return FamilyName <p>类别分类</p>
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 设置<p>类别分类</p>
                     * @param _familyName <p>类别分类</p>
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
                     * 获取<p>cpu类型</p>
                     * @return CpuType <p>cpu类型</p>
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置<p>cpu类型</p>
                     * @param _cpuType <p>cpu类型</p>
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
                     * 获取<p>售罄 RunOut、库存少 Less、充足 Enough</p>
                     * @return Remark <p>售罄 RunOut、库存少 Less、充足 Enough</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>售罄 RunOut、库存少 Less、充足 Enough</p>
                     * @param _remark <p>售罄 RunOut、库存少 Less、充足 Enough</p>
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
                     * 获取<p>原价</p>
                     * @return OriginPrice <p>原价</p>
                     * 
                     */
                    double GetOriginPrice() const;

                    /**
                     * 设置<p>原价</p>
                     * @param _originPrice <p>原价</p>
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
                     * 获取<p>包销计费机型支持的购买时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrepaidUnderwritePeriods <p>包销计费机型支持的购买时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetPrepaidUnderwritePeriods() const;

                    /**
                     * 设置<p>包销计费机型支持的购买时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prepaidUnderwritePeriods <p>包销计费机型支持的购买时长</p>
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
                     * 获取<p>配额数量</p>
                     * @return QuotaNum <p>配额数量</p>
                     * 
                     */
                    int64_t GetQuotaNum() const;

                    /**
                     * 设置<p>配额数量</p>
                     * @param _quotaNum <p>配额数量</p>
                     * 
                     */
                    void SetQuotaNum(const int64_t& _quotaNum);

                    /**
                     * 判断参数 QuotaNum 是否已赋值
                     * @return QuotaNum 是否已赋值
                     * 
                     */
                    bool QuotaNumHasBeenSet() const;

                    /**
                     * 获取<p>配额单位</p>
                     * @return QuotaUnit <p>配额单位</p>
                     * 
                     */
                    std::string GetQuotaUnit() const;

                    /**
                     * 设置<p>配额单位</p>
                     * @param _quotaUnit <p>配额单位</p>
                     * 
                     */
                    void SetQuotaUnit(const std::string& _quotaUnit);

                    /**
                     * 判断参数 QuotaUnit 是否已赋值
                     * @return QuotaUnit 是否已赋值
                     * 
                     */
                    bool QuotaUnitHasBeenSet() const;

                private:

                    /**
                     * <p>规格</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>4</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>8，单位G</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>排序，越小排的越前</p>
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>数量</p>
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * <p>售罄原因</p>
                     */
                    std::string m_sellOutReason;
                    bool m_sellOutReasonHasBeenSet;

                    /**
                     * <p>系统盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecDisk> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecDisk> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * <p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeSpecDisk> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                    /**
                     * <p>售罄原因</p>
                     */
                    std::string m_soldOutReason;
                    bool m_soldOutReasonHasBeenSet;

                    /**
                     * <p>机型类别</p>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>类别</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>类别名称</p>
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * <p>类别分类</p>
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                    /**
                     * <p>cpu类型</p>
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * <p>售罄 RunOut、库存少 Less、充足 Enough</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>原价</p>
                     */
                    double m_originPrice;
                    bool m_originPriceHasBeenSet;

                    /**
                     * <p>包销计费机型支持的购买时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_prepaidUnderwritePeriods;
                    bool m_prepaidUnderwritePeriodsHasBeenSet;

                    /**
                     * <p>GPU信息</p>
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                    /**
                     * <p>配额数量</p>
                     */
                    int64_t m_quotaNum;
                    bool m_quotaNumHasBeenSet;

                    /**
                     * <p>配额单位</p>
                     */
                    std::string m_quotaUnit;
                    bool m_quotaUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_
