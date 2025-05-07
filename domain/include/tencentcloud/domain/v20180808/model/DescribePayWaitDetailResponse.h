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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPAYWAITDETAILRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPAYWAITDETAILRESPONSE_H_

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
                * DescribePayWaitDetail返回参数结构体
                */
                class DescribePayWaitDetailResponse : public AbstractModel
                {
                public:
                    DescribePayWaitDetailResponse();
                    ~DescribePayWaitDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名类型
pay：等待支持
sub：已经预订
wait：等待出价
finish：完成出价
                     * @return Status 域名类型
pay：等待支持
sub：已经预订
wait：等待出价
finish：完成出价
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支付结束时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @return EndTime 支付结束时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取域名注册时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @return RegTime 域名注册时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetRegTime() const;

                    /**
                     * 判断参数 RegTime 是否已赋值
                     * @return RegTime 是否已赋值
                     * 
                     */
                    bool RegTimeHasBeenSet() const;

                    /**
                     * 获取域名成交价格 单位元
                     * @return Price 域名成交价格 单位元
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取待退还保证金 单位元
                     * @return RetDeposit 待退还保证金 单位元
                     * 
                     */
                    double GetRetDeposit() const;

                    /**
                     * 判断参数 RetDeposit 是否已赋值
                     * @return RetDeposit 是否已赋值
                     * 
                     */
                    bool RetDepositHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名类型
pay：等待支持
sub：已经预订
wait：等待出价
finish：完成出价
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 支付结束时间 
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 域名注册时间 
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_regTime;
                    bool m_regTimeHasBeenSet;

                    /**
                     * 域名成交价格 单位元
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 待退还保证金 单位元
                     */
                    double m_retDeposit;
                    bool m_retDepositHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPAYWAITDETAILRESPONSE_H_
