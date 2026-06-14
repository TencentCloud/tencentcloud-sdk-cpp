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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEMANUALTRIGGERRECORDPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEMANUALTRIGGERRECORDPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeManualTriggerRecordPage请求参数结构体
                */
                class DescribeManualTriggerRecordPageRequest : public AbstractModel
                {
                public:
                    DescribeManualTriggerRecordPageRequest();
                    ~DescribeManualTriggerRecordPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>触发运行名称</p>
                     * @return TriggerName <p>触发运行名称</p>
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置<p>触发运行名称</p>
                     * @param _triggerName <p>触发运行名称</p>
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取<p>工作流过滤关键字，工作流名称 or 工作流ID</p>
                     * @return WorkflowKeyword <p>工作流过滤关键字，工作流名称 or 工作流ID</p>
                     * 
                     */
                    std::string GetWorkflowKeyword() const;

                    /**
                     * 设置<p>工作流过滤关键字，工作流名称 or 工作流ID</p>
                     * @param _workflowKeyword <p>工作流过滤关键字，工作流名称 or 工作流ID</p>
                     * 
                     */
                    void SetWorkflowKeyword(const std::string& _workflowKeyword);

                    /**
                     * 判断参数 WorkflowKeyword 是否已赋值
                     * @return WorkflowKeyword 是否已赋值
                     * 
                     */
                    bool WorkflowKeywordHasBeenSet() const;

                    /**
                     * 获取<p>触发运行提交人过滤，多个提交人用英文逗号分割</p>
                     * @return Creator <p>触发运行提交人过滤，多个提交人用英文逗号分割</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>触发运行提交人过滤，多个提交人用英文逗号分割</p>
                     * @param _creator <p>触发运行提交人过滤，多个提交人用英文逗号分割</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>触发提交创建时间过滤，起始时间</p>
                     * @return TriggerStartTime <p>触发提交创建时间过滤，起始时间</p>
                     * 
                     */
                    std::string GetTriggerStartTime() const;

                    /**
                     * 设置<p>触发提交创建时间过滤，起始时间</p>
                     * @param _triggerStartTime <p>触发提交创建时间过滤，起始时间</p>
                     * 
                     */
                    void SetTriggerStartTime(const std::string& _triggerStartTime);

                    /**
                     * 判断参数 TriggerStartTime 是否已赋值
                     * @return TriggerStartTime 是否已赋值
                     * 
                     */
                    bool TriggerStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>触发提交创建时间过滤，结束时间</p>
                     * @return TriggerEndTime <p>触发提交创建时间过滤，结束时间</p>
                     * 
                     */
                    std::string GetTriggerEndTime() const;

                    /**
                     * 设置<p>触发提交创建时间过滤，结束时间</p>
                     * @param _triggerEndTime <p>触发提交创建时间过滤，结束时间</p>
                     * 
                     */
                    void SetTriggerEndTime(const std::string& _triggerEndTime);

                    /**
                     * 判断参数 TriggerEndTime 是否已赋值
                     * @return TriggerEndTime 是否已赋值
                     * 
                     */
                    bool TriggerEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>页码，整型</p>
                     * @return PageNumber <p>页码，整型</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，整型</p>
                     * @param _pageNumber <p>页码，整型</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页数目，整型</p>
                     * @return PageSize <p>每页数目，整型</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数目，整型</p>
                     * @param _pageSize <p>每页数目，整型</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>触发ID</p>
                     * @return TriggerId <p>触发ID</p>
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>触发ID</p>
                     * @param _triggerId <p>触发ID</p>
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>触发运行名称</p>
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * <p>工作流过滤关键字，工作流名称 or 工作流ID</p>
                     */
                    std::string m_workflowKeyword;
                    bool m_workflowKeywordHasBeenSet;

                    /**
                     * <p>触发运行提交人过滤，多个提交人用英文逗号分割</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>触发提交创建时间过滤，起始时间</p>
                     */
                    std::string m_triggerStartTime;
                    bool m_triggerStartTimeHasBeenSet;

                    /**
                     * <p>触发提交创建时间过滤，结束时间</p>
                     */
                    std::string m_triggerEndTime;
                    bool m_triggerEndTimeHasBeenSet;

                    /**
                     * <p>页码，整型</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数目，整型</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>触发ID</p>
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEMANUALTRIGGERRECORDPAGEREQUEST_H_
