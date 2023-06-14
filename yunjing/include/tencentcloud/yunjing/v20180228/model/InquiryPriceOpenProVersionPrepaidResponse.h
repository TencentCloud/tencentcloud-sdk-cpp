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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_INQUIRYPRICEOPENPROVERSIONPREPAIDRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_INQUIRYPRICEOPENPROVERSIONPREPAIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * InquiryPriceOpenProVersionPrepaid返回参数结构体
                */
                class InquiryPriceOpenProVersionPrepaidResponse : public AbstractModel
                {
                public:
                    InquiryPriceOpenProVersionPrepaidResponse();
                    ~InquiryPriceOpenProVersionPrepaidResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预支费用的原价，单位：元。
                     * @return OriginalPrice 预支费用的原价，单位：元。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取预支费用的折扣价，单位：元。
                     * @return DiscountPrice 预支费用的折扣价，单位：元。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                private:

                    /**
                     * 预支费用的原价，单位：元。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 预支费用的折扣价，单位：元。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_INQUIRYPRICEOPENPROVERSIONPREPAIDRESPONSE_H_
