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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMONTHPEAKNETWORKREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMONTHPEAKNETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeMonthPeakNetwork请求参数结构体
                */
                class DescribeMonthPeakNetworkRequest : public AbstractModel
                {
                public:
                    DescribeMonthPeakNetworkRequest();
                    ~DescribeMonthPeakNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取月份时间(xxxx-xx) 如2021-03,默认取当前时间的上一个月份
                     * @return Month 月份时间(xxxx-xx) 如2021-03,默认取当前时间的上一个月份
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置月份时间(xxxx-xx) 如2021-03,默认取当前时间的上一个月份
                     * @param _month 月份时间(xxxx-xx) 如2021-03,默认取当前时间的上一个月份
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 月份时间(xxxx-xx) 如2021-03,默认取当前时间的上一个月份
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMONTHPEAKNETWORKREQUEST_H_
