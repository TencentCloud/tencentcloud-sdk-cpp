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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRISKOVERVIEWREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRISKOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwRiskOverview请求参数结构体
                */
                class DescribeCfwRiskOverviewRequest : public AbstractModel
                {
                public:
                    DescribeCfwRiskOverviewRequest();
                    ~DescribeCfwRiskOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自定义开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 EndTime 同时传。</p>
                     * @return StartTime <p>自定义开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 EndTime 同时传。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>自定义开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 EndTime 同时传。</p>
                     * @param _startTime <p>自定义开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 EndTime 同时传。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>自定义结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 StartTime 同时传。</p>
                     * @return EndTime <p>自定义结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 StartTime 同时传。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>自定义结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 StartTime 同时传。</p>
                     * @param _endTime <p>自定义结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 StartTime 同时传。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>自定义开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 EndTime 同时传。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>自定义结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；必须和 StartTime 同时传。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRISKOVERVIEWREQUEST_H_
