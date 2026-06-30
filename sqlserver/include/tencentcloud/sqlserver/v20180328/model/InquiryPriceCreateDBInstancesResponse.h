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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_

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
                * InquiryPriceCreateDBInstances返回参数结构体
                */
                class InquiryPriceCreateDBInstancesResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesResponse();
                    ~InquiryPriceCreateDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>未打折前价格，其值除以100表示最终的价格。<br>InstanceChargeType=PREPAID时，单位是&quot;每月&quot;。<br>InstanceChargeType=POSTPAID时，单位是&quot;每小时&quot;。<br>例如10010，在InstanceChargeType=PREPAID情况下，表示每月100.10元。</p>
                     * @return OriginalPrice <p>未打折前价格，其值除以100表示最终的价格。<br>InstanceChargeType=PREPAID时，单位是&quot;每月&quot;。<br>InstanceChargeType=POSTPAID时，单位是&quot;每小时&quot;。<br>例如10010，在InstanceChargeType=PREPAID情况下，表示每月100.10元。</p>
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
                     * 获取<p>实际需要支付的价格，其值除以100表示最终的价格。<br>InstanceChargeType=PREPAID时，单位是&quot;每月&quot;。<br>InstanceChargeType=POSTPAID时，单位是&quot;每小时&quot;。<br>例如10010，在InstanceChargeType=PREPAID情况下，表示每月100.10元。</p>
                     * @return Price <p>实际需要支付的价格，其值除以100表示最终的价格。<br>InstanceChargeType=PREPAID时，单位是&quot;每月&quot;。<br>InstanceChargeType=POSTPAID时，单位是&quot;每小时&quot;。<br>例如10010，在InstanceChargeType=PREPAID情况下，表示每月100.10元。</p>
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
                     * <p>未打折前价格，其值除以100表示最终的价格。<br>InstanceChargeType=PREPAID时，单位是&quot;每月&quot;。<br>InstanceChargeType=POSTPAID时，单位是&quot;每小时&quot;。<br>例如10010，在InstanceChargeType=PREPAID情况下，表示每月100.10元。</p>
                     */
                    int64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <p>实际需要支付的价格，其值除以100表示最终的价格。<br>InstanceChargeType=PREPAID时，单位是&quot;每月&quot;。<br>InstanceChargeType=POSTPAID时，单位是&quot;每小时&quot;。<br>例如10010，在InstanceChargeType=PREPAID情况下，表示每月100.10元。</p>
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_
