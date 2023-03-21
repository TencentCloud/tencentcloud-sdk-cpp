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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_JOBITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_JOBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MigrateAction.h>
#include <tencentcloud/dts/v20211206/model/MigrateDetailInfo.h>
#include <tencentcloud/dts/v20211206/model/DBEndpointInfo.h>
#include <tencentcloud/dts/v20211206/model/CompareTaskInfo.h>
#include <tencentcloud/dts/v20211206/model/TradeInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 迁移任务列表
                */
                class JobItem : public AbstractModel
                {
                public:
                    JobItem();
                    ~JobItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据迁移任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 数据迁移任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置数据迁移任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobId 数据迁移任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取数据迁移任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobName 数据迁移任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置数据迁移任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobName 数据迁移任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取迁移任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BriefMsg 迁移任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBriefMsg() const;

                    /**
                     * 设置迁移任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BriefMsg 迁移任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBriefMsg(const std::string& _briefMsg);

                    /**
                     * 判断参数 BriefMsg 是否已赋值
                     * @return BriefMsg 是否已赋值
                     */
                    bool BriefMsgHasBeenSet() const;

                    /**
                     * 获取任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunMode 任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunMode 任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取期待启动时间，当RunMode取值为timed时，此值必填，形如：2022-07-11 16:20:49
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpectRunTime 期待启动时间，当RunMode取值为timed时，此值必填，形如：2022-07-11 16:20:49
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置期待启动时间，当RunMode取值为timed时，此值必填，形如：2022-07-11 16:20:49
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpectRunTime 期待启动时间，当RunMode取值为timed时，此值必填，形如：2022-07-11 16:20:49
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取任务操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 任务操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MigrateAction GetAction() const;

                    /**
                     * 设置任务操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action 任务操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAction(const MigrateAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取迁移执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepInfo 迁移执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MigrateDetailInfo GetStepInfo() const;

                    /**
                     * 设置迁移执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StepInfo 迁移执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStepInfo(const MigrateDetailInfo& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     */
                    bool StepInfoHasBeenSet() const;

                    /**
                     * 获取源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcInfo 源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DBEndpointInfo GetSrcInfo() const;

                    /**
                     * 设置源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SrcInfo 源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrcInfo(const DBEndpointInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstInfo 目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DBEndpointInfo GetDstInfo() const;

                    /**
                     * 设置目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DstInfo 目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDstInfo(const DBEndpointInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取数据一致性校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareTask 数据一致性校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareTaskInfo GetCompareTask() const;

                    /**
                     * 设置数据一致性校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareTask 数据一致性校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareTask(const CompareTaskInfo& _compareTask);

                    /**
                     * 判断参数 CompareTask 是否已赋值
                     * @return CompareTask 是否已赋值
                     */
                    bool CompareTaskHasBeenSet() const;

                    /**
                     * 获取计费状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeInfo 计费状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TradeInfo GetTradeInfo() const;

                    /**
                     * 设置计费状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TradeInfo 计费状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTradeInfo(const TradeInfo& _tradeInfo);

                    /**
                     * 判断参数 TradeInfo 是否已赋值
                     * @return TradeInfo 是否已赋值
                     */
                    bool TradeInfoHasBeenSet() const;

                    /**
                     * 获取标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取自动重试时间段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRetryTimeRangeMinutes 自动重试时间段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置自动重试时间段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoRetryTimeRangeMinutes 自动重试时间段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                private:

                    /**
                     * 数据迁移任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 数据迁移任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 任务创建(提交)时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务开始执行时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务执行结束时间，格式为 yyyy-mm-dd hh:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 迁移任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_briefMsg;
                    bool m_briefMsgHasBeenSet;

                    /**
                     * 任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(中止中)、completing(完成中)、
pausing(暂停中)、
manualPaused(已暂停)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务运行模式，值包括：immediate(立即运行)，timed(定时运行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 期待启动时间，当RunMode取值为timed时，此值必填，形如：2022-07-11 16:20:49
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * 任务操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MigrateAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 迁移执行过程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MigrateDetailInfo m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                    /**
                     * 源实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DBEndpointInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DBEndpointInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 数据一致性校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareTaskInfo m_compareTask;
                    bool m_compareTaskHasBeenSet;

                    /**
                     * 计费状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TradeInfo m_tradeInfo;
                    bool m_tradeInfoHasBeenSet;

                    /**
                     * 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 自动重试时间段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_JOBITEM_H_
