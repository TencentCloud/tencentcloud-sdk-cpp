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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SPECPRICE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SPECPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 计费项询价结果
                */
                class SpecPrice : public AbstractModel
                {
                public:
                    SpecPrice();
                    ~SpecPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项名称
                     * @return SpecName 计费项名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置计费项名称
                     * @param _specName 计费项名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取原价，单位：分。最大值42亿，超过则返回0
                     * @return TotalCost 原价，单位：分。最大值42亿，超过则返回0
                     * 
                     */
                    uint64_t GetTotalCost() const;

                    /**
                     * 设置原价，单位：分。最大值42亿，超过则返回0
                     * @param _totalCost 原价，单位：分。最大值42亿，超过则返回0
                     * 
                     */
                    void SetTotalCost(const uint64_t& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取优惠后的价格，单位：分
                     * @return RealTotalCost 优惠后的价格，单位：分
                     * 
                     */
                    uint64_t GetRealTotalCost() const;

                    /**
                     * 设置优惠后的价格，单位：分
                     * @param _realTotalCost 优惠后的价格，单位：分
                     * 
                     */
                    void SetRealTotalCost(const uint64_t& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取计费项数量
                     * @return SpecCount 计费项数量
                     * 
                     */
                    uint64_t GetSpecCount() const;

                    /**
                     * 设置计费项数量
                     * @param _specCount 计费项数量
                     * 
                     */
                    void SetSpecCount(const uint64_t& _specCount);

                    /**
                     * 判断参数 SpecCount 是否已赋值
                     * @return SpecCount 是否已赋值
                     * 
                     */
                    bool SpecCountHasBeenSet() const;

                private:

                    /**
                     * 计费项名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 原价，单位：分。最大值42亿，超过则返回0
                     */
                    uint64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 优惠后的价格，单位：分
                     */
                    uint64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 计费项数量
                     */
                    uint64_t m_specCount;
                    bool m_specCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SPECPRICE_H_
