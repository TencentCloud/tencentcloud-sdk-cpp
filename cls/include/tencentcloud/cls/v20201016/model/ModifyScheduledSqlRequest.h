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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSCHEDULEDSQLREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSCHEDULEDSQLREQUEST_H_

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
                * ModifyScheduledSql请求参数结构体
                */
                class ModifyScheduledSqlRequest : public AbstractModel
                {
                public:
                    ModifyScheduledSqlRequest();
                    ~ModifyScheduledSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     * @return TaskId <p>任务ID，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     * @param _taskId <p>任务ID，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
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
                     * 获取<p>源日志主题，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     * @return SrcTopicId <p>源日志主题，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置<p>源日志主题，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     * @param _srcTopicId <p>源日志主题，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
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
                     * 获取<p>任务启动状态.   1开启,  2关闭</p>
                     * @return EnableFlag <p>任务启动状态.   1开启,  2关闭</p>
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置<p>任务启动状态.   1开启,  2关闭</p>
                     * @param _enableFlag <p>任务启动状态.   1开启,  2关闭</p>
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
                     * 获取<p>定时SQL分析的目标日志主题</p>
                     * @return DstResource <p>定时SQL分析的目标日志主题</p>
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置<p>定时SQL分析的目标日志主题</p>
                     * @param _dstResource <p>定时SQL分析的目标日志主题</p>
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
                     * 获取<p>查询语句</p>
                     * @return ScheduledSqlContent <p>查询语句</p>
                     * 
                     */
                    std::string GetScheduledSqlContent() const;

                    /**
                     * 设置<p>查询语句</p>
                     * @param _scheduledSqlContent <p>查询语句</p>
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
                     * 获取<p>调度周期(分钟)，1~1440分钟</p>
                     * @return ProcessPeriod <p>调度周期(分钟)，1~1440分钟</p>
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置<p>调度周期(分钟)，1~1440分钟</p>
                     * @param _processPeriod <p>调度周期(分钟)，1~1440分钟</p>
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
                     * 获取<p>单次查询的时间窗口. 例子中为近15分钟</p>
                     * @return ProcessTimeWindow <p>单次查询的时间窗口. 例子中为近15分钟</p>
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置<p>单次查询的时间窗口. 例子中为近15分钟</p>
                     * @param _processTimeWindow <p>单次查询的时间窗口. 例子中为近15分钟</p>
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
                     * 获取<p>执行延迟(秒)，0~120秒，默认60秒</p>
                     * @return ProcessDelay <p>执行延迟(秒)，0~120秒，默认60秒</p>
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置<p>执行延迟(秒)，0~120秒，默认60秒</p>
                     * @param _processDelay <p>执行延迟(秒)，0~120秒，默认60秒</p>
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
                     * 获取<p>源topicId的地域信息,支持地域见 <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</p>
                     * @return SrcTopicRegion <p>源topicId的地域信息,支持地域见 <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</p>
                     * 
                     */
                    std::string GetSrcTopicRegion() const;

                    /**
                     * 设置<p>源topicId的地域信息,支持地域见 <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</p>
                     * @param _srcTopicRegion <p>源topicId的地域信息,支持地域见 <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</p>
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
                     * 获取<p>任务名称，0~255字符</p>
                     * @return Name <p>任务名称，0~255字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称，0~255字符</p>
                     * @param _name <p>任务名称，0~255字符</p>
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
                     * 获取<p>语法规则。 默认值为0。 0：Lucene语法，1：CQL语法</p>
                     * @return SyntaxRule <p>语法规则。 默认值为0。 0：Lucene语法，1：CQL语法</p>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>语法规则。 默认值为0。 0：Lucene语法，1：CQL语法</p>
                     * @param _syntaxRule <p>语法规则。 默认值为0。 0：Lucene语法，1：CQL语法</p>
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
                     * 获取<p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * @return HasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * @param _hasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
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
                     * 获取<p>全文检索查询标记。1：关闭，2：打开。</p>
                     * @return FullQuery <p>全文检索查询标记。1：关闭，2：打开。</p>
                     * 
                     */
                    uint64_t GetFullQuery() const;

                    /**
                     * 设置<p>全文检索查询标记。1：关闭，2：打开。</p>
                     * @param _fullQuery <p>全文检索查询标记。1：关闭，2：打开。</p>
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
                     * <p>任务ID，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>源日志主题，通过<a href="https://cloud.tencent.com/document/product/614/95519">获取定时SQL分析任务列表</a>获取</p>
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * <p>任务启动状态.   1开启,  2关闭</p>
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>定时SQL分析的目标日志主题</p>
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * <p>查询语句</p>
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * <p>调度周期(分钟)，1~1440分钟</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>单次查询的时间窗口. 例子中为近15分钟</p>
                     */
                    std::string m_processTimeWindow;
                    bool m_processTimeWindowHasBeenSet;

                    /**
                     * <p>执行延迟(秒)，0~120秒，默认60秒</p>
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * <p>源topicId的地域信息,支持地域见 <a href="https://cloud.tencent.com/document/api/614/56474#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">地域列表</a> 文档</p>
                     */
                    std::string m_srcTopicRegion;
                    bool m_srcTopicRegionHasBeenSet;

                    /**
                     * <p>任务名称，0~255字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>语法规则。 默认值为0。 0：Lucene语法，1：CQL语法</p>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>全文检索查询标记。1：关闭，2：打开。</p>
                     */
                    uint64_t m_fullQuery;
                    bool m_fullQueryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSCHEDULEDSQLREQUEST_H_
