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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEETAXTEMPLATEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEETAXTEMPLATEINFO_H_

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
                * 收款用户计税模板信息
                */
                class PayeeTaxTemplateInfo : public AbstractModel
                {
                public:
                    PayeeTaxTemplateInfo();
                    ~PayeeTaxTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收入类型
LABOR: 劳务所得
OCCASION: 偶然所得
                     * @return IncomeType 收入类型
LABOR: 劳务所得
OCCASION: 偶然所得
                     * 
                     */
                    std::string GetIncomeType() const;

                    /**
                     * 设置收入类型
LABOR: 劳务所得
OCCASION: 偶然所得
                     * @param _incomeType 收入类型
LABOR: 劳务所得
OCCASION: 偶然所得
                     * 
                     */
                    void SetIncomeType(const std::string& _incomeType);

                    /**
                     * 判断参数 IncomeType 是否已赋值
                     * @return IncomeType 是否已赋值
                     * 
                     */
                    bool IncomeTypeHasBeenSet() const;

                    /**
                     * 获取计税模板ID
                     * @return TaxTemplateId 计税模板ID
                     * 
                     */
                    std::string GetTaxTemplateId() const;

                    /**
                     * 设置计税模板ID
                     * @param _taxTemplateId 计税模板ID
                     * 
                     */
                    void SetTaxTemplateId(const std::string& _taxTemplateId);

                    /**
                     * 判断参数 TaxTemplateId 是否已赋值
                     * @return TaxTemplateId 是否已赋值
                     * 
                     */
                    bool TaxTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 收入类型
LABOR: 劳务所得
OCCASION: 偶然所得
                     */
                    std::string m_incomeType;
                    bool m_incomeTypeHasBeenSet;

                    /**
                     * 计税模板ID
                     */
                    std::string m_taxTemplateId;
                    bool m_taxTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEETAXTEMPLATEINFO_H_
