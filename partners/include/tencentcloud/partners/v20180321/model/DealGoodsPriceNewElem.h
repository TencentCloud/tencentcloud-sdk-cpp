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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DEALGOODSPRICENEWELEM_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DEALGOODSPRICENEWELEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 订单价格详情
                */
                class DealGoodsPriceNewElem : public AbstractModel
                {
                public:
                    DealGoodsPriceNewElem();
                    ~DealGoodsPriceNewElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实付金额（单位：分）
                     * @return RealTotalCost 实付金额（单位：分）
                     * 
                     */
                    int64_t GetRealTotalCost() const;

                    /**
                     * 设置实付金额（单位：分）
                     * @param _realTotalCost 实付金额（单位：分）
                     * 
                     */
                    void SetRealTotalCost(const int64_t& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取原始金额（不含折扣，单位：分）
                     * @return OriginalTotalCost 原始金额（不含折扣，单位：分）
                     * 
                     */
                    int64_t GetOriginalTotalCost() const;

                    /**
                     * 设置原始金额（不含折扣，单位：分）
                     * @param _originalTotalCost 原始金额（不含折扣，单位：分）
                     * 
                     */
                    void SetOriginalTotalCost(const int64_t& _originalTotalCost);

                    /**
                     * 判断参数 OriginalTotalCost 是否已赋值
                     * @return OriginalTotalCost 是否已赋值
                     * 
                     */
                    bool OriginalTotalCostHasBeenSet() const;

                private:

                    /**
                     * 实付金额（单位：分）
                     */
                    int64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 原始金额（不含折扣，单位：分）
                     */
                    int64_t m_originalTotalCost;
                    bool m_originalTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DEALGOODSPRICENEWELEM_H_
