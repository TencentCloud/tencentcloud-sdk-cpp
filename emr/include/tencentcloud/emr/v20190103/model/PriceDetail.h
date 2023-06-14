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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PRICEDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 价格详情
                */
                class PriceDetail : public AbstractModel
                {
                public:
                    PriceDetail();
                    ~PriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
                     * @return ResourceId 节点ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置节点ID
                     * @param _resourceId 节点ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取价格计算公式
                     * @return Formula 价格计算公式
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置价格计算公式
                     * @param _formula 价格计算公式
                     * 
                     */
                    void SetFormula(const std::string& _formula);

                    /**
                     * 判断参数 Formula 是否已赋值
                     * @return Formula 是否已赋值
                     * 
                     */
                    bool FormulaHasBeenSet() const;

                    /**
                     * 获取原价
                     * @return OriginalCost 原价
                     * 
                     */
                    double GetOriginalCost() const;

                    /**
                     * 设置原价
                     * @param _originalCost 原价
                     * 
                     */
                    void SetOriginalCost(const double& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取折扣价
                     * @return DiscountCost 折扣价
                     * 
                     */
                    double GetDiscountCost() const;

                    /**
                     * 设置折扣价
                     * @param _discountCost 折扣价
                     * 
                     */
                    void SetDiscountCost(const double& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                private:

                    /**
                     * 节点ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 价格计算公式
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * 原价
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 折扣价
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PRICEDETAIL_H_
