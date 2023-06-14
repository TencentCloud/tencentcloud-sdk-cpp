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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_STRUCTURERESULTOBJECT_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_STRUCTURERESULTOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/OcrRecognise.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 结构化结果
                */
                class StructureResultObject : public AbstractModel
                {
                public:
                    StructureResultObject();
                    ~StructureResultObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0表示正常返回；1代表结果未生成；2代表任务执行失败
                     * @return Code 0表示正常返回；1代表结果未生成；2代表任务执行失败
                     * 
                     */
                    uint64_t GetCode() const;

                    /**
                     * 设置0表示正常返回；1代表结果未生成；2代表任务执行失败
                     * @param _code 0表示正常返回；1代表结果未生成；2代表任务执行失败
                     * 
                     */
                    void SetCode(const uint64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取报告类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * @return TaskType 报告类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置报告类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * @param _taskType 报告类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取结构化结果
                     * @return StructureResult 结构化结果
                     * 
                     */
                    std::string GetStructureResult() const;

                    /**
                     * 设置结构化结果
                     * @param _structureResult 结构化结果
                     * 
                     */
                    void SetStructureResult(const std::string& _structureResult);

                    /**
                     * 判断参数 StructureResult 是否已赋值
                     * @return StructureResult 是否已赋值
                     * 
                     */
                    bool StructureResultHasBeenSet() const;

                    /**
                     * 获取子任务ID
                     * @return SubTaskId 子任务ID
                     * 
                     */
                    std::string GetSubTaskId() const;

                    /**
                     * 设置子任务ID
                     * @param _subTaskId 子任务ID
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
                     * 获取任务文件列表
                     * @return TaskFiles 任务文件列表
                     * 
                     */
                    std::vector<std::string> GetTaskFiles() const;

                    /**
                     * 设置任务文件列表
                     * @param _taskFiles 任务文件列表
                     * 
                     */
                    void SetTaskFiles(const std::vector<std::string>& _taskFiles);

                    /**
                     * 判断参数 TaskFiles 是否已赋值
                     * @return TaskFiles 是否已赋值
                     * 
                     */
                    bool TaskFilesHasBeenSet() const;

                    /**
                     * 获取结构化字段结果数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultFields 结构化字段结果数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OcrRecognise> GetResultFields() const;

                    /**
                     * 设置结构化字段结果数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultFields 结构化字段结果数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultFields(const std::vector<OcrRecognise>& _resultFields);

                    /**
                     * 判断参数 ResultFields 是否已赋值
                     * @return ResultFields 是否已赋值
                     * 
                     */
                    bool ResultFieldsHasBeenSet() const;

                private:

                    /**
                     * 0表示正常返回；1代表结果未生成；2代表任务执行失败
                     */
                    uint64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 报告类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 结构化结果
                     */
                    std::string m_structureResult;
                    bool m_structureResultHasBeenSet;

                    /**
                     * 子任务ID
                     */
                    std::string m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * 任务文件列表
                     */
                    std::vector<std::string> m_taskFiles;
                    bool m_taskFilesHasBeenSet;

                    /**
                     * 结构化字段结果数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OcrRecognise> m_resultFields;
                    bool m_resultFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_STRUCTURERESULTOBJECT_H_
