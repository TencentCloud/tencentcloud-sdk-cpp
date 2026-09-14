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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSRESULT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSRESULT_H_

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
                * 单个订单的查询结果。查询失败时 ErrorCode 和 ErrorMessage 非空。
                */
                class BatchDescribeTWeSeeOrdersResult : public AbstractModel
                {
                public:
                    BatchDescribeTWeSeeOrdersResult();
                    ~BatchDescribeTWeSeeOrdersResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>订单 ID</p>
                     * @return OrderId <p>订单 ID</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>订单 ID</p>
                     * @param _orderId <p>订单 ID</p>
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
                     * 获取<p>订单状态。</p><p>枚举值：</p><ul><li>DELIVERED： 已发货</li><li>DELIVERING： 发货中</li><li>DELIVER_FAILED： 发货失败</li><li>NOT_DELIVERED： 未发货</li></ul>
                     * @return Status <p>订单状态。</p><p>枚举值：</p><ul><li>DELIVERED： 已发货</li><li>DELIVERING： 发货中</li><li>DELIVER_FAILED： 发货失败</li><li>NOT_DELIVERED： 未发货</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>订单状态。</p><p>枚举值：</p><ul><li>DELIVERED： 已发货</li><li>DELIVERING： 发货中</li><li>DELIVER_FAILED： 发货失败</li><li>NOT_DELIVERED： 未发货</li></ul>
                     * @param _status <p>订单状态。</p><p>枚举值：</p><ul><li>DELIVERED： 已发货</li><li>DELIVERING： 发货中</li><li>DELIVER_FAILED： 发货失败</li><li>NOT_DELIVERED： 未发货</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>资源 ID</p>
                     * @return ResourceId <p>资源 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源 ID</p>
                     * @param _resourceId <p>资源 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>币种</p>
                     * @return Currency <p>币种</p>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>币种</p>
                     * @param _currency <p>币种</p>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取<p>订单价格</p>
                     * @return Price <p>订单价格</p>
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置<p>订单价格</p>
                     * @param _price <p>订单价格</p>
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取<p>自定义订单 ID</p>
                     * @return CustomOrderId <p>自定义订单 ID</p>
                     * 
                     */
                    std::string GetCustomOrderId() const;

                    /**
                     * 设置<p>自定义订单 ID</p>
                     * @param _customOrderId <p>自定义订单 ID</p>
                     * 
                     */
                    void SetCustomOrderId(const std::string& _customOrderId);

                    /**
                     * 判断参数 CustomOrderId 是否已赋值
                     * @return CustomOrderId 是否已赋值
                     * 
                     */
                    bool CustomOrderIdHasBeenSet() const;

                    /**
                     * 获取<p>单个订单的查询错误码，查询成功时为空</p>
                     * @return ErrorCode <p>单个订单的查询错误码，查询成功时为空</p>
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置<p>单个订单的查询错误码，查询成功时为空</p>
                     * @param _errorCode <p>单个订单的查询错误码，查询成功时为空</p>
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>单个订单的查询错误信息，查询成功时为空</p>
                     * @return ErrorMessage <p>单个订单的查询错误信息，查询成功时为空</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>单个订单的查询错误信息，查询成功时为空</p>
                     * @param _errorMessage <p>单个订单的查询错误信息，查询成功时为空</p>
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * <p>订单 ID</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>订单状态。</p><p>枚举值：</p><ul><li>DELIVERED： 已发货</li><li>DELIVERING： 发货中</li><li>DELIVER_FAILED： 发货失败</li><li>NOT_DELIVERED： 未发货</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>币种</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>订单价格</p>
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * <p>自定义订单 ID</p>
                     */
                    std::string m_customOrderId;
                    bool m_customOrderIdHasBeenSet;

                    /**
                     * <p>单个订单的查询错误码，查询成功时为空</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>单个订单的查询错误信息，查询成功时为空</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSRESULT_H_
