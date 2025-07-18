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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROCESSSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROCESSSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ProcessStatistics.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeProcessStatistics返回参数结构体
                */
                class DescribeProcessStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeProcessStatisticsResponse();
                    ~DescribeProcessStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取进程统计列表记录总数。
                     * @return TotalCount 进程统计列表记录总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取进程统计列表数据数组。
                     * @return ProcessStatistics 进程统计列表数据数组。
                     * 
                     */
                    std::vector<ProcessStatistics> GetProcessStatistics() const;

                    /**
                     * 判断参数 ProcessStatistics 是否已赋值
                     * @return ProcessStatistics 是否已赋值
                     * 
                     */
                    bool ProcessStatisticsHasBeenSet() const;

                private:

                    /**
                     * 进程统计列表记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 进程统计列表数据数组。
                     */
                    std::vector<ProcessStatistics> m_processStatistics;
                    bool m_processStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROCESSSTATISTICSRESPONSE_H_
