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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_PRICE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 消息价格实体
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取折扣价
                     * @return RealTotalCost 折扣价
                     * 
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 设置折扣价
                     * @param _realTotalCost 折扣价
                     * 
                     */
                    void SetRealTotalCost(const double& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取原价
                     * @return TotalCost 原价
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置原价
                     * @param _totalCost 原价
                     * 
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * 折扣价
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 原价
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_PRICE_H_
