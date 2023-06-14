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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/MultiApplyOrder.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 分账结果响应对象
                */
                class DistributeQueryResult : public AbstractModel
                {
                public:
                    DistributeQueryResult();
                    ~DistributeQueryResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分账订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Orders 分账订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiApplyOrder> GetOrders() const;

                    /**
                     * 设置分账订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orders 分账订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrders(const std::vector<MultiApplyOrder>& _orders);

                    /**
                     * 判断参数 Orders 是否已赋值
                     * @return Orders 是否已赋值
                     * 
                     */
                    bool OrdersHasBeenSet() const;

                private:

                    /**
                     * 分账订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiApplyOrder> m_orders;
                    bool m_ordersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYRESULT_H_
