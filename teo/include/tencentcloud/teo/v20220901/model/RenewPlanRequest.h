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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RENEWPLANREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RENEWPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * RenewPlan请求参数结构体
                */
                class RenewPlanRequest : public AbstractModel
                {
                public:
                    RenewPlanRequest();
                    ~RenewPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * @return PlanId 套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * @param _planId 套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取续费套餐的时长，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。
                     * @return Period 续费套餐的时长，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置续费套餐的时长，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。
                     * @param _period 续费套餐的时长，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券，取值有：<li> true：是；</li><li> false：否。</li>不填写使用默认值 false。
                     * @return AutoUseVoucher 是否自动使用代金券，取值有：<li> true：是；</li><li> false：否。</li>不填写使用默认值 false。
                     * 
                     */
                    std::string GetAutoUseVoucher() const;

                    /**
                     * 设置是否自动使用代金券，取值有：<li> true：是；</li><li> false：否。</li>不填写使用默认值 false。
                     * @param _autoUseVoucher 是否自动使用代金券，取值有：<li> true：是；</li><li> false：否。</li>不填写使用默认值 false。
                     * 
                     */
                    void SetAutoUseVoucher(const std::string& _autoUseVoucher);

                    /**
                     * 判断参数 AutoUseVoucher 是否已赋值
                     * @return AutoUseVoucher 是否已赋值
                     * 
                     */
                    bool AutoUseVoucherHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID，形如 edgeone-2unuvzjmmn2q。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 续费套餐的时长，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 是否自动使用代金券，取值有：<li> true：是；</li><li> false：否。</li>不填写使用默认值 false。
                     */
                    std::string m_autoUseVoucher;
                    bool m_autoUseVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RENEWPLANREQUEST_H_
