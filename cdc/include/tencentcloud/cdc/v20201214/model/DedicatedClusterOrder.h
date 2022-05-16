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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDER_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DedicatedClusterOrderItem.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 专用集群订单
                */
                class DedicatedClusterOrder : public AbstractModel
                {
                public:
                    DedicatedClusterOrder();
                    ~DedicatedClusterOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专用集群id
                     * @return DedicatedClusterId 专用集群id
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置专用集群id
                     * @param DedicatedClusterId 专用集群id
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取专用集群类型id（移到下一层级，已经废弃，后续将删除）
                     * @return DedicatedClusterTypeId 专用集群类型id（移到下一层级，已经废弃，后续将删除）
                     */
                    std::string GetDedicatedClusterTypeId() const;

                    /**
                     * 设置专用集群类型id（移到下一层级，已经废弃，后续将删除）
                     * @param DedicatedClusterTypeId 专用集群类型id（移到下一层级，已经废弃，后续将删除）
                     */
                    void SetDedicatedClusterTypeId(const std::string& _dedicatedClusterTypeId);

                    /**
                     * 判断参数 DedicatedClusterTypeId 是否已赋值
                     * @return DedicatedClusterTypeId 是否已赋值
                     */
                    bool DedicatedClusterTypeIdHasBeenSet() const;

                    /**
                     * 获取支持的存储类型列表（移到下一层级，已经废弃，后续将删除）
                     * @return SupportedStorageType 支持的存储类型列表（移到下一层级，已经废弃，后续将删除）
                     */
                    std::vector<std::string> GetSupportedStorageType() const;

                    /**
                     * 设置支持的存储类型列表（移到下一层级，已经废弃，后续将删除）
                     * @param SupportedStorageType 支持的存储类型列表（移到下一层级，已经废弃，后续将删除）
                     */
                    void SetSupportedStorageType(const std::vector<std::string>& _supportedStorageType);

                    /**
                     * 判断参数 SupportedStorageType 是否已赋值
                     * @return SupportedStorageType 是否已赋值
                     */
                    bool SupportedStorageTypeHasBeenSet() const;

                    /**
                     * 获取支持的上连交换机的链路传输速率(GiB)（移到下一层级，已经废弃，后续将删除）
                     * @return SupportedUplinkSpeed 支持的上连交换机的链路传输速率(GiB)（移到下一层级，已经废弃，后续将删除）
                     */
                    std::vector<int64_t> GetSupportedUplinkSpeed() const;

                    /**
                     * 设置支持的上连交换机的链路传输速率(GiB)（移到下一层级，已经废弃，后续将删除）
                     * @param SupportedUplinkSpeed 支持的上连交换机的链路传输速率(GiB)（移到下一层级，已经废弃，后续将删除）
                     */
                    void SetSupportedUplinkSpeed(const std::vector<int64_t>& _supportedUplinkSpeed);

                    /**
                     * 判断参数 SupportedUplinkSpeed 是否已赋值
                     * @return SupportedUplinkSpeed 是否已赋值
                     */
                    bool SupportedUplinkSpeedHasBeenSet() const;

                    /**
                     * 获取支持的实例族列表（移到下一层级，已经废弃，后续将删除）
                     * @return SupportedInstanceFamily 支持的实例族列表（移到下一层级，已经废弃，后续将删除）
                     */
                    std::vector<std::string> GetSupportedInstanceFamily() const;

                    /**
                     * 设置支持的实例族列表（移到下一层级，已经废弃，后续将删除）
                     * @param SupportedInstanceFamily 支持的实例族列表（移到下一层级，已经废弃，后续将删除）
                     */
                    void SetSupportedInstanceFamily(const std::vector<std::string>& _supportedInstanceFamily);

                    /**
                     * 判断参数 SupportedInstanceFamily 是否已赋值
                     * @return SupportedInstanceFamily 是否已赋值
                     */
                    bool SupportedInstanceFamilyHasBeenSet() const;

                    /**
                     * 获取地板承重要求(KG)
                     * @return Weight 地板承重要求(KG)
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置地板承重要求(KG)
                     * @param Weight 地板承重要求(KG)
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取功率要求(KW)
                     * @return PowerDraw 功率要求(KW)
                     */
                    double GetPowerDraw() const;

                    /**
                     * 设置功率要求(KW)
                     * @param PowerDraw 功率要求(KW)
                     */
                    void SetPowerDraw(const double& _powerDraw);

                    /**
                     * 判断参数 PowerDraw 是否已赋值
                     * @return PowerDraw 是否已赋值
                     */
                    bool PowerDrawHasBeenSet() const;

                    /**
                     * 获取订单状态
                     * @return OrderStatus 订单状态
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 设置订单状态
                     * @param OrderStatus 订单状态
                     */
                    void SetOrderStatus(const std::string& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取订单创建的时间
                     * @return CreateTime 订单创建的时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置订单创建的时间
                     * @param CreateTime 订单创建的时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取大订单ID
                     * @return DedicatedClusterOrderId 大订单ID
                     */
                    std::string GetDedicatedClusterOrderId() const;

                    /**
                     * 设置大订单ID
                     * @param DedicatedClusterOrderId 大订单ID
                     */
                    void SetDedicatedClusterOrderId(const std::string& _dedicatedClusterOrderId);

                    /**
                     * 判断参数 DedicatedClusterOrderId 是否已赋值
                     * @return DedicatedClusterOrderId 是否已赋值
                     */
                    bool DedicatedClusterOrderIdHasBeenSet() const;

                    /**
                     * 获取订单类型，创建CREATE或扩容EXTEND
                     * @return Action 订单类型，创建CREATE或扩容EXTEND
                     */
                    std::string GetAction() const;

                    /**
                     * 设置订单类型，创建CREATE或扩容EXTEND
                     * @param Action 订单类型，创建CREATE或扩容EXTEND
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取子订单详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DedicatedClusterOrderItems 子订单详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DedicatedClusterOrderItem> GetDedicatedClusterOrderItems() const;

                    /**
                     * 设置子订单详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DedicatedClusterOrderItems 子订单详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDedicatedClusterOrderItems(const std::vector<DedicatedClusterOrderItem>& _dedicatedClusterOrderItems);

                    /**
                     * 判断参数 DedicatedClusterOrderItems 是否已赋值
                     * @return DedicatedClusterOrderItems 是否已赋值
                     */
                    bool DedicatedClusterOrderItemsHasBeenSet() const;

                    /**
                     * 获取cpu值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu cpu值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cpu cpu值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取mem值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mem mem值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置mem值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mem mem值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取gpu值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu gpu值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置gpu值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Gpu gpu值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGpu(const int64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取0代表未支付，1代表已支付
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayStatus 0代表未支付，1代表已支付
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPayStatus() const;

                    /**
                     * 设置0代表未支付，1代表已支付
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayStatus 0代表未支付，1代表已支付
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayStatus(const int64_t& _payStatus);

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     */
                    bool PayStatusHasBeenSet() const;

                private:

                    /**
                     * 专用集群id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * 专用集群类型id（移到下一层级，已经废弃，后续将删除）
                     */
                    std::string m_dedicatedClusterTypeId;
                    bool m_dedicatedClusterTypeIdHasBeenSet;

                    /**
                     * 支持的存储类型列表（移到下一层级，已经废弃，后续将删除）
                     */
                    std::vector<std::string> m_supportedStorageType;
                    bool m_supportedStorageTypeHasBeenSet;

                    /**
                     * 支持的上连交换机的链路传输速率(GiB)（移到下一层级，已经废弃，后续将删除）
                     */
                    std::vector<int64_t> m_supportedUplinkSpeed;
                    bool m_supportedUplinkSpeedHasBeenSet;

                    /**
                     * 支持的实例族列表（移到下一层级，已经废弃，后续将删除）
                     */
                    std::vector<std::string> m_supportedInstanceFamily;
                    bool m_supportedInstanceFamilyHasBeenSet;

                    /**
                     * 地板承重要求(KG)
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 功率要求(KW)
                     */
                    double m_powerDraw;
                    bool m_powerDrawHasBeenSet;

                    /**
                     * 订单状态
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 订单创建的时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 大订单ID
                     */
                    std::string m_dedicatedClusterOrderId;
                    bool m_dedicatedClusterOrderIdHasBeenSet;

                    /**
                     * 订单类型，创建CREATE或扩容EXTEND
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 子订单详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DedicatedClusterOrderItem> m_dedicatedClusterOrderItems;
                    bool m_dedicatedClusterOrderItemsHasBeenSet;

                    /**
                     * cpu值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * mem值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * gpu值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 0代表未支付，1代表已支付
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payStatus;
                    bool m_payStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDER_H_
