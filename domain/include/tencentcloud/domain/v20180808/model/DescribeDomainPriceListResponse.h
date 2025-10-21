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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINPRICELISTRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINPRICELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/PriceInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeDomainPriceList返回参数结构体
                */
                class DescribeDomainPriceListResponse : public AbstractModel
                {
                public:
                    DescribeDomainPriceListResponse();
                    ~DescribeDomainPriceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名价格列表
                     * @return PriceList 域名价格列表
                     * 
                     */
                    std::vector<PriceInfo> GetPriceList() const;

                    /**
                     * 判断参数 PriceList 是否已赋值
                     * @return PriceList 是否已赋值
                     * 
                     */
                    bool PriceListHasBeenSet() const;

                private:

                    /**
                     * 域名价格列表
                     */
                    std::vector<PriceInfo> m_priceList;
                    bool m_priceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINPRICELISTRESPONSE_H_
