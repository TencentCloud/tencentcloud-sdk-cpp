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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICERESULTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICERESULTDATA_H_

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
                * 蓝票结果数据
                */
                class CreateInvoiceResultData : public AbstractModel
                {
                public:
                    CreateInvoiceResultData();
                    ~CreateInvoiceResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开票状态
                     * @return State 开票状态
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置开票状态
                     * @param _state 开票状态
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取发票ID
                     * @return InvoiceId 发票ID
                     * 
                     */
                    std::string GetInvoiceId() const;

                    /**
                     * 设置发票ID
                     * @param _invoiceId 发票ID
                     * 
                     */
                    void SetInvoiceId(const std::string& _invoiceId);

                    /**
                     * 判断参数 InvoiceId 是否已赋值
                     * @return InvoiceId 是否已赋值
                     * 
                     */
                    bool InvoiceIdHasBeenSet() const;

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

                private:

                    /**
                     * 开票状态
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 发票ID
                     */
                    std::string m_invoiceId;
                    bool m_invoiceIdHasBeenSet;

                    /**
                     * 业务开票号
                     */
                    std::string m_orderSn;
                    bool m_orderSnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICERESULTDATA_H_
