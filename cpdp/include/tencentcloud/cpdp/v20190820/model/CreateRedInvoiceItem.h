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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICEITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 创建红票明细
                */
                class CreateRedInvoiceItem : public AbstractModel
                {
                public:
                    CreateRedInvoiceItem();
                    ~CreateRedInvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
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
                     * 获取发票结果回传地址
                     * @return CallbackUrl 发票结果回传地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置发票结果回传地址
                     * @param _callbackUrl 发票结果回传地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取业务开票号
                     * @return OrderSn 业务开票号
                     * 
                     */
                    std::string GetOrderSn() const;

                    /**
                     * 设置业务开票号
                     * @param _orderSn 业务开票号
                     * 
                     */
                    void SetOrderSn(const std::string& _orderSn);

                    /**
                     * 判断参数 OrderSn 是否已赋值
                     * @return OrderSn 是否已赋值
                     * 
                     */
                    bool OrderSnHasBeenSet() const;

                    /**
                     * 获取红字信息表编码
                     * @return RedSerialNo 红字信息表编码
                     * 
                     */
                    std::string GetRedSerialNo() const;

                    /**
                     * 设置红字信息表编码
                     * @param _redSerialNo 红字信息表编码
                     * 
                     */
                    void SetRedSerialNo(const std::string& _redSerialNo);

                    /**
                     * 判断参数 RedSerialNo 是否已赋值
                     * @return RedSerialNo 是否已赋值
                     * 
                     */
                    bool RedSerialNoHasBeenSet() const;

                    /**
                     * 获取门店编号
                     * @return StoreNo 门店编号
                     * 
                     */
                    std::string GetStoreNo() const;

                    /**
                     * 设置门店编号
                     * @param _storeNo 门店编号
                     * 
                     */
                    void SetStoreNo(const std::string& _storeNo);

                    /**
                     * 判断参数 StoreNo 是否已赋值
                     * @return StoreNo 是否已赋值
                     * 
                     */
                    bool StoreNoHasBeenSet() const;

                private:

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 发票结果回传地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 业务开票号
                     */
                    std::string m_orderSn;
                    bool m_orderSnHasBeenSet;

                    /**
                     * 红字信息表编码
                     */
                    std::string m_redSerialNo;
                    bool m_redSerialNoHasBeenSet;

                    /**
                     * 门店编号
                     */
                    std::string m_storeNo;
                    bool m_storeNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICEITEM_H_
