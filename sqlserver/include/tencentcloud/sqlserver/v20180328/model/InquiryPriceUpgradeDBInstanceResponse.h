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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceUpgradeDBInstance返回参数结构体
                */
                class InquiryPriceUpgradeDBInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeDBInstanceResponse();
                    ~InquiryPriceUpgradeDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取未打折的原价，其值除以100表示最终的价格。例如10094表示100.94元
                     * @return OriginalPrice 未打折的原价，其值除以100表示最终的价格。例如10094表示100.94元
                     * 
                     */
                    int64_t GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取实际需要支付价格，其值除以100表示最终的价格。例如10094表示100.94元
                     * @return Price 实际需要支付价格，其值除以100表示最终的价格。例如10094表示100.94元
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * 未打折的原价，其值除以100表示最终的价格。例如10094表示100.94元
                     */
                    int64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 实际需要支付价格，其值除以100表示最终的价格。例如10094表示100.94元
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCERESPONSE_H_
