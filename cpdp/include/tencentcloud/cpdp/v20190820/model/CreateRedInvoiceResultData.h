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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICERESULTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICERESULTDATA_H_

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
                * 红票结果数据
                */
                class CreateRedInvoiceResultData : public AbstractModel
                {
                public:
                    CreateRedInvoiceResultData();
                    ~CreateRedInvoiceResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取红冲状态码
                     * @return Code 红冲状态码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置红冲状态码
                     * @param _code 红冲状态码
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取红冲状态消息
                     * @return Message 红冲状态消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置红冲状态消息
                     * @param _message 红冲状态消息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

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
                     * 红冲状态码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 红冲状态消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICERESULTDATA_H_
