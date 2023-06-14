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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKLISTREQUEST_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeScanTaskList请求参数结构体
                */
                class DescribeScanTaskListRequest : public AbstractModel
                {
                public:
                    DescribeScanTaskListRequest();
                    ~DescribeScanTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务来源, -1:所有, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * @return Source 任务来源, -1:所有, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置任务来源, -1:所有, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * @param _source 任务来源, -1:所有, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
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
                     * 获取任务状态,可多值查询,例如:"1,2,3" 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * @return TaskStatuses 任务状态,可多值查询,例如:"1,2,3" 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * 
                     */
                    std::string GetTaskStatuses() const;

                    /**
                     * 设置任务状态,可多值查询,例如:"1,2,3" 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * @param _taskStatuses 任务状态,可多值查询,例如:"1,2,3" 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * 
                     */
                    void SetTaskStatuses(const std::string& _taskStatuses);

                    /**
                     * 判断参数 TaskStatuses 是否已赋值
                     * @return TaskStatuses 是否已赋值
                     * 
                     */
                    bool TaskStatusesHasBeenSet() const;

                    /**
                     * 获取任务类型,可多值查询,采用逗号分隔,例如:"0,1" 0:基础版, 1:专家版, 2:本地化
                     * @return TaskTypes 任务类型,可多值查询,采用逗号分隔,例如:"0,1" 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    std::string GetTaskTypes() const;

                    /**
                     * 设置任务类型,可多值查询,采用逗号分隔,例如:"0,1" 0:基础版, 1:专家版, 2:本地化
                     * @param _taskTypes 任务类型,可多值查询,采用逗号分隔,例如:"0,1" 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    void SetTaskTypes(const std::string& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取页码大小
                     * @return PageSize 页码大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页码大小
                     * @param _pageSize 页码大小
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取应用名称或小程序名称(可选参数)
                     * @return AppName 应用名称或小程序名称(可选参数)
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称或小程序名称(可选参数)
                     * @param _appName 应用名称或小程序名称(可选参数)
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取查询时间范围, 查询开始时间(2021-09-30 或 2021-09-30 10:57:34)
                     * @return StartTime 查询时间范围, 查询开始时间(2021-09-30 或 2021-09-30 10:57:34)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询时间范围, 查询开始时间(2021-09-30 或 2021-09-30 10:57:34)
                     * @param _startTime 查询时间范围, 查询开始时间(2021-09-30 或 2021-09-30 10:57:34)
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
                     * 获取查询时间范围, 查询结束时间(2021-09-30 或 2021-09-30 10:57:34)
                     * @return EndTime 查询时间范围, 查询结束时间(2021-09-30 或 2021-09-30 10:57:34)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询时间范围, 查询结束时间(2021-09-30 或 2021-09-30 10:57:34)
                     * @param _endTime 查询时间范围, 查询结束时间(2021-09-30 或 2021-09-30 10:57:34)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 任务来源, -1:所有, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 应用平台, 0:android, 1:ios, 2:小程序
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 任务状态,可多值查询,例如:"1,2,3" 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     */
                    std::string m_taskStatuses;
                    bool m_taskStatusesHasBeenSet;

                    /**
                     * 任务类型,可多值查询,采用逗号分隔,例如:"0,1" 0:基础版, 1:专家版, 2:本地化
                     */
                    std::string m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 页码大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 应用名称或小程序名称(可选参数)
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 查询时间范围, 查询开始时间(2021-09-30 或 2021-09-30 10:57:34)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询时间范围, 查询结束时间(2021-09-30 或 2021-09-30 10:57:34)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKLISTREQUEST_H_
