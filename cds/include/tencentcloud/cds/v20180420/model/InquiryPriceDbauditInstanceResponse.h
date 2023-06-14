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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_INQUIRYPRICEDBAUDITINSTANCERESPONSE_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_INQUIRYPRICEDBAUDITINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * InquiryPriceDbauditInstance返回参数结构体
                */
                class InquiryPriceDbauditInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceDbauditInstanceResponse();
                    ~InquiryPriceDbauditInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总价，单位：元
                     * @return TotalPrice 总价，单位：元
                     * 
                     */
                    double GetTotalPrice() const;

                    /**
                     * 判断参数 TotalPrice 是否已赋值
                     * @return TotalPrice 是否已赋值
                     * 
                     */
                    bool TotalPriceHasBeenSet() const;

                    /**
                     * 获取真实价钱，预支费用的折扣价，单位：元
                     * @return RealTotalCost 真实价钱，预支费用的折扣价，单位：元
                     * 
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                private:

                    /**
                     * 总价，单位：元
                     */
                    double m_totalPrice;
                    bool m_totalPriceHasBeenSet;

                    /**
                     * 真实价钱，预支费用的折扣价，单位：元
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_INQUIRYPRICEDBAUDITINSTANCERESPONSE_H_
