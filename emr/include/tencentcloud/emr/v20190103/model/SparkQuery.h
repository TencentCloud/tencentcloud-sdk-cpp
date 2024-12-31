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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SPARKQUERY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SPARKQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * spark查询详情
                */
                class SparkQuery : public AbstractModel
                {
                public:
                    SparkQuery();
                    ~SparkQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行语句
                     * @return Statement 执行语句
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置执行语句
                     * @param _statement 执行语句
                     * 
                     */
                    void SetStatement(const std::string& _statement);

                    /**
                     * 判断参数 Statement 是否已赋值
                     * @return Statement 是否已赋值
                     * 
                     */
                    bool StatementHasBeenSet() const;

                    /**
                     * 获取执行时长（单位毫秒）
                     * @return Duration 执行时长（单位毫秒）
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置执行时长（单位毫秒）
                     * @param _duration 执行时长（单位毫秒）
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取执行状态
                     * @return Status 执行状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置执行状态
                     * @param _status 执行状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取查询ID
                     * @return Id 查询ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置查询ID
                     * @param _id 查询ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取扫描分区数
                     * @return ScanPartitionNum 扫描分区数
                     * 
                     */
                    int64_t GetScanPartitionNum() const;

                    /**
                     * 设置扫描分区数
                     * @param _scanPartitionNum 扫描分区数
                     * 
                     */
                    void SetScanPartitionNum(const int64_t& _scanPartitionNum);

                    /**
                     * 判断参数 ScanPartitionNum 是否已赋值
                     * @return ScanPartitionNum 是否已赋值
                     * 
                     */
                    bool ScanPartitionNumHasBeenSet() const;

                    /**
                     * 获取扫描总行数
                     * @return ScanRowNum 扫描总行数
                     * 
                     */
                    int64_t GetScanRowNum() const;

                    /**
                     * 设置扫描总行数
                     * @param _scanRowNum 扫描总行数
                     * 
                     */
                    void SetScanRowNum(const int64_t& _scanRowNum);

                    /**
                     * 判断参数 ScanRowNum 是否已赋值
                     * @return ScanRowNum 是否已赋值
                     * 
                     */
                    bool ScanRowNumHasBeenSet() const;

                    /**
                     * 获取扫描总文件数
                     * @return ScanFileNum 扫描总文件数
                     * 
                     */
                    int64_t GetScanFileNum() const;

                    /**
                     * 设置扫描总文件数
                     * @param _scanFileNum 扫描总文件数
                     * 
                     */
                    void SetScanFileNum(const int64_t& _scanFileNum);

                    /**
                     * 判断参数 ScanFileNum 是否已赋值
                     * @return ScanFileNum 是否已赋值
                     * 
                     */
                    bool ScanFileNumHasBeenSet() const;

                    /**
                     * 获取查询扫描总数据量(单位B)
                     * @return ScanTotalData 查询扫描总数据量(单位B)
                     * 
                     */
                    int64_t GetScanTotalData() const;

                    /**
                     * 设置查询扫描总数据量(单位B)
                     * @param _scanTotalData 查询扫描总数据量(单位B)
                     * 
                     */
                    void SetScanTotalData(const int64_t& _scanTotalData);

                    /**
                     * 判断参数 ScanTotalData 是否已赋值
                     * @return ScanTotalData 是否已赋值
                     * 
                     */
                    bool ScanTotalDataHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::vector<std::string>& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取输出总行数
                     * @return OutputRowNum 输出总行数
                     * 
                     */
                    int64_t GetOutputRowNum() const;

                    /**
                     * 设置输出总行数
                     * @param _outputRowNum 输出总行数
                     * 
                     */
                    void SetOutputRowNum(const int64_t& _outputRowNum);

                    /**
                     * 判断参数 OutputRowNum 是否已赋值
                     * @return OutputRowNum 是否已赋值
                     * 
                     */
                    bool OutputRowNumHasBeenSet() const;

                    /**
                     * 获取输出总文件数
                     * @return OutputFileNum 输出总文件数
                     * 
                     */
                    int64_t GetOutputFileNum() const;

                    /**
                     * 设置输出总文件数
                     * @param _outputFileNum 输出总文件数
                     * 
                     */
                    void SetOutputFileNum(const int64_t& _outputFileNum);

                    /**
                     * 判断参数 OutputFileNum 是否已赋值
                     * @return OutputFileNum 是否已赋值
                     * 
                     */
                    bool OutputFileNumHasBeenSet() const;

                    /**
                     * 获取输出分区数
                     * @return OutputPartitionNum 输出分区数
                     * 
                     */
                    int64_t GetOutputPartitionNum() const;

                    /**
                     * 设置输出分区数
                     * @param _outputPartitionNum 输出分区数
                     * 
                     */
                    void SetOutputPartitionNum(const int64_t& _outputPartitionNum);

                    /**
                     * 判断参数 OutputPartitionNum 是否已赋值
                     * @return OutputPartitionNum 是否已赋值
                     * 
                     */
                    bool OutputPartitionNumHasBeenSet() const;

                    /**
                     * 获取输出总数据量（单位B）
                     * @return OutputTotalData 输出总数据量（单位B）
                     * 
                     */
                    int64_t GetOutputTotalData() const;

                    /**
                     * 设置输出总数据量（单位B）
                     * @param _outputTotalData 输出总数据量（单位B）
                     * 
                     */
                    void SetOutputTotalData(const int64_t& _outputTotalData);

                    /**
                     * 判断参数 OutputTotalData 是否已赋值
                     * @return OutputTotalData 是否已赋值
                     * 
                     */
                    bool OutputTotalDataHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param _beginTime 开始时间
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 执行语句
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * 执行时长（单位毫秒）
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 执行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 查询ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 扫描分区数
                     */
                    int64_t m_scanPartitionNum;
                    bool m_scanPartitionNumHasBeenSet;

                    /**
                     * 扫描总行数
                     */
                    int64_t m_scanRowNum;
                    bool m_scanRowNumHasBeenSet;

                    /**
                     * 扫描总文件数
                     */
                    int64_t m_scanFileNum;
                    bool m_scanFileNumHasBeenSet;

                    /**
                     * 查询扫描总数据量(单位B)
                     */
                    int64_t m_scanTotalData;
                    bool m_scanTotalDataHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 输出总行数
                     */
                    int64_t m_outputRowNum;
                    bool m_outputRowNumHasBeenSet;

                    /**
                     * 输出总文件数
                     */
                    int64_t m_outputFileNum;
                    bool m_outputFileNumHasBeenSet;

                    /**
                     * 输出分区数
                     */
                    int64_t m_outputPartitionNum;
                    bool m_outputPartitionNumHasBeenSet;

                    /**
                     * 输出总数据量（单位B）
                     */
                    int64_t m_outputTotalData;
                    bool m_outputTotalDataHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SPARKQUERY_H_
