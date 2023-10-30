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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEJOBRESULT_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEJOBRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/MetricDetail.h>
#include <tencentcloud/es/v20180416/model/LogDetail.h>
#include <tencentcloud/es/v20180416/model/SettingDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 智能运维诊断项结果
                */
                class DiagnoseJobResult : public AbstractModel
                {
                public:
                    DiagnoseJobResult();
                    ~DiagnoseJobResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断项名
                     * @return JobName 诊断项名
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置诊断项名
                     * @param _jobName 诊断项名
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取诊断项状态：-2失败，-1待重试，0运行中，1成功
                     * @return Status 诊断项状态：-2失败，-1待重试，0运行中，1成功
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置诊断项状态：-2失败，-1待重试，0运行中，1成功
                     * @param _status 诊断项状态：-2失败，-1待重试，0运行中，1成功
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取诊断项得分
                     * @return Score 诊断项得分
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置诊断项得分
                     * @param _score 诊断项得分
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取诊断摘要
                     * @return Summary 诊断摘要
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置诊断摘要
                     * @param _summary 诊断摘要
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取诊断建议
                     * @return Advise 诊断建议
                     * 
                     */
                    std::string GetAdvise() const;

                    /**
                     * 设置诊断建议
                     * @param _advise 诊断建议
                     * 
                     */
                    void SetAdvise(const std::string& _advise);

                    /**
                     * 判断参数 Advise 是否已赋值
                     * @return Advise 是否已赋值
                     * 
                     */
                    bool AdviseHasBeenSet() const;

                    /**
                     * 获取诊断详情
                     * @return Detail 诊断详情
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置诊断详情
                     * @param _detail 诊断详情
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取诊断指标详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricDetails 诊断指标详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricDetail> GetMetricDetails() const;

                    /**
                     * 设置诊断指标详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricDetails 诊断指标详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricDetails(const std::vector<MetricDetail>& _metricDetails);

                    /**
                     * 判断参数 MetricDetails 是否已赋值
                     * @return MetricDetails 是否已赋值
                     * 
                     */
                    bool MetricDetailsHasBeenSet() const;

                    /**
                     * 获取诊断日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogDetails 诊断日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LogDetail> GetLogDetails() const;

                    /**
                     * 设置诊断日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logDetails 诊断日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogDetails(const std::vector<LogDetail>& _logDetails);

                    /**
                     * 判断参数 LogDetails 是否已赋值
                     * @return LogDetails 是否已赋值
                     * 
                     */
                    bool LogDetailsHasBeenSet() const;

                    /**
                     * 获取诊断配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettingDetails 诊断配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SettingDetail> GetSettingDetails() const;

                    /**
                     * 设置诊断配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settingDetails 诊断配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettingDetails(const std::vector<SettingDetail>& _settingDetails);

                    /**
                     * 判断参数 SettingDetails 是否已赋值
                     * @return SettingDetails 是否已赋值
                     * 
                     */
                    bool SettingDetailsHasBeenSet() const;

                private:

                    /**
                     * 诊断项名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 诊断项状态：-2失败，-1待重试，0运行中，1成功
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 诊断项得分
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 诊断摘要
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 诊断建议
                     */
                    std::string m_advise;
                    bool m_adviseHasBeenSet;

                    /**
                     * 诊断详情
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 诊断指标详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricDetail> m_metricDetails;
                    bool m_metricDetailsHasBeenSet;

                    /**
                     * 诊断日志详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogDetail> m_logDetails;
                    bool m_logDetailsHasBeenSet;

                    /**
                     * 诊断配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SettingDetail> m_settingDetails;
                    bool m_settingDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSEJOBRESULT_H_
