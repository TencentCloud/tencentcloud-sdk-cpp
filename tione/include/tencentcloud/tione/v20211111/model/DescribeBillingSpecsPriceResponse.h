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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSPRICERESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/SpecPrice.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeBillingSpecsPrice返回参数结构体
                */
                class DescribeBillingSpecsPriceResponse : public AbstractModel
                {
                public:
                    DescribeBillingSpecsPriceResponse();
                    ~DescribeBillingSpecsPriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计费项价格，支持批量返回
                     * @return SpecsPrice 计费项价格，支持批量返回
                     * 
                     */
                    std::vector<SpecPrice> GetSpecsPrice() const;

                    /**
                     * 判断参数 SpecsPrice 是否已赋值
                     * @return SpecsPrice 是否已赋值
                     * 
                     */
                    bool SpecsPriceHasBeenSet() const;

                private:

                    /**
                     * 计费项价格，支持批量返回
                     */
                    std::vector<SpecPrice> m_specsPrice;
                    bool m_specsPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSPRICERESPONSE_H_
