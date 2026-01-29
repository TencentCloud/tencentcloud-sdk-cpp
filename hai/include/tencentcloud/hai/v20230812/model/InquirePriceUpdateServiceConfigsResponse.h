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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_INQUIREPRICEUPDATESERVICECONFIGSRESPONSE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_INQUIREPRICEUPDATESERVICECONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ServicePriceDetail.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * InquirePriceUpdateServiceConfigs返回参数结构体
                */
                class InquirePriceUpdateServiceConfigsResponse : public AbstractModel
                {
                public:
                    InquirePriceUpdateServiceConfigsResponse();
                    ~InquirePriceUpdateServiceConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取发货参数对应的价格组合。
                     * @return Price 发货参数对应的价格组合。
                     * 
                     */
                    ServicePriceDetail GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * 发货参数对应的价格组合。
                     */
                    ServicePriceDetail m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_INQUIREPRICEUPDATESERVICECONFIGSRESPONSE_H_
