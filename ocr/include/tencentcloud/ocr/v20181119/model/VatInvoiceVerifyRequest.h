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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VatInvoiceVerify请求参数结构体
                */
                class VatInvoiceVerifyRequest : public AbstractModel
                {
                public:
                    VatInvoiceVerifyRequest();
                    ~VatInvoiceVerifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发票代码， 一张发票一天只能查询5次。
                     * @return InvoiceCode 发票代码， 一张发票一天只能查询5次。
                     * 
                     */
                    std::string GetInvoiceCode() const;

                    /**
                     * 设置发票代码， 一张发票一天只能查询5次。
                     * @param _invoiceCode 发票代码， 一张发票一天只能查询5次。
                     * 
                     */
                    void SetInvoiceCode(const std::string& _invoiceCode);

                    /**
                     * 判断参数 InvoiceCode 是否已赋值
                     * @return InvoiceCode 是否已赋值
                     * 
                     */
                    bool InvoiceCodeHasBeenSet() const;

                    /**
                     * 获取发票号码（8位）
                     * @return InvoiceNo 发票号码（8位）
                     * 
                     */
                    std::string GetInvoiceNo() const;

                    /**
                     * 设置发票号码（8位）
                     * @param _invoiceNo 发票号码（8位）
                     * 
                     */
                    void SetInvoiceNo(const std::string& _invoiceNo);

                    /**
                     * 判断参数 InvoiceNo 是否已赋值
                     * @return InvoiceNo 是否已赋值
                     * 
                     */
                    bool InvoiceNoHasBeenSet() const;

                    /**
                     * 获取开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     * @return InvoiceDate 开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     * 
                     */
                    std::string GetInvoiceDate() const;

                    /**
                     * 设置开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     * @param _invoiceDate 开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     * 
                     */
                    void SetInvoiceDate(const std::string& _invoiceDate);

                    /**
                     * 判断参数 InvoiceDate 是否已赋值
                     * @return InvoiceDate 是否已赋值
                     * 
                     */
                    bool InvoiceDateHasBeenSet() const;

                    /**
                     * 获取根据票种传递对应值，如果报参数错误，请仔细检查每个票种对应的值

增值税专用发票：开具金额（不含税）

增值税普通发票、增值税电子普通发票（含通行费发票）、增值税普通发票（卷票）：校验码后6位

区块链发票：不含税金额/校验码，例如：“285.01/856ab”

机动车销售统一发票：不含税价

货物运输业增值税专用发票：合计金额

二手车销售统一发票：车价合计
                     * @return Additional 根据票种传递对应值，如果报参数错误，请仔细检查每个票种对应的值

增值税专用发票：开具金额（不含税）

增值税普通发票、增值税电子普通发票（含通行费发票）、增值税普通发票（卷票）：校验码后6位

区块链发票：不含税金额/校验码，例如：“285.01/856ab”

机动车销售统一发票：不含税价

货物运输业增值税专用发票：合计金额

二手车销售统一发票：车价合计
                     * 
                     */
                    std::string GetAdditional() const;

                    /**
                     * 设置根据票种传递对应值，如果报参数错误，请仔细检查每个票种对应的值

增值税专用发票：开具金额（不含税）

增值税普通发票、增值税电子普通发票（含通行费发票）、增值税普通发票（卷票）：校验码后6位

区块链发票：不含税金额/校验码，例如：“285.01/856ab”

机动车销售统一发票：不含税价

货物运输业增值税专用发票：合计金额

二手车销售统一发票：车价合计
                     * @param _additional 根据票种传递对应值，如果报参数错误，请仔细检查每个票种对应的值

增值税专用发票：开具金额（不含税）

增值税普通发票、增值税电子普通发票（含通行费发票）、增值税普通发票（卷票）：校验码后6位

区块链发票：不含税金额/校验码，例如：“285.01/856ab”

机动车销售统一发票：不含税价

货物运输业增值税专用发票：合计金额

二手车销售统一发票：车价合计
                     * 
                     */
                    void SetAdditional(const std::string& _additional);

                    /**
                     * 判断参数 Additional 是否已赋值
                     * @return Additional 是否已赋值
                     * 
                     */
                    bool AdditionalHasBeenSet() const;

                private:

                    /**
                     * 发票代码， 一张发票一天只能查询5次。
                     */
                    std::string m_invoiceCode;
                    bool m_invoiceCodeHasBeenSet;

                    /**
                     * 发票号码（8位）
                     */
                    std::string m_invoiceNo;
                    bool m_invoiceNoHasBeenSet;

                    /**
                     * 开票日期（不支持当天发票查询，支持五年以内开具的发票），格式：“YYYY-MM-DD”，如：2019-12-20。
                     */
                    std::string m_invoiceDate;
                    bool m_invoiceDateHasBeenSet;

                    /**
                     * 根据票种传递对应值，如果报参数错误，请仔细检查每个票种对应的值

增值税专用发票：开具金额（不含税）

增值税普通发票、增值税电子普通发票（含通行费发票）、增值税普通发票（卷票）：校验码后6位

区块链发票：不含税金额/校验码，例如：“285.01/856ab”

机动车销售统一发票：不含税价

货物运输业增值税专用发票：合计金额

二手车销售统一发票：车价合计
                     */
                    std::string m_additional;
                    bool m_additionalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYREQUEST_H_
