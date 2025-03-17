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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDERITEM_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 专用集群子订单
                */
                class DedicatedClusterOrderItem : public AbstractModel
                {
                public:
                    DedicatedClusterOrderItem();
                    ~DedicatedClusterOrderItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专用集群类型id
                     * @return DedicatedClusterTypeId 专用集群类型id
                     * 
                     */
                    std::string GetDedicatedClusterTypeId() const;

                    /**
                     * 设置专用集群类型id
                     * @param _dedicatedClusterTypeId 专用集群类型id
                     * 
                     */
                    void SetDedicatedClusterTypeId(const std::string& _dedicatedClusterTypeId);

                    /**
                     * 判断参数 DedicatedClusterTypeId 是否已赋值
                     * @return DedicatedClusterTypeId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypeIdHasBeenSet() const;

                    /**
                     * 获取支持的存储类型列表
                     * @return SupportedStorageType 支持的存储类型列表
                     * 
                     */
                    std::vector<std::string> GetSupportedStorageType() const;

                    /**
                     * 设置支持的存储类型列表
                     * @param _supportedStorageType 支持的存储类型列表
                     * 
                     */
                    void SetSupportedStorageType(const std::vector<std::string>& _supportedStorageType);

                    /**
                     * 判断参数 SupportedStorageType 是否已赋值
                     * @return SupportedStorageType 是否已赋值
                     * 
                     */
                    bool SupportedStorageTypeHasBeenSet() const;

                    /**
                     * 获取支持的上连交换机的链路传输速率(GiB)
                     * @return SupportedUplinkSpeed 支持的上连交换机的链路传输速率(GiB)
                     * 
                     */
                    std::vector<int64_t> GetSupportedUplinkSpeed() const;

                    /**
                     * 设置支持的上连交换机的链路传输速率(GiB)
                     * @param _supportedUplinkSpeed 支持的上连交换机的链路传输速率(GiB)
                     * 
                     */
                    void SetSupportedUplinkSpeed(const std::vector<int64_t>& _supportedUplinkSpeed);

                    /**
                     * 判断参数 SupportedUplinkSpeed 是否已赋值
                     * @return SupportedUplinkSpeed 是否已赋值
                     * 
                     */
                    bool SupportedUplinkSpeedHasBeenSet() const;

                    /**
                     * 获取支持的实例族列表
                     * @return SupportedInstanceFamily 支持的实例族列表
                     * 
                     */
                    std::vector<std::string> GetSupportedInstanceFamily() const;

                    /**
                     * 设置支持的实例族列表
                     * @param _supportedInstanceFamily 支持的实例族列表
                     * 
                     */
                    void SetSupportedInstanceFamily(const std::vector<std::string>& _supportedInstanceFamily);

                    /**
                     * 判断参数 SupportedInstanceFamily 是否已赋值
                     * @return SupportedInstanceFamily 是否已赋值
                     * 
                     */
                    bool SupportedInstanceFamilyHasBeenSet() const;

                    /**
                     * 获取地板承重要求(KG)
                     * @return Weight 地板承重要求(KG)
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置地板承重要求(KG)
                     * @param _weight 地板承重要求(KG)
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取功率要求(KW)
                     * @return PowerDraw 功率要求(KW)
                     * 
                     */
                    double GetPowerDraw() const;

                    /**
                     * 设置功率要求(KW)
                     * @param _powerDraw 功率要求(KW)
                     * 
                     */
                    void SetPowerDraw(const double& _powerDraw);

                    /**
                     * 判断参数 PowerDraw 是否已赋值
                     * @return PowerDraw 是否已赋值
                     * 
                     */
                    bool PowerDrawHasBeenSet() const;

                    /**
                     * 获取订单状态
                     * @return SubOrderStatus 订单状态
                     * 
                     */
                    std::string GetSubOrderStatus() const;

                    /**
                     * 设置订单状态
                     * @param _subOrderStatus 订单状态
                     * 
                     */
                    void SetSubOrderStatus(const std::string& _subOrderStatus);

                    /**
                     * 判断参数 SubOrderStatus 是否已赋值
                     * @return SubOrderStatus 是否已赋值
                     * 
                     */
                    bool SubOrderStatusHasBeenSet() const;

                    /**
                     * 获取订单创建的时间
                     * @return CreateTime 订单创建的时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置订单创建的时间
                     * @param _createTime 订单创建的时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取子订单ID
                     * @return SubOrderId 子订单ID
                     * 
                     */
                    std::string GetSubOrderId() const;

                    /**
                     * 设置子订单ID
                     * @param _subOrderId 子订单ID
                     * 
                     */
                    void SetSubOrderId(const std::string& _subOrderId);

                    /**
                     * 判断参数 SubOrderId 是否已赋值
                     * @return SubOrderId 是否已赋值
                     * 
                     */
                    bool SubOrderIdHasBeenSet() const;

                    /**
                     * 获取关联的集群规格数量
                     * @return Count 关联的集群规格数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置关联的集群规格数量
                     * @param _count 关联的集群规格数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取规格简单描述
                     * @return Name 规格简单描述
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规格简单描述
                     * @param _name 规格简单描述
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取规格详细描述
                     * @return Description 规格详细描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规格详细描述
                     * @param _description 规格详细描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取CPU数
                     * @return TotalCpu CPU数
                     * 
                     */
                    int64_t GetTotalCpu() const;

                    /**
                     * 设置CPU数
                     * @param _totalCpu CPU数
                     * 
                     */
                    void SetTotalCpu(const int64_t& _totalCpu);

                    /**
                     * 判断参数 TotalCpu 是否已赋值
                     * @return TotalCpu 是否已赋值
                     * 
                     */
                    bool TotalCpuHasBeenSet() const;

                    /**
                     * 获取内存数
                     * @return TotalMem 内存数
                     * 
                     */
                    int64_t GetTotalMem() const;

                    /**
                     * 设置内存数
                     * @param _totalMem 内存数
                     * 
                     */
                    void SetTotalMem(const int64_t& _totalMem);

                    /**
                     * 判断参数 TotalMem 是否已赋值
                     * @return TotalMem 是否已赋值
                     * 
                     */
                    bool TotalMemHasBeenSet() const;

                    /**
                     * 获取GPU数
                     * @return TotalGpu GPU数
                     * 
                     */
                    int64_t GetTotalGpu() const;

                    /**
                     * 设置GPU数
                     * @param _totalGpu GPU数
                     * 
                     */
                    void SetTotalGpu(const int64_t& _totalGpu);

                    /**
                     * 判断参数 TotalGpu 是否已赋值
                     * @return TotalGpu 是否已赋值
                     * 
                     */
                    bool TotalGpuHasBeenSet() const;

                    /**
                     * 获取规格英文名
                     * @return TypeName 规格英文名
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置规格英文名
                     * @param _typeName 规格英文名
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
                     * 获取规格展示
                     * @return ComputeFormat 规格展示
                     * 
                     */
                    std::string GetComputeFormat() const;

                    /**
                     * 设置规格展示
                     * @param _computeFormat 规格展示
                     * 
                     */
                    void SetComputeFormat(const std::string& _computeFormat);

                    /**
                     * 判断参数 ComputeFormat 是否已赋值
                     * @return ComputeFormat 是否已赋值
                     * 
                     */
                    bool ComputeFormatHasBeenSet() const;

                    /**
                     * 获取规格类型
                     * @return TypeFamily 规格类型
                     * 
                     */
                    std::string GetTypeFamily() const;

                    /**
                     * 设置规格类型
                     * @param _typeFamily 规格类型
                     * 
                     */
                    void SetTypeFamily(const std::string& _typeFamily);

                    /**
                     * 判断参数 TypeFamily 是否已赋值
                     * @return TypeFamily 是否已赋值
                     * 
                     */
                    bool TypeFamilyHasBeenSet() const;

                    /**
                     * 获取0未支付，1已支付
                     * @return SubOrderPayStatus 0未支付，1已支付
                     * 
                     */
                    int64_t GetSubOrderPayStatus() const;

                    /**
                     * 设置0未支付，1已支付
                     * @param _subOrderPayStatus 0未支付，1已支付
                     * 
                     */
                    void SetSubOrderPayStatus(const int64_t& _subOrderPayStatus);

                    /**
                     * 判断参数 SubOrderPayStatus 是否已赋值
                     * @return SubOrderPayStatus 是否已赋值
                     * 
                     */
                    bool SubOrderPayStatusHasBeenSet() const;

                private:

                    /**
                     * 专用集群类型id
                     */
                    std::string m_dedicatedClusterTypeId;
                    bool m_dedicatedClusterTypeIdHasBeenSet;

                    /**
                     * 支持的存储类型列表
                     */
                    std::vector<std::string> m_supportedStorageType;
                    bool m_supportedStorageTypeHasBeenSet;

                    /**
                     * 支持的上连交换机的链路传输速率(GiB)
                     */
                    std::vector<int64_t> m_supportedUplinkSpeed;
                    bool m_supportedUplinkSpeedHasBeenSet;

                    /**
                     * 支持的实例族列表
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
                    std::string m_subOrderStatus;
                    bool m_subOrderStatusHasBeenSet;

                    /**
                     * 订单创建的时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 子订单ID
                     */
                    std::string m_subOrderId;
                    bool m_subOrderIdHasBeenSet;

                    /**
                     * 关联的集群规格数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 规格简单描述
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规格详细描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CPU数
                     */
                    int64_t m_totalCpu;
                    bool m_totalCpuHasBeenSet;

                    /**
                     * 内存数
                     */
                    int64_t m_totalMem;
                    bool m_totalMemHasBeenSet;

                    /**
                     * GPU数
                     */
                    int64_t m_totalGpu;
                    bool m_totalGpuHasBeenSet;

                    /**
                     * 规格英文名
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 规格展示
                     */
                    std::string m_computeFormat;
                    bool m_computeFormatHasBeenSet;

                    /**
                     * 规格类型
                     */
                    std::string m_typeFamily;
                    bool m_typeFamilyHasBeenSet;

                    /**
                     * 0未支付，1已支付
                     */
                    int64_t m_subOrderPayStatus;
                    bool m_subOrderPayStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDERITEM_H_
