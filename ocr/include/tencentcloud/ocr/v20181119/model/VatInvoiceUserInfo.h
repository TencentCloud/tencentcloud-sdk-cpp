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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEUSERINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 发票人员信息
                */
                class VatInvoiceUserInfo : public AbstractModel
                {
                public:
                    VatInvoiceUserInfo();
                    ~VatInvoiceUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取纳税人识别号
                     * @return TaxId 纳税人识别号
                     * 
                     */
                    std::string GetTaxId() const;

                    /**
                     * 设置纳税人识别号
                     * @param _taxId 纳税人识别号
                     * 
                     */
                    void SetTaxId(const std::string& _taxId);

                    /**
                     * 判断参数 TaxId 是否已赋值
                     * @return TaxId 是否已赋值
                     * 
                     */
                    bool TaxIdHasBeenSet() const;

                    /**
                     * 获取地 址、电 话
                     * @return AddrTel 地 址、电 话
                     * 
                     */
                    std::string GetAddrTel() const;

                    /**
                     * 设置地 址、电 话
                     * @param _addrTel 地 址、电 话
                     * 
                     */
                    void SetAddrTel(const std::string& _addrTel);

                    /**
                     * 判断参数 AddrTel 是否已赋值
                     * @return AddrTel 是否已赋值
                     * 
                     */
                    bool AddrTelHasBeenSet() const;

                    /**
                     * 获取开户行及账号
                     * @return FinancialAccount 开户行及账号
                     * 
                     */
                    std::string GetFinancialAccount() const;

                    /**
                     * 设置开户行及账号
                     * @param _financialAccount 开户行及账号
                     * 
                     */
                    void SetFinancialAccount(const std::string& _financialAccount);

                    /**
                     * 判断参数 FinancialAccount 是否已赋值
                     * @return FinancialAccount 是否已赋值
                     * 
                     */
                    bool FinancialAccountHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 纳税人识别号
                     */
                    std::string m_taxId;
                    bool m_taxIdHasBeenSet;

                    /**
                     * 地 址、电 话
                     */
                    std::string m_addrTel;
                    bool m_addrTelHasBeenSet;

                    /**
                     * 开户行及账号
                     */
                    std::string m_financialAccount;
                    bool m_financialAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEUSERINFO_H_
