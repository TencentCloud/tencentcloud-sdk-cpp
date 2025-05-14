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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGPRERELEASERESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGPRERELEASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * BiddingPreRelease返回参数结构体
                */
                class BiddingPreReleaseResponse : public AbstractModel
                {
                public:
                    BiddingPreReleaseResponse();
                    ~BiddingPreReleaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否需要额外支付
true: 需要额外支付
false: 不需要额外支付
                     * @return IsNeedPay 是否需要额外支付
true: 需要额外支付
false: 不需要额外支付
                     * 
                     */
                    bool GetIsNeedPay() const;

                    /**
                     * 判断参数 IsNeedPay 是否已赋值
                     * @return IsNeedPay 是否已赋值
                     * 
                     */
                    bool IsNeedPayHasBeenSet() const;

                    /**
                     * 获取计费请求参数，以类Json字符串的形式进行返回。json字符串前有一个">"特定标识符号，去掉标识符的字符串可用于计费下单

                     * @return BillingParam 计费请求参数，以类Json字符串的形式进行返回。json字符串前有一个">"特定标识符号，去掉标识符的字符串可用于计费下单

                     * 
                     */
                    std::string GetBillingParam() const;

                    /**
                     * 判断参数 BillingParam 是否已赋值
                     * @return BillingParam 是否已赋值
                     * 
                     */
                    bool BillingParamHasBeenSet() const;

                private:

                    /**
                     * 是否需要额外支付
true: 需要额外支付
false: 不需要额外支付
                     */
                    bool m_isNeedPay;
                    bool m_isNeedPayHasBeenSet;

                    /**
                     * 计费请求参数，以类Json字符串的形式进行返回。json字符串前有一个">"特定标识符号，去掉标识符的字符串可用于计费下单

                     */
                    std::string m_billingParam;
                    bool m_billingParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGPRERELEASERESPONSE_H_
