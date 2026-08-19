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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMANDATORYVULSETREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMANDATORYVULSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeMandatoryVulSet请求参数结构体
                */
                class DescribeMandatoryVulSetRequest : public AbstractModel
                {
                public:
                    DescribeMandatoryVulSetRequest();
                    ~DescribeMandatoryVulSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞披露所属年份
                     * @return Year 漏洞披露所属年份
                     * 
                     */
                    int64_t GetYear() const;

                    /**
                     * 设置漏洞披露所属年份
                     * @param _year 漏洞披露所属年份
                     * 
                     */
                    void SetYear(const int64_t& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     * 
                     */
                    bool YearHasBeenSet() const;

                    /**
                     * 获取漏洞披露所属月份
                     * @return Month 漏洞披露所属月份
                     * 
                     */
                    int64_t GetMonth() const;

                    /**
                     * 设置漏洞披露所属月份
                     * @param _month 漏洞披露所属月份
                     * 
                     */
                    void SetMonth(const int64_t& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                private:

                    /**
                     * 漏洞披露所属年份
                     */
                    int64_t m_year;
                    bool m_yearHasBeenSet;

                    /**
                     * 漏洞披露所属月份
                     */
                    int64_t m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEMANDATORYVULSETREQUEST_H_
