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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_INVOICEMANAGEMENTLIST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_INVOICEMANAGEMENTLIST_H_

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
                * 发票管理端列表
                */
                class InvoiceManagementList : public AbstractModel
                {
                public:
                    InvoiceManagementList();
                    ~InvoiceManagementList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取销方名称
                     * @return SellerName 销方名称
                     */
                    std::string GetSellerName() const;

                    /**
                     * 设置销方名称
                     * @param SellerName 销方名称
                     */
                    void SetSellerName(const std::string& _sellerName);

                    /**
                     * 判断参数 SellerName 是否已赋值
                     * @return SellerName 是否已赋值
                     */
                    bool SellerNameHasBeenSet() const;

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
                     * 获取腾讯云AppId
                     * @return AppId 腾讯云AppId
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置腾讯云AppId
                     * @param AppId 腾讯云AppId
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取开票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvoiceSn 开票号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInvoiceSn() const;

                    /**
                     * 设置开票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvoiceSn 开票号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvoiceSn(const std::string& _invoiceSn);

                    /**
                     * 判断参数 InvoiceSn 是否已赋值
                     * @return InvoiceSn 是否已赋值
                     */
                    bool InvoiceSnHasBeenSet() const;

                    /**
                     * 获取开票代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvoiceCode 开票代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 设置开票代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvoiceCode 开票代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvoiceCode(const std::string& _invoiceCode);

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取红冲状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedStatus 红冲状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRedStatus() const;

                    /**
                     * 设置红冲状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RedStatus 红冲状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRedStatus(const int64_t& _redStatus);

                    /**
                     * 判断参数 RedStatus 是否已赋值
                     * @return RedStatus 是否已赋值
                     */
                    bool RedStatusHasBeenSet() const;

                    /**
                     * 获取开票通知时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyTime 开票通知时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNotifyTime() const;

                    /**
                     * 设置开票通知时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NotifyTime 开票通知时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotifyTime(const std::string& _notifyTime);

                    /**
                     * 判断参数 NotifyTime 是否已赋值
                     * @return NotifyTime 是否已赋值
                     */
                    bool NotifyTimeHasBeenSet() const;

                    /**
                     * 获取含税总金额
                     * @return AmountHasTax 含税总金额
                     */
                    std::string GetAmountHasTax() const;

                    /**
                     * 设置含税总金额
                     * @param AmountHasTax 含税总金额
                     */
                    void SetAmountHasTax(const std::string& _amountHasTax);

                    /**
                     * 判断参数 AmountHasTax 是否已赋值
                     * @return AmountHasTax 是否已赋值
                     */
                    bool AmountHasTaxHasBeenSet() const;

                    /**
                     * 获取发票类型
                     * @return InvoiceType 发票类型
                     */
                    int64_t GetInvoiceType() const;

                    /**
                     * 设置发票类型
                     * @param InvoiceType 发票类型
                     */
                    void SetInvoiceType(const int64_t& _invoiceType);

                    /**
                     * 判断参数 InvoiceType 是否已赋值
                     * @return InvoiceType 是否已赋值
                     */
                    bool InvoiceTypeHasBeenSet() const;

                    /**
                     * 获取开票状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvoiceStatus 开票状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInvoiceStatus() const;

                    /**
                     * 设置开票状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvoiceStatus 开票状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvoiceStatus(const int64_t& _invoiceStatus);

                    /**
                     * 判断参数 InvoiceStatus 是否已赋值
                     * @return InvoiceStatus 是否已赋值
                     */
                    bool InvoiceStatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 发票ID
                     */
                    std::string m_invoiceId;
                    bool m_invoiceIdHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 销方名称
                     */
                    std::string m_sellerName;
                    bool m_sellerNameHasBeenSet;

                    /**
                     * 业务开票号
                     */
                    std::string m_orderSn;
                    bool m_orderSnHasBeenSet;

                    /**
                     * 开票平台ID
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                    /**
                     * 腾讯云AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 开票号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invoiceSn;
                    bool m_invoiceSnHasBeenSet;

                    /**
                     * 开票代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invoiceCode;
                    bool m_invoiceCodeHasBeenSet;

                    /**
                     * 红冲状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_redStatus;
                    bool m_redStatusHasBeenSet;

                    /**
                     * 开票通知时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notifyTime;
                    bool m_notifyTimeHasBeenSet;

                    /**
                     * 含税总金额
                     */
                    std::string m_amountHasTax;
                    bool m_amountHasTaxHasBeenSet;

                    /**
                     * 发票类型
                     */
                    int64_t m_invoiceType;
                    bool m_invoiceTypeHasBeenSet;

                    /**
                     * 开票状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_invoiceStatus;
                    bool m_invoiceStatusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_INVOICEMANAGEMENTLIST_H_
