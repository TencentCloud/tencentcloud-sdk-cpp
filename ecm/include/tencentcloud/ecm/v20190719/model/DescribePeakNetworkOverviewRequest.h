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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKNETWORKOVERVIEWREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKNETWORKOVERVIEWREQUEST_H_

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
                * DescribePeakNetworkOverview请求参数结构体
                */
                class DescribePeakNetworkOverviewRequest : public AbstractModel
                {
                public:
                    DescribePeakNetworkOverviewRequest();
                    ~DescribePeakNetworkOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间（xxxx-xx-xx）如2019-08-14，默认为一周之前的日期。
                     * @return StartTime 开始时间（xxxx-xx-xx）如2019-08-14，默认为一周之前的日期。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（xxxx-xx-xx）如2019-08-14，默认为一周之前的日期。
                     * @param StartTime 开始时间（xxxx-xx-xx）如2019-08-14，默认为一周之前的日期。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（xxxx-xx-xx）如2019-08-14，默认为昨天。
                     * @return EndTime 结束时间（xxxx-xx-xx）如2019-08-14，默认为昨天。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（xxxx-xx-xx）如2019-08-14，默认为昨天。
                     * @param EndTime 结束时间（xxxx-xx-xx）如2019-08-14，默认为昨天。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取过滤条件。
region    String      是否必填：否     （过滤条件）按照region过滤,不支持模糊匹配。
                     * @return Filters 过滤条件。
region    String      是否必填：否     （过滤条件）按照region过滤,不支持模糊匹配。
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
region    String      是否必填：否     （过滤条件）按照region过滤,不支持模糊匹配。
                     * @param Filters 过滤条件。
region    String      是否必填：否     （过滤条件）按照region过滤,不支持模糊匹配。
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 开始时间（xxxx-xx-xx）如2019-08-14，默认为一周之前的日期。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（xxxx-xx-xx）如2019-08-14，默认为昨天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 过滤条件。
region    String      是否必填：否     （过滤条件）按照region过滤,不支持模糊匹配。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKNETWORKOVERVIEWREQUEST_H_
