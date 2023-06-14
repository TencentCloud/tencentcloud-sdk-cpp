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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_PERSTRUCTDIFFERENCE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_PERSTRUCTDIFFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/StructureModifyItem.h>
#include <tencentcloud/cii/v20210408/model/StructureOneItem.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 复核差异接口的每一份报告的差异结果
                */
                class PerStructDifference : public AbstractModel
                {
                public:
                    PerStructDifference();
                    ~PerStructDifference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取修改的项
                     * @return ModifyItems 修改的项
                     * 
                     */
                    std::vector<StructureModifyItem> GetModifyItems() const;

                    /**
                     * 设置修改的项
                     * @param _modifyItems 修改的项
                     * 
                     */
                    void SetModifyItems(const std::vector<StructureModifyItem>& _modifyItems);

                    /**
                     * 判断参数 ModifyItems 是否已赋值
                     * @return ModifyItems 是否已赋值
                     * 
                     */
                    bool ModifyItemsHasBeenSet() const;

                    /**
                     * 获取新增的项
                     * @return NewItems 新增的项
                     * 
                     */
                    std::vector<StructureOneItem> GetNewItems() const;

                    /**
                     * 设置新增的项
                     * @param _newItems 新增的项
                     * 
                     */
                    void SetNewItems(const std::vector<StructureOneItem>& _newItems);

                    /**
                     * 判断参数 NewItems 是否已赋值
                     * @return NewItems 是否已赋值
                     * 
                     */
                    bool NewItemsHasBeenSet() const;

                    /**
                     * 获取删除的项
                     * @return RemoveItems 删除的项
                     * 
                     */
                    std::vector<StructureOneItem> GetRemoveItems() const;

                    /**
                     * 设置删除的项
                     * @param _removeItems 删除的项
                     * 
                     */
                    void SetRemoveItems(const std::vector<StructureOneItem>& _removeItems);

                    /**
                     * 判断参数 RemoveItems 是否已赋值
                     * @return RemoveItems 是否已赋值
                     * 
                     */
                    bool RemoveItemsHasBeenSet() const;

                private:

                    /**
                     * 子任务ID
                     */
                    std::string m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * 任务类型:HealthReport(体检报告); BUltraReport(B超报告);MedCheckReport(检查报告);LaboratoryReport(检验报告); PathologyReport(病理报告);AdmissionReport(入院记录);DischargeReport(出院记录); DischargeSummary(出院小结);DiagnosisReport(诊断证明); MedicalRecordFront(病案首页);OperationReport(手术记录);OutpatientMedicalRecord(门诊病历)
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 修改的项
                     */
                    std::vector<StructureModifyItem> m_modifyItems;
                    bool m_modifyItemsHasBeenSet;

                    /**
                     * 新增的项
                     */
                    std::vector<StructureOneItem> m_newItems;
                    bool m_newItemsHasBeenSet;

                    /**
                     * 删除的项
                     */
                    std::vector<StructureOneItem> m_removeItems;
                    bool m_removeItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_PERSTRUCTDIFFERENCE_H_
