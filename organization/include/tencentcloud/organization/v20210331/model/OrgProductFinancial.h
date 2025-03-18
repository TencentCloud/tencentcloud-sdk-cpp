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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGPRODUCTFINANCIAL_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGPRODUCTFINANCIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 组织产品财务信息
                */
                class OrgProductFinancial : public AbstractModel
                {
                public:
                    OrgProductFinancial();
                    ~OrgProductFinancial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品Code。
                     * @return ProductName 产品Code。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品Code。
                     * @param _productName 产品Code。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品名。
                     * @return ProductCode 产品名。
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品名。
                     * @param _productCode 产品名。
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取产品消耗，单位：元。
                     * @return TotalCost 产品消耗，单位：元。
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置产品消耗，单位：元。
                     * @param _totalCost 产品消耗，单位：元。
                     * 
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取占比%。
                     * @return Ratio 占比%。
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置占比%。
                     * @param _ratio 占比%。
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                private:

                    /**
                     * 产品Code。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品名。
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 产品消耗，单位：元。
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 占比%。
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGPRODUCTFINANCIAL_H_
