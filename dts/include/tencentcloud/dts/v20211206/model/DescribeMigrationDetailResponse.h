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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MigrateAction.h>
#include <tencentcloud/dts/v20211206/model/MigrateDetailInfo.h>
#include <tencentcloud/dts/v20211206/model/DBEndpointInfo.h>
#include <tencentcloud/dts/v20211206/model/CompareTaskInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/MigrateOption.h>
#include <tencentcloud/dts/v20211206/model/CheckStepInfo.h>
#include <tencentcloud/dts/v20211206/model/TradeInfo.h>
#include <tencentcloud/dts/v20211206/model/ErrorInfoItem.h>
#include <tencentcloud/dts/v20211206/model/RateLimitOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrationDetail返回参数结构体
                */
                class DescribeMigrationDetailResponse : public AbstractModel
                {
                public:
                    DescribeMigrationDetailResponse();
                    ~DescribeMigrationDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据迁移任务ID
                     * @return JobId 数据迁移任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取数据迁移任务名称
                     * @return JobName 数据迁移任务名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return CreateTime 任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return UpdateTime 任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return StartTime 任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return EndTime 任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取迁移任务简要错误信息
                     * @return BriefMsg 迁移任务简要错误信息
                     * 
                     */
                    std::string GetBriefMsg() const;

                    /**
                     * 判断参数 BriefMsg 是否已赋值
                     * @return BriefMsg 是否已赋值
                     * 
                     */
                    bool BriefMsgHasBeenSet() const;

                    /**
                     * 获取任务状态，取值为：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
                     * @return Status 任务状态，取值为：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务操作信息
                     * @return Action 任务操作信息
                     * 
                     */
                    MigrateAction GetAction() const;

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取迁移执行过程信息，在校验阶段显示校验过程步骤信息，在迁移阶段会显示迁移步骤信息
                     * @return StepInfo 迁移执行过程信息，在校验阶段显示校验过程步骤信息，在迁移阶段会显示迁移步骤信息
                     * 
                     */
                    MigrateDetailInfo GetStepInfo() const;

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     * 
                     */
                    bool StepInfoHasBeenSet() const;

                    /**
                     * 获取源实例信息
                     * @return SrcInfo 源实例信息
                     * 
                     */
                    DBEndpointInfo GetSrcInfo() const;

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标端信息
                     * @return DstInfo 目标端信息
                     * 
                     */
                    DBEndpointInfo GetDstInfo() const;

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取数据一致性校验结果
                     * @return CompareTask 数据一致性校验结果
                     * 
                     */
                    CompareTaskInfo GetCompareTask() const;

                    /**
                     * 判断参数 CompareTask 是否已赋值
                     * @return CompareTask 是否已赋值
                     * 
                     */
                    bool CompareTaskHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     * @return RunMode 运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     * @return ExpectRunTime 期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取迁移选项，描述任务如何执行迁移等一系列配置信息
                     * @return MigrateOption 迁移选项，描述任务如何执行迁移等一系列配置信息
                     * 
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 判断参数 MigrateOption 是否已赋值
                     * @return MigrateOption 是否已赋值
                     * 
                     */
                    bool MigrateOptionHasBeenSet() const;

                    /**
                     * 获取校验任务运行详情
                     * @return CheckStepInfo 校验任务运行详情
                     * 
                     */
                    CheckStepInfo GetCheckStepInfo() const;

                    /**
                     * 判断参数 CheckStepInfo 是否已赋值
                     * @return CheckStepInfo 是否已赋值
                     * 
                     */
                    bool CheckStepInfoHasBeenSet() const;

                    /**
                     * 获取描述计费相关的信息
                     * @return TradeInfo 描述计费相关的信息
                     * 
                     */
                    TradeInfo GetTradeInfo() const;

                    /**
                     * 判断参数 TradeInfo 是否已赋值
                     * @return TradeInfo 是否已赋值
                     * 
                     */
                    bool TradeInfoHasBeenSet() const;

                    /**
                     * 获取任务错误信息
                     * @return ErrorInfo 任务错误信息
                     * 
                     */
                    std::vector<ErrorInfoItem> GetErrorInfo() const;

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     * @return DumperResumeCtrl 全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     * 
                     */
                    std::string GetDumperResumeCtrl() const;

                    /**
                     * 判断参数 DumperResumeCtrl 是否已赋值
                     * @return DumperResumeCtrl 是否已赋值
                     * 
                     */
                    bool DumperResumeCtrlHasBeenSet() const;

                    /**
                     * 获取任务的限速信息
                     * @return RateLimitOption 任务的限速信息
                     * 
                     */
                    RateLimitOption GetRateLimitOption() const;

                    /**
                     * 判断参数 RateLimitOption 是否已赋值
                     * @return RateLimitOption 是否已赋值
                     * 
                     */
                    bool RateLimitOptionHasBeenSet() const;

                private:

                    /**
                     * 数据迁移任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 数据迁移任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 迁移任务简要错误信息
                     */
                    std::string m_briefMsg;
                    bool m_briefMsgHasBeenSet;

                    /**
                     * 任务状态，取值为：created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行中)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务操作信息
                     */
                    MigrateAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 迁移执行过程信息，在校验阶段显示校验过程步骤信息，在迁移阶段会显示迁移步骤信息
                     */
                    MigrateDetailInfo m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                    /**
                     * 源实例信息
                     */
                    DBEndpointInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标端信息
                     */
                    DBEndpointInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 数据一致性校验结果
                     */
                    CompareTaskInfo m_compareTask;
                    bool m_compareTaskHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 运行模式，取值如：immediate(表示立即运行)、timed(表示定时运行)
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 期待启动时间，当RunMode取值为timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * 迁移选项，描述任务如何执行迁移等一系列配置信息
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * 校验任务运行详情
                     */
                    CheckStepInfo m_checkStepInfo;
                    bool m_checkStepInfoHasBeenSet;

                    /**
                     * 描述计费相关的信息
                     */
                    TradeInfo m_tradeInfo;
                    bool m_tradeInfoHasBeenSet;

                    /**
                     * 任务错误信息
                     */
                    std::vector<ErrorInfoItem> m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     */
                    std::string m_dumperResumeCtrl;
                    bool m_dumperResumeCtrlHasBeenSet;

                    /**
                     * 任务的限速信息
                     */
                    RateLimitOption m_rateLimitOption;
                    bool m_rateLimitOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
