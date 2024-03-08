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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATECONDITIONSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATECONDITIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAllocateConditions请求参数结构体
                */
                class DescribeAllocateConditionsRequest : public AbstractModel
                {
                public:
                    DescribeAllocateConditionsRequest();
                    ~DescribeAllocateConditionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账单月份，格式为2024-02，不传默认当前月
                     * @return Month 账单月份，格式为2024-02，不传默认当前月
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份，格式为2024-02，不传默认当前月
                     * @param _month 账单月份，格式为2024-02，不传默认当前月
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                private:

                    /**
                     * 账单月份，格式为2024-02，不传默认当前月
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATECONDITIONSREQUEST_H_
