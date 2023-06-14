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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBESCANTASKREPORTURLREQUEST_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBESCANTASKREPORTURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * DescribeScanTaskReportUrl请求参数结构体
                */
                class DescribeScanTaskReportUrlRequest : public AbstractModel
                {
                public:
                    DescribeScanTaskReportUrlRequest();
                    ~DescribeScanTaskReportUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * @return Source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * @param _source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return TaskID 任务id
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务id
                     * @param _taskID 任务id
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取应用平台, 0:android, 1:ios, 2:小程序
                     * @return Platform 应用平台, 0:android, 1:ios, 2:小程序
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置应用平台, 0:android, 1:ios, 2:小程序
                     * @param _platform 应用平台, 0:android, 1:ios, 2:小程序
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取报告类型, 0:诊断报告, 1:堆栈报告(预留), 2:视频证据(预留), 3:报告json结果
                     * @return ReportType 报告类型, 0:诊断报告, 1:堆栈报告(预留), 2:视频证据(预留), 3:报告json结果
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置报告类型, 0:诊断报告, 1:堆栈报告(预留), 2:视频证据(预留), 3:报告json结果
                     * @param _reportType 报告类型, 0:诊断报告, 1:堆栈报告(预留), 2:视频证据(预留), 3:报告json结果
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
                     * 获取任务类型, 0:基础版, 1:专家版, 2:本地化
                     * @return TaskType 任务类型, 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型, 0:基础版, 1:专家版, 2:本地化
                     * @param _taskType 任务类型, 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android);
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 应用平台, 0:android, 1:ios, 2:小程序
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 报告类型, 0:诊断报告, 1:堆栈报告(预留), 2:视频证据(预留), 3:报告json结果
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 任务类型, 0:基础版, 1:专家版, 2:本地化
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBESCANTASKREPORTURLREQUEST_H_
