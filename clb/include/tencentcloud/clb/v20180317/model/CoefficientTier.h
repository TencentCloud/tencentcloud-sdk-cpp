/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTTIER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTTIER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CoefficientTierCondition.h>
#include <tencentcloud/clb/v20180317/model/Coefficient.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 积分分档配置
                */
                class CoefficientTier : public AbstractModel
                {
                public:
                    CoefficientTier();
                    ~CoefficientTier() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>积分分级条件</p>
                     * @return Condition <p>积分分级条件</p>
                     * 
                     */
                    CoefficientTierCondition GetCondition() const;

                    /**
                     * 设置<p>积分分级条件</p>
                     * @param _condition <p>积分分级条件</p>
                     * 
                     */
                    void SetCondition(const CoefficientTierCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>积分系数</p>
                     * @return Coefficient <p>积分系数</p>
                     * 
                     */
                    Coefficient GetCoefficient() const;

                    /**
                     * 设置<p>积分系数</p>
                     * @param _coefficient <p>积分系数</p>
                     * 
                     */
                    void SetCoefficient(const Coefficient& _coefficient);

                    /**
                     * 判断参数 Coefficient 是否已赋值
                     * @return Coefficient 是否已赋值
                     * 
                     */
                    bool CoefficientHasBeenSet() const;

                private:

                    /**
                     * <p>积分分级条件</p>
                     */
                    CoefficientTierCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>积分系数</p>
                     */
                    Coefficient m_coefficient;
                    bool m_coefficientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENTTIER_H_
