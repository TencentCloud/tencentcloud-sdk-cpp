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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_REVIEWDATATASKINFO_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_REVIEWDATATASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 人工复核数据的子任务信息
                */
                class ReviewDataTaskInfo : public AbstractModel
                {
                public:
                    ReviewDataTaskInfo();
                    ~ReviewDataTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主任务号
                     * @return MainTaskId 主任务号
                     * 
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 设置主任务号
                     * @param _mainTaskId 主任务号
                     * 
                     */
                    void SetMainTaskId(const std::string& _mainTaskId);

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     * 
                     */
                    bool MainTaskIdHasBeenSet() const;

                    /**
                     * 获取子任务号
                     * @return SubTaskId 子任务号
                     * 
                     */
                    std::string GetSubTaskId() const;

                    /**
                     * 设置子任务号
                     * @param _subTaskId 子任务号
                     * 
                     */
                    void SetSubTaskId(const std::string& _subTaskId);

                    /**
                     * 判断参数 SubTaskId 是否已赋值
                     * @return SubTaskId 是否已赋值
                     * 
                     */
                    bool SubTaskIdHasBeenSet() const;

                    /**
                     * 获取任务名
                     * @return TaskName 任务名
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
                     * @param _taskName 任务名
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * @return TaskType 任务类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * @param _taskType 任务类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 主任务号
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                    /**
                     * 子任务号
                     */
                    std::string m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_REVIEWDATATASKINFO_H_
