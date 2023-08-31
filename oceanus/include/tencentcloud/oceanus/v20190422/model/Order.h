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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_ORDER_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_ORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 集群购买、扩缩容、续费订单信息
                */
                class Order : public AbstractModel
                {
                public:
                    Order();
                    ~Order() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建、续费、扩缩容 1 2 3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 创建、续费、扩缩容 1 2 3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置创建、续费、扩缩容 1 2 3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 创建、续费、扩缩容 1 2 3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取自动续费 1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费 1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 自动续费 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取操作人的UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateUin 操作人的UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置操作人的UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateUin 操作人的UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取最终集群的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeCu 最终集群的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetComputeCu() const;

                    /**
                     * 设置最终集群的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computeCu 最终集群的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputeCu(const int64_t& _computeCu);

                    /**
                     * 判断参数 ComputeCu 是否已赋值
                     * @return ComputeCu 是否已赋值
                     * 
                     */
                    bool ComputeCuHasBeenSet() const;

                    /**
                     * 获取订单的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderTime 订单的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderTime() const;

                    /**
                     * 设置订单的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderTime 订单的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderTime(const std::string& _orderTime);

                    /**
                     * 判断参数 OrderTime 是否已赋值
                     * @return OrderTime 是否已赋值
                     * 
                     */
                    bool OrderTimeHasBeenSet() const;

                private:

                    /**
                     * 创建、续费、扩缩容 1 2 3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自动续费 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 操作人的UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 最终集群的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_computeCu;
                    bool m_computeCuHasBeenSet;

                    /**
                     * 订单的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderTime;
                    bool m_orderTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_ORDER_H_
