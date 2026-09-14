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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSENTRY_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 待查询的订单标识。OrderId 和 CustomOrderId 必须且只能填写一个。
                */
                class BatchDescribeTWeSeeOrdersEntry : public AbstractModel
                {
                public:
                    BatchDescribeTWeSeeOrdersEntry();
                    ~BatchDescribeTWeSeeOrdersEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>订单 ID，与 CustomOrderId 二选一</p>
                     * @return OrderId <p>订单 ID，与 CustomOrderId 二选一</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>订单 ID，与 CustomOrderId 二选一</p>
                     * @param _orderId <p>订单 ID，与 CustomOrderId 二选一</p>
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义订单 ID，与 OrderId 二选一</p>
                     * @return CustomOrderId <p>自定义订单 ID，与 OrderId 二选一</p>
                     * 
                     */
                    std::string GetCustomOrderId() const;

                    /**
                     * 设置<p>自定义订单 ID，与 OrderId 二选一</p>
                     * @param _customOrderId <p>自定义订单 ID，与 OrderId 二选一</p>
                     * 
                     */
                    void SetCustomOrderId(const std::string& _customOrderId);

                    /**
                     * 判断参数 CustomOrderId 是否已赋值
                     * @return CustomOrderId 是否已赋值
                     * 
                     */
                    bool CustomOrderIdHasBeenSet() const;

                private:

                    /**
                     * <p>订单 ID，与 CustomOrderId 二选一</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>自定义订单 ID，与 OrderId 二选一</p>
                     */
                    std::string m_customOrderId;
                    bool m_customOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSENTRY_H_
