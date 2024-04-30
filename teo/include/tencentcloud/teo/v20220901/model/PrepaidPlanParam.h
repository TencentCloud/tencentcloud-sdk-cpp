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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PREPAIDPLANPARAM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PREPAIDPLANPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 预付费套餐计费参数
                */
                class PrepaidPlanParam : public AbstractModel
                {
                public:
                    PrepaidPlanParam();
                    ~PrepaidPlanParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订阅预付费套餐的周期，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。

不填写使用默认值 1。
                     * @return Period 订阅预付费套餐的周期，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。

不填写使用默认值 1。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置订阅预付费套餐的周期，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。

不填写使用默认值 1。
                     * @param _period 订阅预付费套餐的周期，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。

不填写使用默认值 1。
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
                     * 获取预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
不填写使用默认值 off，自动续费时，默认续费1个月。
                     * @return RenewFlag 预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
不填写使用默认值 off，自动续费时，默认续费1个月。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
不填写使用默认值 off，自动续费时，默认续费1个月。
                     * @param _renewFlag 预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
不填写使用默认值 off，自动续费时，默认续费1个月。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * 订阅预付费套餐的周期，单位：月，取值有：1，2，3，4，5，6，7，8，9，10，11，12，24，36。

不填写使用默认值 1。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
不填写使用默认值 off，自动续费时，默认续费1个月。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PREPAIDPLANPARAM_H_
