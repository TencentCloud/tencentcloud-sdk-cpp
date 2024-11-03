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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 任务报告信息
                */
                class TaskLogInfo : public AbstractModel
                {
                public:
                    TaskLogInfo();
                    ~TaskLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取报告名称
                     * @return TaskLogName 报告名称
                     * 
                     */
                    std::string GetTaskLogName() const;

                    /**
                     * 设置报告名称
                     * @param _taskLogName 报告名称
                     * 
                     */
                    void SetTaskLogName(const std::string& _taskLogName);

                    /**
                     * 判断参数 TaskLogName 是否已赋值
                     * @return TaskLogName 是否已赋值
                     * 
                     */
                    bool TaskLogNameHasBeenSet() const;

                    /**
                     * 获取报告ID
                     * @return TaskLogId 报告ID
                     * 
                     */
                    std::string GetTaskLogId() const;

                    /**
                     * 设置报告ID
                     * @param _taskLogId 报告ID
                     * 
                     */
                    void SetTaskLogId(const std::string& _taskLogId);

                    /**
                     * 判断参数 TaskLogId 是否已赋值
                     * @return TaskLogId 是否已赋值
                     * 
                     */
                    bool TaskLogIdHasBeenSet() const;

                    /**
                     * 获取关联资产个数
                     * @return AssetsNumber 关联资产个数
                     * 
                     */
                    int64_t GetAssetsNumber() const;

                    /**
                     * 设置关联资产个数
                     * @param _assetsNumber 关联资产个数
                     * 
                     */
                    void SetAssetsNumber(const int64_t& _assetsNumber);

                    /**
                     * 判断参数 AssetsNumber 是否已赋值
                     * @return AssetsNumber 是否已赋值
                     * 
                     */
                    bool AssetsNumberHasBeenSet() const;

                    /**
                     * 获取安全风险数量
                     * @return RiskNumber 安全风险数量
                     * 
                     */
                    int64_t GetRiskNumber() const;

                    /**
                     * 设置安全风险数量
                     * @param _riskNumber 安全风险数量
                     * 
                     */
                    void SetRiskNumber(const int64_t& _riskNumber);

                    /**
                     * 判断参数 RiskNumber 是否已赋值
                     * @return RiskNumber 是否已赋值
                     * 
                     */
                    bool RiskNumberHasBeenSet() const;

                    /**
                     * 获取报告生成时间
                     * @return Time 报告生成时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置报告生成时间
                     * @param _time 报告生成时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取任务状态码：0 初始值  1正在扫描  2扫描完成  3扫描出错，4停止，5暂停，6该任务已被重启过
                     * @return Status 任务状态码：0 初始值  1正在扫描  2扫描完成  3扫描出错，4停止，5暂停，6该任务已被重启过
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态码：0 初始值  1正在扫描  2扫描完成  3扫描出错，4停止，5暂停，6该任务已被重启过
                     * @param _status 任务状态码：0 初始值  1正在扫描  2扫描完成  3扫描出错，4停止，5暂停，6该任务已被重启过
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
                     * 获取关联任务名称
                     * @return TaskName 关联任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置关联任务名称
                     * @param _taskName 关联任务名称
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
                     * 获取扫描开始时间
                     * @return StartTime 扫描开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置扫描开始时间
                     * @param _startTime 扫描开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务中心扫描任务ID
                     * @return TaskCenterTaskId 任务中心扫描任务ID
                     * 
                     */
                    std::string GetTaskCenterTaskId() const;

                    /**
                     * 设置任务中心扫描任务ID
                     * @param _taskCenterTaskId 任务中心扫描任务ID
                     * 
                     */
                    void SetTaskCenterTaskId(const std::string& _taskCenterTaskId);

                    /**
                     * 判断参数 TaskCenterTaskId 是否已赋值
                     * @return TaskCenterTaskId 是否已赋值
                     * 
                     */
                    bool TaskCenterTaskIdHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return AppId 租户ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户ID
                     * @param _appId 租户ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账户ID
                     * @return UIN 主账户ID
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置主账户ID
                     * @param _uIN 主账户ID
                     * 
                     */
                    void SetUIN(const std::string& _uIN);

                    /**
                     * 判断参数 UIN 是否已赋值
                     * @return UIN 是否已赋值
                     * 
                     */
                    bool UINHasBeenSet() const;

                    /**
                     * 获取用户名称
                     * @return UserName 用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称
                     * @param _userName 用户名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取报告类型： 1安全体检 2日报 3周报 4月报
                     * @return ReportType 报告类型： 1安全体检 2日报 3周报 4月报
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置报告类型： 1安全体检 2日报 3周报 4月报
                     * @param _reportType 报告类型： 1安全体检 2日报 3周报 4月报
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取报告模板id
                     * @return TemplateId 报告模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置报告模板id
                     * @param _templateId 报告模板id
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 报告名称
                     */
                    std::string m_taskLogName;
                    bool m_taskLogNameHasBeenSet;

                    /**
                     * 报告ID
                     */
                    std::string m_taskLogId;
                    bool m_taskLogIdHasBeenSet;

                    /**
                     * 关联资产个数
                     */
                    int64_t m_assetsNumber;
                    bool m_assetsNumberHasBeenSet;

                    /**
                     * 安全风险数量
                     */
                    int64_t m_riskNumber;
                    bool m_riskNumberHasBeenSet;

                    /**
                     * 报告生成时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 任务状态码：0 初始值  1正在扫描  2扫描完成  3扫描出错，4停止，5暂停，6该任务已被重启过
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关联任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务中心扫描任务ID
                     */
                    std::string m_taskCenterTaskId;
                    bool m_taskCenterTaskIdHasBeenSet;

                    /**
                     * 租户ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账户ID
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 报告类型： 1安全体检 2日报 3周报 4月报
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 报告模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGINFO_H_
