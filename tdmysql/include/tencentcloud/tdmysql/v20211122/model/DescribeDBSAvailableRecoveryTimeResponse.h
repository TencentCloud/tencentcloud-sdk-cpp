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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSAVAILABLERECOVERYTIMERESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSAVAILABLERECOVERYTIMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ArchiveLogInterval.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBSAvailableRecoveryTime返回参数结构体
                */
                class DescribeDBSAvailableRecoveryTimeResponse : public AbstractModel
                {
                public:
                    DescribeDBSAvailableRecoveryTimeResponse();
                    ~DescribeDBSAvailableRecoveryTimeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>可恢复时间区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Intervals <p>可恢复时间区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ArchiveLogInterval> GetIntervals() const;

                    /**
                     * 判断参数 Intervals 是否已赋值
                     * @return Intervals 是否已赋值
                     * 
                     */
                    bool IntervalsHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>可恢复时间区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ArchiveLogInterval> m_intervals;
                    bool m_intervalsHasBeenSet;

                    /**
                     * <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSAVAILABLERECOVERYTIMERESPONSE_H_
