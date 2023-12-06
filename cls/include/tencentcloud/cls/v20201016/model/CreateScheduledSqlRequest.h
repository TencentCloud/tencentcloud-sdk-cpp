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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESCHEDULEDSQLREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESCHEDULEDSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateScheduledSql请求参数结构体
                */
                class CreateScheduledSqlRequest : public AbstractModel
                {
                public:
                    CreateScheduledSqlRequest();
                    ~CreateScheduledSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源日志主题
                     * @return SrcTopicId 源日志主题
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置源日志主题
                     * @param _srcTopicId 源日志主题
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
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
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
                     * 获取任务启动状态.  1开启,  2关闭
                     * @return EnableFlag 任务启动状态.  1开启,  2关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启动状态.  1开启,  2关闭
                     * @param _enableFlag 任务启动状态.  1开启,  2关闭
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
                     * 获取定时SQL分析目标日志主题
                     * @return DstResource 定时SQL分析目标日志主题
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置定时SQL分析目标日志主题
                     * @param _dstResource 定时SQL分析目标日志主题
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
                     * 获取调度开始时间,Unix时间戳，单位ms
                     * @return ProcessStartTime 调度开始时间,Unix时间戳，单位ms
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置调度开始时间,Unix时间戳，单位ms
                     * @param _processStartTime 调度开始时间,Unix时间戳，单位ms
                     * 
                     */
                    void SetProcessStartTime(const uint64_t& _processStartTime);

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
                     * 获取单次查询的时间窗口,如果您的目标主题为指标主题，建议该参数的大小不超过30分钟，否则可能转指标失败。 
                     * @return ProcessTimeWindow 单次查询的时间窗口,如果您的目标主题为指标主题，建议该参数的大小不超过30分钟，否则可能转指标失败。 
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置单次查询的时间窗口,如果您的目标主题为指标主题，建议该参数的大小不超过30分钟，否则可能转指标失败。 
                     * @param _processTimeWindow 单次查询的时间窗口,如果您的目标主题为指标主题，建议该参数的大小不超过30分钟，否则可能转指标失败。 
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
                     * 获取调度结束时间，当ProcessType=2时为必传字段, Unix时间戳，单位ms
                     * @return ProcessEndTime 调度结束时间，当ProcessType=2时为必传字段, Unix时间戳，单位ms
                     * 
                     */
                    uint64_t GetProcessEndTime() const;

                    /**
                     * 设置调度结束时间，当ProcessType=2时为必传字段, Unix时间戳，单位ms
                     * @param _processEndTime 调度结束时间，当ProcessType=2时为必传字段, Unix时间戳，单位ms
                     * 
                     */
                    void SetProcessEndTime(const uint64_t& _processEndTime);

                    /**
                     * 判断参数 ProcessEndTime 是否已赋值
                     * @return ProcessEndTime 是否已赋值
                     * 
                     */
                    bool ProcessEndTimeHasBeenSet() const;

                    /**
                     * 获取查询语法规则。 默认值为0。0：Lucene语法，1：CQL语法  
                     * @return SyntaxRule 查询语法规则。 默认值为0。0：Lucene语法，1：CQL语法  
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置查询语法规则。 默认值为0。0：Lucene语法，1：CQL语法  
                     * @param _syntaxRule 查询语法规则。 默认值为0。0：Lucene语法，1：CQL语法  
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                private:

                    /**
                     * 源日志主题
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务启动状态.  1开启,  2关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 定时SQL分析目标日志主题
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * 查询语句
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * 调度开始时间,Unix时间戳，单位ms
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * 调度类型，1:持续运行 2:指定时间范围
                     */
                    int64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 调度周期(分钟)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * 单次查询的时间窗口,如果您的目标主题为指标主题，建议该参数的大小不超过30分钟，否则可能转指标失败。 
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
                     * 调度结束时间，当ProcessType=2时为必传字段, Unix时间戳，单位ms
                     */
                    uint64_t m_processEndTime;
                    bool m_processEndTimeHasBeenSet;

                    /**
                     * 查询语法规则。 默认值为0。0：Lucene语法，1：CQL语法  
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESCHEDULEDSQLREQUEST_H_
