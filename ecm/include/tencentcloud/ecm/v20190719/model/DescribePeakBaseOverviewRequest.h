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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePeakBaseOverview请求参数结构体
                */
                class DescribePeakBaseOverviewRequest : public AbstractModel
                {
                public:
                    DescribePeakBaseOverviewRequest();
                    ~DescribePeakBaseOverviewRequest() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWREQUEST_H_
