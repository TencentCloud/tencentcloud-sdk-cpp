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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIREPRICERENEWEMRREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIREPRICERENEWEMRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquirePriceRenewEmr请求参数结构体
                */
                class InquirePriceRenewEmrRequest : public AbstractModel
                {
                public:
                    InquirePriceRenewEmrRequest();
                    ~InquirePriceRenewEmrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * @return TimeSpan 实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * @param _timeSpan 实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取待续费集群ID列表。
                     * @return InstanceId 待续费集群ID列表。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待续费集群ID列表。
                     * @param _instanceId 待续费集群ID列表。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取实例计费模式。此处只支持取值为1，表示包年包月。
                     * @return PayMode 实例计费模式。此处只支持取值为1，表示包年包月。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置实例计费模式。此处只支持取值为1，表示包年包月。
                     * @param _payMode 实例计费模式。此处只支持取值为1，表示包年包月。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * @return TimeUnit 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * @param _timeUnit 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * @return Currency 货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * @param _currency 货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 待续费集群ID列表。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 实例计费模式。此处只支持取值为1，表示包年包月。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIREPRICERENEWEMRREQUEST_H_
