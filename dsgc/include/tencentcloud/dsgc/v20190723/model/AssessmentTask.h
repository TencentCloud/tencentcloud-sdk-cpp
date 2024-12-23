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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTTASK_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RiskCountInfo.h>
#include <tencentcloud/dsgc/v20190723/model/DiscoveryCondition.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DSPA评估任务
                */
                class AssessmentTask : public AbstractModel
                {
                public:
                    AssessmentTask();
                    ~AssessmentTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取评估任务Id
                     * @return TaskId 评估任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置评估任务Id
                     * @param _taskId 评估任务Id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取评估任务的自增ID

                     * @return TaskUid 评估任务的自增ID

                     * 
                     */
                    int64_t GetTaskUid() const;

                    /**
                     * 设置评估任务的自增ID

                     * @param _taskUid 评估任务的自增ID

                     * 
                     */
                    void SetTaskUid(const int64_t& _taskUid);

                    /**
                     * 判断参数 TaskUid 是否已赋值
                     * @return TaskUid 是否已赋值
                     * 
                     */
                    bool TaskUidHasBeenSet() const;

                    /**
                     * 获取评估任务名称
                     * @return TaskName 评估任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置评估任务名称
                     * @param _taskName 评估任务名称
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
                     * 获取业务名称
                     * @return BusinessName 业务名称
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置业务名称
                     * @param _businessName 业务名称
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取业务所属部门
                     * @return BusinessDept 业务所属部门
                     * 
                     */
                    std::string GetBusinessDept() const;

                    /**
                     * 设置业务所属部门
                     * @param _businessDept 业务所属部门
                     * 
                     */
                    void SetBusinessDept(const std::string& _businessDept);

                    /**
                     * 判断参数 BusinessDept 是否已赋值
                     * @return BusinessDept 是否已赋值
                     * 
                     */
                    bool BusinessDeptHasBeenSet() const;

                    /**
                     * 获取业务负责人
                     * @return BusinessOwner 业务负责人
                     * 
                     */
                    std::string GetBusinessOwner() const;

                    /**
                     * 设置业务负责人
                     * @param _businessOwner 业务负责人
                     * 
                     */
                    void SetBusinessOwner(const std::string& _businessOwner);

                    /**
                     * 判断参数 BusinessOwner 是否已赋值
                     * @return BusinessOwner 是否已赋值
                     * 
                     */
                    bool BusinessOwnerHasBeenSet() const;

                    /**
                     * 获取评估模板Id
                     * @return TemplateId 评估模板Id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置评估模板Id
                     * @param _templateId 评估模板Id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取评估模板名称
                     * @return TemplateName 评估模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置评估模板名称
                     * @param _templateName 评估模板名称
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取分类分级模板Id
                     * @return ComplianceGroupId 分类分级模板Id
                     * 
                     */
                    int64_t GetComplianceGroupId() const;

                    /**
                     * 设置分类分级模板Id
                     * @param _complianceGroupId 分类分级模板Id
                     * 
                     */
                    void SetComplianceGroupId(const int64_t& _complianceGroupId);

                    /**
                     * 判断参数 ComplianceGroupId 是否已赋值
                     * @return ComplianceGroupId 是否已赋值
                     * 
                     */
                    bool ComplianceGroupIdHasBeenSet() const;

                    /**
                     * 获取分类分级模板名称
                     * @return ComplianceGroupName 分类分级模板名称
                     * 
                     */
                    std::string GetComplianceGroupName() const;

                    /**
                     * 设置分类分级模板名称
                     * @param _complianceGroupName 分类分级模板名称
                     * 
                     */
                    void SetComplianceGroupName(const std::string& _complianceGroupName);

                    /**
                     * 判断参数 ComplianceGroupName 是否已赋值
                     * @return ComplianceGroupName 是否已赋值
                     * 
                     */
                    bool ComplianceGroupNameHasBeenSet() const;

                    /**
                     * 获取评估项数量
                     * @return ControlItemCount 评估项数量
                     * 
                     */
                    int64_t GetControlItemCount() const;

                    /**
                     * 设置评估项数量
                     * @param _controlItemCount 评估项数量
                     * 
                     */
                    void SetControlItemCount(const int64_t& _controlItemCount);

                    /**
                     * 判断参数 ControlItemCount 是否已赋值
                     * @return ControlItemCount 是否已赋值
                     * 
                     */
                    bool ControlItemCountHasBeenSet() const;

                    /**
                     * 获取风险项数量（仅状态为finished的风险项不计入总数，其余状态均算入该数量）
                     * @return RiskCount 风险项数量（仅状态为finished的风险项不计入总数，其余状态均算入该数量）
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置风险项数量（仅状态为finished的风险项不计入总数，其余状态均算入该数量）
                     * @param _riskCount 风险项数量（仅状态为finished的风险项不计入总数，其余状态均算入该数量）
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取评估任务完成时间
                     * @return FinishedTime 评估任务完成时间
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置评估任务完成时间
                     * @param _finishedTime 评估任务完成时间
                     * 
                     */
                    void SetFinishedTime(const std::string& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取评估任务发起时间
                     * @return CreatedTime 评估任务发起时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置评估任务发起时间
                     * @param _createdTime 评估任务发起时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取评估状态。(waiting待评估，processing评估中, , finished已评估, failed评估失败)
                     * @return Status 评估状态。(waiting待评估，processing评估中, , finished已评估, failed评估失败)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置评估状态。(waiting待评估，processing评估中, , finished已评估, failed评估失败)
                     * @param _status 评估状态。(waiting待评估，processing评估中, , finished已评估, failed评估失败)
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
                     * 获取待处理各等级风险项信息
                     * @return RiskCountInfoList 待处理各等级风险项信息
                     * 
                     */
                    std::vector<RiskCountInfo> GetRiskCountInfoList() const;

                    /**
                     * 设置待处理各等级风险项信息
                     * @param _riskCountInfoList 待处理各等级风险项信息
                     * 
                     */
                    void SetRiskCountInfoList(const std::vector<RiskCountInfo>& _riskCountInfoList);

                    /**
                     * 判断参数 RiskCountInfoList 是否已赋值
                     * @return RiskCountInfoList 是否已赋值
                     * 
                     */
                    bool RiskCountInfoListHasBeenSet() const;

                    /**
                     * 获取数据源信息
                     * @return DiscoveryCondition 数据源信息
                     * 
                     */
                    DiscoveryCondition GetDiscoveryCondition() const;

                    /**
                     * 设置数据源信息
                     * @param _discoveryCondition 数据源信息
                     * 
                     */
                    void SetDiscoveryCondition(const DiscoveryCondition& _discoveryCondition);

                    /**
                     * 判断参数 DiscoveryCondition 是否已赋值
                     * @return DiscoveryCondition 是否已赋值
                     * 
                     */
                    bool DiscoveryConditionHasBeenSet() const;

                    /**
                     * 获取评估任务失败信息
                     * @return ErrorInfo 评估任务失败信息
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置评估任务失败信息
                     * @param _errorInfo 评估任务失败信息
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取模板主键id
                     * @return TemplateUid 模板主键id
                     * 
                     */
                    int64_t GetTemplateUid() const;

                    /**
                     * 设置模板主键id
                     * @param _templateUid 模板主键id
                     * 
                     */
                    void SetTemplateUid(const int64_t& _templateUid);

                    /**
                     * 判断参数 TemplateUid 是否已赋值
                     * @return TemplateUid 是否已赋值
                     * 
                     */
                    bool TemplateUidHasBeenSet() const;

                    /**
                     * 获取进度百分比
                     * @return ProgressPercent 进度百分比
                     * 
                     */
                    int64_t GetProgressPercent() const;

                    /**
                     * 设置进度百分比
                     * @param _progressPercent 进度百分比
                     * 
                     */
                    void SetProgressPercent(const int64_t& _progressPercent);

                    /**
                     * 判断参数 ProgressPercent 是否已赋值
                     * @return ProgressPercent 是否已赋值
                     * 
                     */
                    bool ProgressPercentHasBeenSet() const;

                private:

                    /**
                     * 评估任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 评估任务的自增ID

                     */
                    int64_t m_taskUid;
                    bool m_taskUidHasBeenSet;

                    /**
                     * 评估任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 业务名称
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * 业务所属部门
                     */
                    std::string m_businessDept;
                    bool m_businessDeptHasBeenSet;

                    /**
                     * 业务负责人
                     */
                    std::string m_businessOwner;
                    bool m_businessOwnerHasBeenSet;

                    /**
                     * 评估模板Id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 评估模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 分类分级模板Id
                     */
                    int64_t m_complianceGroupId;
                    bool m_complianceGroupIdHasBeenSet;

                    /**
                     * 分类分级模板名称
                     */
                    std::string m_complianceGroupName;
                    bool m_complianceGroupNameHasBeenSet;

                    /**
                     * 评估项数量
                     */
                    int64_t m_controlItemCount;
                    bool m_controlItemCountHasBeenSet;

                    /**
                     * 风险项数量（仅状态为finished的风险项不计入总数，其余状态均算入该数量）
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 评估任务完成时间
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * 评估任务发起时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 评估状态。(waiting待评估，processing评估中, , finished已评估, failed评估失败)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 待处理各等级风险项信息
                     */
                    std::vector<RiskCountInfo> m_riskCountInfoList;
                    bool m_riskCountInfoListHasBeenSet;

                    /**
                     * 数据源信息
                     */
                    DiscoveryCondition m_discoveryCondition;
                    bool m_discoveryConditionHasBeenSet;

                    /**
                     * 评估任务失败信息
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 模板主键id
                     */
                    int64_t m_templateUid;
                    bool m_templateUidHasBeenSet;

                    /**
                     * 进度百分比
                     */
                    int64_t m_progressPercent;
                    bool m_progressPercentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTTASK_H_
