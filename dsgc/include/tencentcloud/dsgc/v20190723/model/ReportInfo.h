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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_REPORTINFO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_REPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 报表信息
                */
                class ReportInfo : public AbstractModel
                {
                public:
                    ReportInfo();
                    ~ReportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return Id 任务id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置任务id
                     * @param _id 任务id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取报告名称
                     * @return ReportName 报告名称
                     * 
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置报告名称
                     * @param _reportName 报告名称
                     * 
                     */
                    void SetReportName(const std::string& _reportName);

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     * 
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取报告类型（AssetSorting:资产梳理）
                     * @return ReportType 报告类型（AssetSorting:资产梳理）
                     * 
                     */
                    std::string GetReportType() const;

                    /**
                     * 设置报告类型（AssetSorting:资产梳理）
                     * @param _reportType 报告类型（AssetSorting:资产梳理）
                     * 
                     */
                    void SetReportType(const std::string& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取报告周期（0单次 1每天 2每周 3每月）
                     * @return ReportPeriod 报告周期（0单次 1每天 2每周 3每月）
                     * 
                     */
                    uint64_t GetReportPeriod() const;

                    /**
                     * 设置报告周期（0单次 1每天 2每周 3每月）
                     * @param _reportPeriod 报告周期（0单次 1每天 2每周 3每月）
                     * 
                     */
                    void SetReportPeriod(const uint64_t& _reportPeriod);

                    /**
                     * 判断参数 ReportPeriod 是否已赋值
                     * @return ReportPeriod 是否已赋值
                     * 
                     */
                    bool ReportPeriodHasBeenSet() const;

                    /**
                     * 获取执行计划 （0:单次报告 1:定时报告）
                     * @return ReportPlan 执行计划 （0:单次报告 1:定时报告）
                     * 
                     */
                    uint64_t GetReportPlan() const;

                    /**
                     * 设置执行计划 （0:单次报告 1:定时报告）
                     * @param _reportPlan 执行计划 （0:单次报告 1:定时报告）
                     * 
                     */
                    void SetReportPlan(const uint64_t& _reportPlan);

                    /**
                     * 判断参数 ReportPlan 是否已赋值
                     * @return ReportPlan 是否已赋值
                     * 
                     */
                    bool ReportPlanHasBeenSet() const;

                    /**
                     * 获取报告导出状态（Success 成功, Failed 失败, InProgress 进行中）
                     * @return ReportStatus 报告导出状态（Success 成功, Failed 失败, InProgress 进行中）
                     * 
                     */
                    std::string GetReportStatus() const;

                    /**
                     * 设置报告导出状态（Success 成功, Failed 失败, InProgress 进行中）
                     * @param _reportStatus 报告导出状态（Success 成功, Failed 失败, InProgress 进行中）
                     * 
                     */
                    void SetReportStatus(const std::string& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     * 
                     */
                    bool ReportStatusHasBeenSet() const;

                    /**
                     * 获取任务下次启动时间
                     * @return TimingStartTime 任务下次启动时间
                     * 
                     */
                    std::string GetTimingStartTime() const;

                    /**
                     * 设置任务下次启动时间
                     * @param _timingStartTime 任务下次启动时间
                     * 
                     */
                    void SetTimingStartTime(const std::string& _timingStartTime);

                    /**
                     * 判断参数 TimingStartTime 是否已赋值
                     * @return TimingStartTime 是否已赋值
                     * 
                     */
                    bool TimingStartTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取完成时间
                     * @return FinishedTime 完成时间
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置完成时间
                     * @param _finishedTime 完成时间
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
                     * 获取子账号uin
                     * @return SubUin 子账号uin
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置子账号uin
                     * @param _subUin 子账号uin
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取失败信息
                     * @return FailedMessage 失败信息
                     * 
                     */
                    std::string GetFailedMessage() const;

                    /**
                     * 设置失败信息
                     * @param _failedMessage 失败信息
                     * 
                     */
                    void SetFailedMessage(const std::string& _failedMessage);

                    /**
                     * 判断参数 FailedMessage 是否已赋值
                     * @return FailedMessage 是否已赋值
                     * 
                     */
                    bool FailedMessageHasBeenSet() const;

                    /**
                     * 获取是否启用（0：否 1：是）
                     * @return Enable 是否启用（0：否 1：是）
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置是否启用（0：否 1：是）
                     * @param _enable 是否启用（0：否 1：是）
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取识别模板名称
                     * @return ComplianceName 识别模板名称
                     * 
                     */
                    std::string GetComplianceName() const;

                    /**
                     * 设置识别模板名称
                     * @param _complianceName 识别模板名称
                     * 
                     */
                    void SetComplianceName(const std::string& _complianceName);

                    /**
                     * 判断参数 ComplianceName 是否已赋值
                     * @return ComplianceName 是否已赋值
                     * 
                     */
                    bool ComplianceNameHasBeenSet() const;

                    /**
                     * 获取进度百分比
                     * @return ProgressPercent 进度百分比
                     * 
                     */
                    uint64_t GetProgressPercent() const;

                    /**
                     * 设置进度百分比
                     * @param _progressPercent 进度百分比
                     * 
                     */
                    void SetProgressPercent(const uint64_t& _progressPercent);

                    /**
                     * 判断参数 ProgressPercent 是否已赋值
                     * @return ProgressPercent 是否已赋值
                     * 
                     */
                    bool ProgressPercentHasBeenSet() const;

                    /**
                     * 获取报告模版名称
                     * @return ReportTemplateName 报告模版名称
                     * 
                     */
                    std::string GetReportTemplateName() const;

                    /**
                     * 设置报告模版名称
                     * @param _reportTemplateName 报告模版名称
                     * 
                     */
                    void SetReportTemplateName(const std::string& _reportTemplateName);

                    /**
                     * 判断参数 ReportTemplateName 是否已赋值
                     * @return ReportTemplateName 是否已赋值
                     * 
                     */
                    bool ReportTemplateNameHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 报告名称
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * 报告类型（AssetSorting:资产梳理）
                     */
                    std::string m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 报告周期（0单次 1每天 2每周 3每月）
                     */
                    uint64_t m_reportPeriod;
                    bool m_reportPeriodHasBeenSet;

                    /**
                     * 执行计划 （0:单次报告 1:定时报告）
                     */
                    uint64_t m_reportPlan;
                    bool m_reportPlanHasBeenSet;

                    /**
                     * 报告导出状态（Success 成功, Failed 失败, InProgress 进行中）
                     */
                    std::string m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                    /**
                     * 任务下次启动时间
                     */
                    std::string m_timingStartTime;
                    bool m_timingStartTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 完成时间
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * 子账号uin
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 失败信息
                     */
                    std::string m_failedMessage;
                    bool m_failedMessageHasBeenSet;

                    /**
                     * 是否启用（0：否 1：是）
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 识别模板名称
                     */
                    std::string m_complianceName;
                    bool m_complianceNameHasBeenSet;

                    /**
                     * 进度百分比
                     */
                    uint64_t m_progressPercent;
                    bool m_progressPercentHasBeenSet;

                    /**
                     * 报告模版名称
                     */
                    std::string m_reportTemplateName;
                    bool m_reportTemplateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_REPORTINFO_H_
