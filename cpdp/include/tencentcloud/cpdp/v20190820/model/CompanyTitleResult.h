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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_COMPANYTITLERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_COMPANYTITLERESULT_H_

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
                * 公司抬头结果
                */
                class CompanyTitleResult : public AbstractModel
                {
                public:
                    CompanyTitleResult();
                    ~CompanyTitleResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公司银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyBankAccount 公司银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyBankAccount() const;

                    /**
                     * 设置公司银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyBankAccount 公司银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyBankAccount(const std::string& _companyBankAccount);

                    /**
                     * 判断参数 CompanyBankAccount 是否已赋值
                     * @return CompanyBankAccount 是否已赋值
                     * 
                     */
                    bool CompanyBankAccountHasBeenSet() const;

                    /**
                     * 获取公司地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyAddress 公司地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyAddress() const;

                    /**
                     * 设置公司地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyAddress 公司地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyAddress(const std::string& _companyAddress);

                    /**
                     * 判断参数 CompanyAddress 是否已赋值
                     * @return CompanyAddress 是否已赋值
                     * 
                     */
                    bool CompanyAddressHasBeenSet() const;

                    /**
                     * 获取公司税号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyTaxpayerNum 公司税号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyTaxpayerNum() const;

                    /**
                     * 设置公司税号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyTaxpayerNum 公司税号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyTaxpayerNum(const std::string& _companyTaxpayerNum);

                    /**
                     * 判断参数 CompanyTaxpayerNum 是否已赋值
                     * @return CompanyTaxpayerNum 是否已赋值
                     * 
                     */
                    bool CompanyTaxpayerNumHasBeenSet() const;

                    /**
                     * 获取公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyName 公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyName 公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取公司银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyBankName 公司银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyBankName() const;

                    /**
                     * 设置公司银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyBankName 公司银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyBankName(const std::string& _companyBankName);

                    /**
                     * 判断参数 CompanyBankName 是否已赋值
                     * @return CompanyBankName 是否已赋值
                     * 
                     */
                    bool CompanyBankNameHasBeenSet() const;

                    /**
                     * 获取公司电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyPhone 公司电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyPhone() const;

                    /**
                     * 设置公司电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyPhone 公司电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyPhone(const std::string& _companyPhone);

                    /**
                     * 判断参数 CompanyPhone 是否已赋值
                     * @return CompanyPhone 是否已赋值
                     * 
                     */
                    bool CompanyPhoneHasBeenSet() const;

                private:

                    /**
                     * 公司银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyBankAccount;
                    bool m_companyBankAccountHasBeenSet;

                    /**
                     * 公司地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyAddress;
                    bool m_companyAddressHasBeenSet;

                    /**
                     * 公司税号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyTaxpayerNum;
                    bool m_companyTaxpayerNumHasBeenSet;

                    /**
                     * 公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 公司银行名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyBankName;
                    bool m_companyBankNameHasBeenSet;

                    /**
                     * 公司电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyPhone;
                    bool m_companyPhoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_COMPANYTITLERESULT_H_
