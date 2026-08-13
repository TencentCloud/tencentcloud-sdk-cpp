/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>数据迁移任务ID</p>
                     * @return JobId <p>数据迁移任务ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>数据迁移任务ID</p>
                     * @param _jobId <p>数据迁移任务ID</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>数据迁移任务名称</p>
                     * @return JobName <p>数据迁移任务名称</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>数据迁移任务名称</p>
                     * @param _jobName <p>数据迁移任务名称</p>
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
                     * 获取<p>任务创建(提交)时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return CreateTime <p>任务创建(提交)时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建(提交)时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _createTime <p>任务创建(提交)时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>任务更新时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return UpdateTime <p>任务更新时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>任务更新时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _updateTime <p>任务更新时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始执行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return StartTime <p>任务开始执行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>任务开始执行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _startTime <p>任务开始执行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>任务执行结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return EndTime <p>任务执行结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务执行结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _endTime <p>任务执行结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>迁移任务错误信息</p>
                     * @return BriefMsg <p>迁移任务错误信息</p>
                     * 
                     */
                    std::string GetBriefMsg() const;

                    /**
                     * 设置<p>迁移任务错误信息</p>
                     * @param _briefMsg <p>迁移任务错误信息</p>
                     * 
                     */
                    void SetBriefMsg(const std::string& _briefMsg);

                    /**
                     * 判断参数 BriefMsg 是否已赋值
                     * @return BriefMsg 是否已赋值
                     * 
                     */
                    bool BriefMsgHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(终止中)、completing(完成中)、pausing(暂停中)、manualPaused(已暂停)、resumableErr(可重试错误)、resuming(重试中)、unknown(未知状态)、error(任务错误)、canceled(已取消)</p>
                     * @return Status <p>任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(终止中)、completing(完成中)、pausing(暂停中)、manualPaused(已暂停)、resumableErr(可重试错误)、resuming(重试中)、unknown(未知状态)、error(任务错误)、canceled(已取消)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(终止中)、completing(完成中)、pausing(暂停中)、manualPaused(已暂停)、resumableErr(可重试错误)、resuming(重试中)、unknown(未知状态)、error(任务错误)、canceled(已取消)</p>
                     * @param _status <p>任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(终止中)、completing(完成中)、pausing(暂停中)、manualPaused(已暂停)、resumableErr(可重试错误)、resuming(重试中)、unknown(未知状态)、error(任务错误)、canceled(已取消)</p>
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
                     * 获取<p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * @return RunMode <p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * @param _runMode <p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取<p>期待启动时间，当 <code>RunMode</code> 取值为 <code>timed</code> 时此值必填。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return ExpectRunTime <p>期待启动时间，当 <code>RunMode</code> 取值为 <code>timed</code> 时此值必填。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置<p>期待启动时间，当 <code>RunMode</code> 取值为 <code>timed</code> 时此值必填。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _expectRunTime <p>期待启动时间，当 <code>RunMode</code> 取值为 <code>timed</code> 时此值必填。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务操作信息</p>
                     * @return Action <p>任务操作信息</p>
                     * 
                     */
                    MigrateAction GetAction() const;

                    /**
                     * 设置<p>任务操作信息</p>
                     * @param _action <p>任务操作信息</p>
                     * 
                     */
                    void SetAction(const MigrateAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>迁移执行过程信息</p>
                     * @return StepInfo <p>迁移执行过程信息</p>
                     * 
                     */
                    MigrateDetailInfo GetStepInfo() const;

                    /**
                     * 设置<p>迁移执行过程信息</p>
                     * @param _stepInfo <p>迁移执行过程信息</p>
                     * 
                     */
                    void SetStepInfo(const MigrateDetailInfo& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     * 
                     */
                    bool StepInfoHasBeenSet() const;

                    /**
                     * 获取<p>源实例信息</p>
                     * @return SrcInfo <p>源实例信息</p>
                     * 
                     */
                    DBEndpointInfo GetSrcInfo() const;

                    /**
                     * 设置<p>源实例信息</p>
                     * @param _srcInfo <p>源实例信息</p>
                     * 
                     */
                    void SetSrcInfo(const DBEndpointInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取<p>目标端信息</p>
                     * @return DstInfo <p>目标端信息</p>
                     * 
                     */
                    DBEndpointInfo GetDstInfo() const;

                    /**
                     * 设置<p>目标端信息</p>
                     * @param _dstInfo <p>目标端信息</p>
                     * 
                     */
                    void SetDstInfo(const DBEndpointInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取<p>数据一致性校验结果</p>
                     * @return CompareTask <p>数据一致性校验结果</p>
                     * 
                     */
                    CompareTaskInfo GetCompareTask() const;

                    /**
                     * 设置<p>数据一致性校验结果</p>
                     * @param _compareTask <p>数据一致性校验结果</p>
                     * 
                     */
                    void SetCompareTask(const CompareTaskInfo& _compareTask);

                    /**
                     * 判断参数 CompareTask 是否已赋值
                     * @return CompareTask 是否已赋值
                     * 
                     */
                    bool CompareTaskHasBeenSet() const;

                    /**
                     * 获取<p>计费状态信息</p>
                     * @return TradeInfo <p>计费状态信息</p>
                     * 
                     */
                    TradeInfo GetTradeInfo() const;

                    /**
                     * 设置<p>计费状态信息</p>
                     * @param _tradeInfo <p>计费状态信息</p>
                     * 
                     */
                    void SetTradeInfo(const TradeInfo& _tradeInfo);

                    /**
                     * 判断参数 TradeInfo 是否已赋值
                     * @return TradeInfo 是否已赋值
                     * 
                     */
                    bool TradeInfoHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>自动重试时间段信息</p>
                     * @return AutoRetryTimeRangeMinutes <p>自动重试时间段信息</p>
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置<p>自动重试时间段信息</p>
                     * @param _autoRetryTimeRangeMinutes <p>自动重试时间段信息</p>
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                    /**
                     * 获取<p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * @return DumperResumeCtrl <p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * 
                     */
                    std::string GetDumperResumeCtrl() const;

                    /**
                     * 设置<p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * @param _dumperResumeCtrl <p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     * 
                     */
                    void SetDumperResumeCtrl(const std::string& _dumperResumeCtrl);

                    /**
                     * 判断参数 DumperResumeCtrl 是否已赋值
                     * @return DumperResumeCtrl 是否已赋值
                     * 
                     */
                    bool DumperResumeCtrlHasBeenSet() const;

                private:

                    /**
                     * <p>数据迁移任务ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>数据迁移任务名称</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>任务创建(提交)时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务更新时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>任务开始执行时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务执行结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>迁移任务错误信息</p>
                     */
                    std::string m_briefMsg;
                    bool m_briefMsgHasBeenSet;

                    /**
                     * <p>任务状态，取值为：creating(创建中)、created(创建完成)、checking(校验中)、checkPass(校验通过)、checkNotPass(校验不通过)、readyRun(准备运行)、running(任务运行)、readyComplete(准备完成)、success(任务成功)、failed(任务失败)、stopping(终止中)、completing(完成中)、pausing(暂停中)、manualPaused(已暂停)、resumableErr(可重试错误)、resuming(重试中)、unknown(未知状态)、error(任务错误)、canceled(已取消)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务运行模式，值包括：immediate(立即运行)，timed(定时运行)</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>期待启动时间，当 <code>RunMode</code> 取值为 <code>timed</code> 时此值必填。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * <p>任务操作信息</p>
                     */
                    MigrateAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>迁移执行过程信息</p>
                     */
                    MigrateDetailInfo m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                    /**
                     * <p>源实例信息</p>
                     */
                    DBEndpointInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * <p>目标端信息</p>
                     */
                    DBEndpointInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * <p>数据一致性校验结果</p>
                     */
                    CompareTaskInfo m_compareTask;
                    bool m_compareTaskHasBeenSet;

                    /**
                     * <p>计费状态信息</p>
                     */
                    TradeInfo m_tradeInfo;
                    bool m_tradeInfoHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自动重试时间段信息</p>
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                    /**
                     * <p>全量导出可重入标识：enum::&quot;yes&quot;/&quot;no&quot;。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传</p>
                     */
                    std::string m_dumperResumeCtrl;
                    bool m_dumperResumeCtrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_JOBITEM_H_
