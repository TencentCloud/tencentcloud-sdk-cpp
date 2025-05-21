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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ScheduledSqlResouceInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ScheduledSql任务详情
                */
                class ScheduledSqlTaskInfo : public AbstractModel
                {
                public:
                    ScheduledSqlTaskInfo();
                    ~ScheduledSqlTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ScheduledSql任务id
                     * @return TaskId ScheduledSql任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置ScheduledSql任务id
                     * @param _taskId ScheduledSql任务id
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
                     * 获取ScheduledSql任务名称
                     * @return Name ScheduledSql任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置ScheduledSql任务名称
                     * @param _name ScheduledSql任务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取源日志主题id
                     * @return SrcTopicId 源日志主题id
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置源日志主题id
                     * @param _srcTopicId 源日志主题id
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

                    /**
                     * 获取源日志主题名称
                     * @return SrcTopicName 源日志主题名称
                     * 
                     */
                    std::string GetSrcTopicName() const;

                    /**
                     * 设置源日志主题名称
                     * @param _srcTopicName 源日志主题名称
                     * 
                     */
                    void SetSrcTopicName(const std::string& _srcTopicName);

                    /**
                     * 判断参数 SrcTopicName 是否已赋值
                     * @return SrcTopicName 是否已赋值
                     * 
                     */
                    bool SrcTopicNameHasBeenSet() const;

                    /**
                     * 获取定时SQL分析目标主题
                     * @return DstResource 定时SQL分析目标主题
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置定时SQL分析目标主题
                     * @param _dstResource 定时SQL分析目标主题
                     * 
                     */
                    void SetDstResource(const ScheduledSqlResouceInfo& _dstResource);

                    /**
                     * 判断参数 DstResource 是否已赋值
                     * @return DstResource 是否已赋值
                     * 
                     */
                    bool DstResourceHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取任务更新时间
                     * @return UpdateTime 任务更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param _updateTime 任务更新时间
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
                     * 获取任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     * @return Status 任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     * @param _status 任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
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
                     * 获取任务启用状态，1开启,  2关闭
                     * @return EnableFlag 任务启用状态，1开启,  2关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启用状态，1开启,  2关闭
                     * @param _enableFlag 任务启用状态，1开启,  2关闭
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取查询语句
                     * @return ScheduledSqlContent 查询语句
                     * 
                     */
                    std::string GetScheduledSqlContent() const;

                    /**
                     * 设置查询语句
                     * @param _scheduledSqlContent 查询语句
                     * 
                     */
                    void SetScheduledSqlContent(const std::string& _scheduledSqlContent);

                    /**
                     * 判断参数 ScheduledSqlContent 是否已赋值
                     * @return ScheduledSqlContent 是否已赋值
                     * 
                     */
                    bool ScheduledSqlContentHasBeenSet() const;

                    /**
                     * 获取调度开始时间
                     * @return ProcessStartTime 调度开始时间
                     * 
                     */
                    std::string GetProcessStartTime() const;

                    /**
                     * 设置调度开始时间
                     * @param _processStartTime 调度开始时间
                     * 
                     */
                    void SetProcessStartTime(const std::string& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取调度类型，1:持续运行 2:指定时间范围
                     * @return ProcessType 调度类型，1:持续运行 2:指定时间范围
                     * 
                     */
                    int64_t GetProcessType() const;

                    /**
                     * 设置调度类型，1:持续运行 2:指定时间范围
                     * @param _processType 调度类型，1:持续运行 2:指定时间范围
                     * 
                     */
                    void SetProcessType(const int64_t& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取调度结束时间，当process_type=2时为必传字段
                     * @return ProcessEndTime 调度结束时间，当process_type=2时为必传字段
                     * 
                     */
                    std::string GetProcessEndTime() const;

                    /**
                     * 设置调度结束时间，当process_type=2时为必传字段
                     * @param _processEndTime 调度结束时间，当process_type=2时为必传字段
                     * 
                     */
                    void SetProcessEndTime(const std::string& _processEndTime);

                    /**
                     * 判断参数 ProcessEndTime 是否已赋值
                     * @return ProcessEndTime 是否已赋值
                     * 
                     */
                    bool ProcessEndTimeHasBeenSet() const;

                    /**
                     * 获取调度周期(分钟)
                     * @return ProcessPeriod 调度周期(分钟)
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置调度周期(分钟)
                     * @param _processPeriod 调度周期(分钟)
                     * 
                     */
                    void SetProcessPeriod(const int64_t& _processPeriod);

                    /**
                     * 判断参数 ProcessPeriod 是否已赋值
                     * @return ProcessPeriod 是否已赋值
                     * 
                     */
                    bool ProcessPeriodHasBeenSet() const;

                    /**
                     * 获取查询的时间窗口. @m-15m, @m，意为近15分钟
                     * @return ProcessTimeWindow 查询的时间窗口. @m-15m, @m，意为近15分钟
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置查询的时间窗口. @m-15m, @m，意为近15分钟
                     * @param _processTimeWindow 查询的时间窗口. @m-15m, @m，意为近15分钟
                     * 
                     */
                    void SetProcessTimeWindow(const std::string& _processTimeWindow);

                    /**
                     * 判断参数 ProcessTimeWindow 是否已赋值
                     * @return ProcessTimeWindow 是否已赋值
                     * 
                     */
                    bool ProcessTimeWindowHasBeenSet() const;

                    /**
                     * 获取执行延迟(秒)
                     * @return ProcessDelay 执行延迟(秒)
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置执行延迟(秒)
                     * @param _processDelay 执行延迟(秒)
                     * 
                     */
                    void SetProcessDelay(const int64_t& _processDelay);

                    /**
                     * 判断参数 ProcessDelay 是否已赋值
                     * @return ProcessDelay 是否已赋值
                     * 
                     */
                    bool ProcessDelayHasBeenSet() const;

                    /**
                     * 获取源topicId的地域信息
                     * @return SrcTopicRegion 源topicId的地域信息
                     * 
                     */
                    std::string GetSrcTopicRegion() const;

                    /**
                     * 设置源topicId的地域信息
                     * @param _srcTopicRegion 源topicId的地域信息
                     * 
                     */
                    void SetSrcTopicRegion(const std::string& _srcTopicRegion);

                    /**
                     * 判断参数 SrcTopicRegion 是否已赋值
                     * @return SrcTopicRegion 是否已赋值
                     * 
                     */
                    bool SrcTopicRegionHasBeenSet() const;

                    /**
                     * 获取语法规则，0：Lucene语法，1：CQL语法
                     * @return SyntaxRule 语法规则，0：Lucene语法，1：CQL语法
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置语法规则，0：Lucene语法，1：CQL语法
                     * @param _syntaxRule 语法规则，0：Lucene语法，1：CQL语法
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取是否开启投递服务日志。1：关闭，2：开启。
                     * @return HasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置是否开启投递服务日志。1：关闭，2：开启。
                     * @param _hasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取全文检索标记。1：关闭，2：打开。
                     * @return FullQuery 全文检索标记。1：关闭，2：打开。
                     * 
                     */
                    uint64_t GetFullQuery() const;

                    /**
                     * 设置全文检索标记。1：关闭，2：打开。
                     * @param _fullQuery 全文检索标记。1：关闭，2：打开。
                     * 
                     */
                    void SetFullQuery(const uint64_t& _fullQuery);

                    /**
                     * 判断参数 FullQuery 是否已赋值
                     * @return FullQuery 是否已赋值
                     * 
                     */
                    bool FullQueryHasBeenSet() const;

                private:

                    /**
                     * ScheduledSql任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * ScheduledSql任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 源日志主题id
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * 源日志主题名称
                     */
                    std::string m_srcTopicName;
                    bool m_srcTopicNameHasBeenSet;

                    /**
                     * 定时SQL分析目标主题
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务状态，1:运行 2:停止 3:异常-找不到源日志主题 4:异常-找不到目标主题

5: 访问权限问题 6:内部故障 7:其他故障
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务启用状态，1开启,  2关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 查询语句
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * 调度开始时间
                     */
                    std::string m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * 调度类型，1:持续运行 2:指定时间范围
                     */
                    int64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 调度结束时间，当process_type=2时为必传字段
                     */
                    std::string m_processEndTime;
                    bool m_processEndTimeHasBeenSet;

                    /**
                     * 调度周期(分钟)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * 查询的时间窗口. @m-15m, @m，意为近15分钟
                     */
                    std::string m_processTimeWindow;
                    bool m_processTimeWindowHasBeenSet;

                    /**
                     * 执行延迟(秒)
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * 源topicId的地域信息
                     */
                    std::string m_srcTopicRegion;
                    bool m_srcTopicRegionHasBeenSet;

                    /**
                     * 语法规则，0：Lucene语法，1：CQL语法
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * 是否开启投递服务日志。1：关闭，2：开启。
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * 全文检索标记。1：关闭，2：打开。
                     */
                    uint64_t m_fullQuery;
                    bool m_fullQueryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLTASKINFO_H_
