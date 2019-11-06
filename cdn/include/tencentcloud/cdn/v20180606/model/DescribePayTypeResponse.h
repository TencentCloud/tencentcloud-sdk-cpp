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


                    /**
                     * 获取计费类型：
flux：流量计费
bandwidth：带宽计费
如果修改过计费方式，表示下次生效的计费类型，否则表示当前计费类型。
                     * @return PayType 计费类型：
flux：流量计费
bandwidth：带宽计费
如果修改过计费方式，表示下次生效的计费类型，否则表示当前计费类型。
                     */
                    std::string GetPayType() const;

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取计费周期：
day：日结计费
month：月结计费
                     * @return BillingCycle 计费周期：
day：日结计费
month：月结计费
                     */
                    std::string GetBillingCycle() const;

                    /**
                     * 判断参数 BillingCycle 是否已赋值
                     * @return BillingCycle 是否已赋值
                     */
                    bool BillingCycleHasBeenSet() const;

                    /**
                     * 获取计费方式：
monthMax：日峰值月平均计费，月结模式
day95：日 95 带宽计费，月结模式
month95：月95带宽计费，月结模式
sum：总流量计费，日结与月结均有流量计费模式
max：峰值带宽计费，日结模式
                     * @return StatType 计费方式：
monthMax：日峰值月平均计费，月结模式
day95：日 95 带宽计费，月结模式
month95：月95带宽计费，月结模式
sum：总流量计费，日结与月结均有流量计费模式
max：峰值带宽计费，日结模式
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取地区计费方式，仅在查询中国境外 CDN 计费方式时可用
all：表示全地区统一计费
multiple：表示分地区计费。
                     * @return RegionType 地区计费方式，仅在查询中国境外 CDN 计费方式时可用
all：表示全地区统一计费
multiple：表示分地区计费。
                     */
                    std::string GetRegionType() const;

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取当前计费类型：
flux：流量计费
bandwidth：带宽计费
                     * @return CurrentPayType 当前计费类型：
flux：流量计费
bandwidth：带宽计费
                     */
                    std::string GetCurrentPayType() const;

                    /**
                     * 判断参数 CurrentPayType 是否已赋值
                     * @return CurrentPayType 是否已赋值
                     */
                    bool CurrentPayTypeHasBeenSet() const;

                private:

                    /**
                     * 计费类型：
flux：流量计费
bandwidth：带宽计费
如果修改过计费方式，表示下次生效的计费类型，否则表示当前计费类型。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 计费周期：
day：日结计费
month：月结计费
                     */
                    std::string m_billingCycle;
                    bool m_billingCycleHasBeenSet;

                    /**
                     * 计费方式：
monthMax：日峰值月平均计费，月结模式
day95：日 95 带宽计费，月结模式
month95：月95带宽计费，月结模式
sum：总流量计费，日结与月结均有流量计费模式
max：峰值带宽计费，日结模式
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * 地区计费方式，仅在查询中国境外 CDN 计费方式时可用
all：表示全地区统一计费
multiple：表示分地区计费。
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * 当前计费类型：
flux：流量计费
bandwidth：带宽计费
                     */
                    std::string m_currentPayType;
                    bool m_currentPayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPERESPONSE_H_
