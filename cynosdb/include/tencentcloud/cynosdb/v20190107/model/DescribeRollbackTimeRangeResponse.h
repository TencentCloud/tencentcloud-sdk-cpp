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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMERANGERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMERANGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeRollbackTimeRange返回参数结构体
                */
                class DescribeRollbackTimeRangeResponse : public AbstractModel
                {
                public:
                    DescribeRollbackTimeRangeResponse();
                    ~DescribeRollbackTimeRangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取有效回归时间范围开始时间点
                     * @return TimeRangeStart 有效回归时间范围开始时间点
                     */
                    std::string GetTimeRangeStart() const;

                    /**
                     * 判断参数 TimeRangeStart 是否已赋值
                     * @return TimeRangeStart 是否已赋值
                     */
                    bool TimeRangeStartHasBeenSet() const;

                    /**
                     * 获取有效回归时间范围结束时间点
                     * @return TimeRangeEnd 有效回归时间范围结束时间点
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     */
                    bool TimeRangeEndHasBeenSet() const;

                private:

                    /**
                     * 有效回归时间范围开始时间点
                     */
                    std::string m_timeRangeStart;
                    bool m_timeRangeStartHasBeenSet;

                    /**
                     * 有效回归时间范围结束时间点
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMERANGERESPONSE_H_
