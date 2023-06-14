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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListAlarms.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBasicAlarmList返回参数结构体
                */
                class DescribeBasicAlarmListResponse : public AbstractModel
                {
                public:
                    DescribeBasicAlarmListResponse();
                    ~DescribeBasicAlarmListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alarms 告警列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeBasicAlarmListAlarms> GetAlarms() const;

                    /**
                     * 判断参数 Alarms 是否已赋值
                     * @return Alarms 是否已赋值
                     * 
                     */
                    bool AlarmsHasBeenSet() const;

                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warning 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarning() const;

                    /**
                     * 判断参数 Warning 是否已赋值
                     * @return Warning 是否已赋值
                     * 
                     */
                    bool WarningHasBeenSet() const;

                private:

                    /**
                     * 告警列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeBasicAlarmListAlarms> m_alarms;
                    bool m_alarmsHasBeenSet;

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warning;
                    bool m_warningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTRESPONSE_H_
