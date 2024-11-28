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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 购买商品信息
                */
                class UsageDetails : public AbstractModel
                {
                public:
                    UsageDetails();
                    ~UsageDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品名
                     * @return ProductName 商品名
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置商品名
                     * @param _productName 商品名
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
                     * 获取商品细节
                     * @return SubProductName 商品细节
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置商品细节
                     * @param _subProductName 商品细节
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取产品码	
                     * @return ProductCode 产品码	
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品码	
                     * @param _productCode 产品码	
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
                     * 获取子产品码	
                     * @return SubProductCode 子产品码	
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品码	
                     * @param _subProductCode 子产品码	
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取计费项码	
                     * @return BillingItemCode 计费项码	
                     * 
                     */
                    std::string GetBillingItemCode() const;

                    /**
                     * 设置计费项码	
                     * @param _billingItemCode 计费项码	
                     * 
                     */
                    void SetBillingItemCode(const std::string& _billingItemCode);

                    /**
                     * 判断参数 BillingItemCode 是否已赋值
                     * @return BillingItemCode 是否已赋值
                     * 
                     */
                    bool BillingItemCodeHasBeenSet() const;

                    /**
                     * 获取计费细项码	
                     * @return SubBillingItemCode 计费细项码	
                     * 
                     */
                    std::string GetSubBillingItemCode() const;

                    /**
                     * 设置计费细项码	
                     * @param _subBillingItemCode 计费细项码	
                     * 
                     */
                    void SetSubBillingItemCode(const std::string& _subBillingItemCode);

                    /**
                     * 判断参数 SubBillingItemCode 是否已赋值
                     * @return SubBillingItemCode 是否已赋值
                     * 
                     */
                    bool SubBillingItemCodeHasBeenSet() const;

                    /**
                     * 获取产品英文名	
                     * @return ProductEnName 产品英文名	
                     * 
                     */
                    std::string GetProductEnName() const;

                    /**
                     * 设置产品英文名	
                     * @param _productEnName 产品英文名	
                     * 
                     */
                    void SetProductEnName(const std::string& _productEnName);

                    /**
                     * 判断参数 ProductEnName 是否已赋值
                     * @return ProductEnName 是否已赋值
                     * 
                     */
                    bool ProductEnNameHasBeenSet() const;

                    /**
                     * 获取子产品英文名	
                     * @return SubProductEnName 子产品英文名	
                     * 
                     */
                    std::string GetSubProductEnName() const;

                    /**
                     * 设置子产品英文名	
                     * @param _subProductEnName 子产品英文名	
                     * 
                     */
                    void SetSubProductEnName(const std::string& _subProductEnName);

                    /**
                     * 判断参数 SubProductEnName 是否已赋值
                     * @return SubProductEnName 是否已赋值
                     * 
                     */
                    bool SubProductEnNameHasBeenSet() const;

                    /**
                     * 获取结算周期	
                     * @return CalcUnit 结算周期	
                     * 
                     */
                    std::string GetCalcUnit() const;

                    /**
                     * 设置结算周期	
                     * @param _calcUnit 结算周期	
                     * 
                     */
                    void SetCalcUnit(const std::string& _calcUnit);

                    /**
                     * 判断参数 CalcUnit 是否已赋值
                     * @return CalcUnit 是否已赋值
                     * 
                     */
                    bool CalcUnitHasBeenSet() const;

                    /**
                     * 获取payMode为prepay 且 payScene为common的情况下存在
                     * @return Action payMode为prepay 且 payScene为common的情况下存在
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置payMode为prepay 且 payScene为common的情况下存在
                     * @param _action payMode为prepay 且 payScene为common的情况下存在
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 商品名
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 商品细节
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * 产品码	
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品码	
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 计费项码	
                     */
                    std::string m_billingItemCode;
                    bool m_billingItemCodeHasBeenSet;

                    /**
                     * 计费细项码	
                     */
                    std::string m_subBillingItemCode;
                    bool m_subBillingItemCodeHasBeenSet;

                    /**
                     * 产品英文名	
                     */
                    std::string m_productEnName;
                    bool m_productEnNameHasBeenSet;

                    /**
                     * 子产品英文名	
                     */
                    std::string m_subProductEnName;
                    bool m_subProductEnNameHasBeenSet;

                    /**
                     * 结算周期	
                     */
                    std::string m_calcUnit;
                    bool m_calcUnitHasBeenSet;

                    /**
                     * payMode为prepay 且 payScene为common的情况下存在
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_
