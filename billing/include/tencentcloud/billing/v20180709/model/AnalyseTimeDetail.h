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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSETIMEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSETIMEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 成本分返回值复杂类型
                */
                class AnalyseTimeDetail : public AbstractModel
                {
                public:
                    AnalyseTimeDetail();
                    ~AnalyseTimeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Time 日期
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置日期
                     * @param _time 日期
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return Money 金额
                     * 
                     */
                    std::string GetMoney() const;

                    /**
                     * 设置金额
                     * @param _money 金额
                     * 
                     */
                    void SetMoney(const std::string& _money);

                    /**
                     * 判断参数 Money 是否已赋值
                     * @return Money 是否已赋值
                     * 
                     */
                    bool MoneyHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_money;
                    bool m_moneyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSETIMEDETAIL_H_
