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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYINVOICEFORMANAGEMENTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYINVOICEFORMANAGEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * QueryInvoiceForManagement请求参数结构体
                */
                class QueryInvoiceForManagementRequest : public AbstractModel
                {
                public:
                    QueryInvoiceForManagementRequest();
                    ~QueryInvoiceForManagementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开票平台ID
                     * @return InvoicePlatformId 开票平台ID
                     */
                    int64_t GetInvoicePlatformId() const;

                    /**
                     * 设置开票平台ID
                     * @param InvoicePlatformId 开票平台ID
                     */
                    void SetInvoicePlatformId(const int64_t& _invoicePlatformId);

                    /**
                     * 判断参数 InvoicePlatformId 是否已赋值
                     * @return InvoicePlatformId 是否已赋值
                     */
                    bool InvoicePlatformIdHasBeenSet() const;

                    /**
                     * 获取开票状态
                     * @return InvoiceStatus 开票状态
                     */
                    int64_t GetInvoiceStatus() const;

                    /**
                     * 设置开票状态
                     * @param InvoiceStatus 开票状态
                     */
                    void SetInvoiceStatus(const int64_t& _invoiceStatus);

                    /**
                     * 判断参数 InvoiceStatus 是否已赋值
                     * @return InvoiceStatus 是否已赋值
                     */
                    bool InvoiceStatusHasBeenSet() const;

                    /**
                     * 获取红冲状态
                     * @return RedInvoiceStatus 红冲状态
                     */
                    int64_t GetRedInvoiceStatus() const;

                    /**
                     * 设置红冲状态
                     * @param RedInvoiceStatus 红冲状态
                     */
                    void SetRedInvoiceStatus(const int64_t& _redInvoiceStatus);

                    /**
                     * 判断参数 RedInvoiceStatus 是否已赋值
                     * @return RedInvoiceStatus 是否已赋值
                     */
                    bool RedInvoiceStatusHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param BeginTime 开始时间
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Offset 页码
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页码
                     * @param Offset 页码
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Limit 页大小
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小
                     * @param Limit 页大小
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param OrderId 订单号
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取发票ID
                     * @return InvoiceId 发票ID
                     */
                    std::string GetInvoiceId() const;

                    /**
                     * 设置发票ID
                     * @param InvoiceId 发票ID
                     */
                    void SetInvoiceId(const std::string& _invoiceId);

                    /**
                     * 判断参数 InvoiceId 是否已赋值
                     * @return InvoiceId 是否已赋值
                     */
                    bool InvoiceIdHasBeenSet() const;

                    /**
                     * 获取业务开票号
                     * @return OrderSn 业务开票号
                     */
                    std::string GetOrderSn() const;

                    /**
                     * 设置业务开票号
                     * @param OrderSn 业务开票号
                     */
                    void SetOrderSn(const std::string& _orderSn);

                    /**
                     * 判断参数 OrderSn 是否已赋值
                     * @return OrderSn 是否已赋值
                     */
                    bool OrderSnHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return InvoiceSn 发票号码
                     */
                    std::string GetInvoiceSn() const;

                    /**
                     * 设置发票号码
                     * @param InvoiceSn 发票号码
                     */
                    void SetInvoiceSn(const std::string& _invoiceSn);

                    /**
                     * 判断参数 InvoiceSn 是否已赋值
                     * @return InvoiceSn 是否已赋值
                     */
                    bool InvoiceSnHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return InvoiceCode 发票代码
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 设置发票代码
                     * @param InvoiceCode 发票代码
                     */
                    void SetInvoiceCode(const std::string& _invoiceCode);

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填 sandbox。
                     * @return Profile 接入环境。沙箱环境填 sandbox。
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。
                     * @param Profile 接入环境。沙箱环境填 sandbox。
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 开票平台ID
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                    /**
                     * 开票状态
                     */
                    int64_t m_invoiceStatus;
                    bool m_invoiceStatusHasBeenSet;

                    /**
                     * 红冲状态
                     */
                    int64_t m_redInvoiceStatus;
                    bool m_redInvoiceStatusHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

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

                    /**
                     * 发票号码
                     */
                    std::string m_invoiceSn;
                    bool m_invoiceSnHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_invoiceCode;
                    bool m_invoiceCodeHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYINVOICEFORMANAGEMENTREQUEST_H_
