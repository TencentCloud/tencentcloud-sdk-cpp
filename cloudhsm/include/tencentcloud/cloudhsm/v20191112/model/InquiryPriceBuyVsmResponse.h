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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_INQUIRYPRICEBUYVSMRESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_INQUIRYPRICEBUYVSMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * InquiryPriceBuyVsm返回参数结构体
                */
                class InquiryPriceBuyVsmResponse : public AbstractModel
                {
                public:
                    InquiryPriceBuyVsmResponse();
                    ~InquiryPriceBuyVsmResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取原始总金额，浮点型参数，精确到小数点后两位，如：2000.99
                     * @return TotalCost 原始总金额，浮点型参数，精确到小数点后两位，如：2000.99
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取购买的实例数量
                     * @return GoodsNum 购买的实例数量
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     * @return TimeSpan 商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     * 
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取商品的时间单位，m表示月，y表示年
                     * @return TimeUnit 商品的时间单位，m表示月，y表示年
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取应付总金额，浮点型参数，精确到小数点后两位，如：2000.99
                     * @return OriginalCost 应付总金额，浮点型参数，精确到小数点后两位，如：2000.99
                     * 
                     */
                    double GetOriginalCost() const;

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                private:

                    /**
                     * 原始总金额，浮点型参数，精确到小数点后两位，如：2000.99
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 购买的实例数量
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 商品的时间大小，整型参数，举例：当TimeSpan为1，TImeUnit为m时，表示询价购买时长为1个月时的价格
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 商品的时间单位，m表示月，y表示年
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 应付总金额，浮点型参数，精确到小数点后两位，如：2000.99
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_INQUIRYPRICEBUYVSMRESPONSE_H_
