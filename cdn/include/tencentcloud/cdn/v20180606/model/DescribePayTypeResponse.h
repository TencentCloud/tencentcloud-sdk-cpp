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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribePayType返回参数结构体
                */
                class DescribePayTypeResponse : public AbstractModel
                {
                public:
                    DescribePayTypeResponse();
                    ~DescribePayTypeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计费类型
flux：流量计费
bandwidth：带宽计费
request：请求数计费
flux_sep：动静分离流量计费
bandwidth_sep：动静分离带宽计费
日结计费方式切换时，若当日产生消耗，则此字段表示第二天即将生效的计费方式，若未产生消耗，则表示已经生效的计费方式。
                     * @return PayType 计费类型
flux：流量计费
bandwidth：带宽计费
request：请求数计费
flux_sep：动静分离流量计费
bandwidth_sep：动静分离带宽计费
日结计费方式切换时，若当日产生消耗，则此字段表示第二天即将生效的计费方式，若未产生消耗，则表示已经生效的计费方式。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取计费周期
day：日结计费
month：月结计费
hour：小时结计费
                     * @return BillingCycle 计费周期
day：日结计费
month：月结计费
hour：小时结计费
                     * 
                     */
                    std::string GetBillingCycle() const;

                    /**
                     * 判断参数 BillingCycle 是否已赋值
                     * @return BillingCycle 是否已赋值
                     * 
                     */
                    bool BillingCycleHasBeenSet() const;

                    /**
                     * 获取统计类型
monthMax：日峰值月平均，月结模式
day95：日 95 带宽，月结模式
month95：月95带宽，月结模式
sum：总流量/总请求数，日结或月结模式
max：峰值带宽，日结模式
                     * @return StatType 统计类型
monthMax：日峰值月平均，月结模式
day95：日 95 带宽，月结模式
month95：月95带宽，月结模式
sum：总流量/总请求数，日结或月结模式
max：峰值带宽，日结模式
                     * 
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取计费区域
all：全地区统一计费
multiple：分地区计费
                     * @return RegionType 计费区域
all：全地区统一计费
multiple：分地区计费
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     * 
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取当前生效计费类型
flux：流量计费
bandwidth：带宽计费
request：请求数计费
flux_sep：动静分离流量计费
bandwidth_sep：动静分离带宽计费
                     * @return CurrentPayType 当前生效计费类型
flux：流量计费
bandwidth：带宽计费
request：请求数计费
flux_sep：动静分离流量计费
bandwidth_sep：动静分离带宽计费
                     * 
                     */
                    std::string GetCurrentPayType() const;

                    /**
                     * 判断参数 CurrentPayType 是否已赋值
                     * @return CurrentPayType 是否已赋值
                     * 
                     */
                    bool CurrentPayTypeHasBeenSet() const;

                private:

                    /**
                     * 计费类型
flux：流量计费
bandwidth：带宽计费
request：请求数计费
flux_sep：动静分离流量计费
bandwidth_sep：动静分离带宽计费
日结计费方式切换时，若当日产生消耗，则此字段表示第二天即将生效的计费方式，若未产生消耗，则表示已经生效的计费方式。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 计费周期
day：日结计费
month：月结计费
hour：小时结计费
                     */
                    std::string m_billingCycle;
                    bool m_billingCycleHasBeenSet;

                    /**
                     * 统计类型
monthMax：日峰值月平均，月结模式
day95：日 95 带宽，月结模式
month95：月95带宽，月结模式
sum：总流量/总请求数，日结或月结模式
max：峰值带宽，日结模式
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * 计费区域
all：全地区统一计费
multiple：分地区计费
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * 当前生效计费类型
flux：流量计费
bandwidth：带宽计费
request：请求数计费
flux_sep：动静分离流量计费
bandwidth_sep：动静分离带宽计费
                     */
                    std::string m_currentPayType;
                    bool m_currentPayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_
