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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationStatistics返回参数结构体
                */
                class DescribeIntegrationStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationStatisticsResponse();
                    ~DescribeIntegrationStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTask 总任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalTask() const;

                    /**
                     * 判断参数 TotalTask 是否已赋值
                     * @return TotalTask 是否已赋值
                     * 
                     */
                    bool TotalTaskHasBeenSet() const;

                    /**
                     * 获取生产态任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProdTask 生产态任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProdTask() const;

                    /**
                     * 判断参数 ProdTask 是否已赋值
                     * @return ProdTask 是否已赋值
                     * 
                     */
                    bool ProdTaskHasBeenSet() const;

                    /**
                     * 获取开发态任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevTask 开发态任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDevTask() const;

                    /**
                     * 判断参数 DevTask 是否已赋值
                     * @return DevTask 是否已赋值
                     * 
                     */
                    bool DevTaskHasBeenSet() const;

                    /**
                     * 获取总读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalReadRecords 总读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalReadRecords() const;

                    /**
                     * 判断参数 TotalReadRecords 是否已赋值
                     * @return TotalReadRecords 是否已赋值
                     * 
                     */
                    bool TotalReadRecordsHasBeenSet() const;

                    /**
                     * 获取总写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalWriteRecords 总写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalWriteRecords() const;

                    /**
                     * 判断参数 TotalWriteRecords 是否已赋值
                     * @return TotalWriteRecords 是否已赋值
                     * 
                     */
                    bool TotalWriteRecordsHasBeenSet() const;

                    /**
                     * 获取总脏数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalErrorRecords 总脏数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalErrorRecords() const;

                    /**
                     * 判断参数 TotalErrorRecords 是否已赋值
                     * @return TotalErrorRecords 是否已赋值
                     * 
                     */
                    bool TotalErrorRecordsHasBeenSet() const;

                    /**
                     * 获取总告警事件数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalAlarmEvent 总告警事件数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalAlarmEvent() const;

                    /**
                     * 判断参数 TotalAlarmEvent 是否已赋值
                     * @return TotalAlarmEvent 是否已赋值
                     * 
                     */
                    bool TotalAlarmEventHasBeenSet() const;

                    /**
                     * 获取当天读取增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncreaseReadRecords 当天读取增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIncreaseReadRecords() const;

                    /**
                     * 判断参数 IncreaseReadRecords 是否已赋值
                     * @return IncreaseReadRecords 是否已赋值
                     * 
                     */
                    bool IncreaseReadRecordsHasBeenSet() const;

                    /**
                     * 获取当天写入增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncreaseWriteRecords 当天写入增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIncreaseWriteRecords() const;

                    /**
                     * 判断参数 IncreaseWriteRecords 是否已赋值
                     * @return IncreaseWriteRecords 是否已赋值
                     * 
                     */
                    bool IncreaseWriteRecordsHasBeenSet() const;

                    /**
                     * 获取当天脏数据增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncreaseErrorRecords 当天脏数据增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIncreaseErrorRecords() const;

                    /**
                     * 判断参数 IncreaseErrorRecords 是否已赋值
                     * @return IncreaseErrorRecords 是否已赋值
                     * 
                     */
                    bool IncreaseErrorRecordsHasBeenSet() const;

                    /**
                     * 获取当天告警事件增长数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncreaseAlarmEvent 当天告警事件增长数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIncreaseAlarmEvent() const;

                    /**
                     * 判断参数 IncreaseAlarmEvent 是否已赋值
                     * @return IncreaseAlarmEvent 是否已赋值
                     * 
                     */
                    bool IncreaseAlarmEventHasBeenSet() const;

                    /**
                     * 获取告警事件统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmEvent 告警事件统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmEvent() const;

                    /**
                     * 判断参数 AlarmEvent 是否已赋值
                     * @return AlarmEvent 是否已赋值
                     * 
                     */
                    bool AlarmEventHasBeenSet() const;

                private:

                    /**
                     * 总任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalTask;
                    bool m_totalTaskHasBeenSet;

                    /**
                     * 生产态任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_prodTask;
                    bool m_prodTaskHasBeenSet;

                    /**
                     * 开发态任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_devTask;
                    bool m_devTaskHasBeenSet;

                    /**
                     * 总读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalReadRecords;
                    bool m_totalReadRecordsHasBeenSet;

                    /**
                     * 总写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalWriteRecords;
                    bool m_totalWriteRecordsHasBeenSet;

                    /**
                     * 总脏数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalErrorRecords;
                    bool m_totalErrorRecordsHasBeenSet;

                    /**
                     * 总告警事件数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalAlarmEvent;
                    bool m_totalAlarmEventHasBeenSet;

                    /**
                     * 当天读取增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_increaseReadRecords;
                    bool m_increaseReadRecordsHasBeenSet;

                    /**
                     * 当天写入增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_increaseWriteRecords;
                    bool m_increaseWriteRecordsHasBeenSet;

                    /**
                     * 当天脏数据增长条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_increaseErrorRecords;
                    bool m_increaseErrorRecordsHasBeenSet;

                    /**
                     * 当天告警事件增长数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_increaseAlarmEvent;
                    bool m_increaseAlarmEventHasBeenSet;

                    /**
                     * 告警事件统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmEvent;
                    bool m_alarmEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRESPONSE_H_
