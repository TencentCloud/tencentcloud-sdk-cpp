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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取触发运行名称
                     * @return TriggerName 触发运行名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发运行名称
                     * @param _triggerName 触发运行名称
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
                     * 获取工作流过滤关键字，工作流名称 or 工作流ID
                     * @return WorkflowKeyword 工作流过滤关键字，工作流名称 or 工作流ID
                     * 
                     */
                    std::string GetWorkflowKeyword() const;

                    /**
                     * 设置工作流过滤关键字，工作流名称 or 工作流ID
                     * @param _workflowKeyword 工作流过滤关键字，工作流名称 or 工作流ID
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
                     * 获取触发运行提交人过滤，多个提交人用英文逗号分割
                     * @return Creator 触发运行提交人过滤，多个提交人用英文逗号分割
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置触发运行提交人过滤，多个提交人用英文逗号分割
                     * @param _creator 触发运行提交人过滤，多个提交人用英文逗号分割
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
                     * 获取触发提交创建时间过滤，起始时间
                     * @return TriggerStartTime 触发提交创建时间过滤，起始时间
                     * 
                     */
                    std::string GetTriggerStartTime() const;

                    /**
                     * 设置触发提交创建时间过滤，起始时间
                     * @param _triggerStartTime 触发提交创建时间过滤，起始时间
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
                     * 获取触发提交创建时间过滤，结束时间
                     * @return TriggerEndTime 触发提交创建时间过滤，结束时间
                     * 
                     */
                    std::string GetTriggerEndTime() const;

                    /**
                     * 设置触发提交创建时间过滤，结束时间
                     * @param _triggerEndTime 触发提交创建时间过滤，结束时间
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
                     * 获取页码，整型
                     * @return PageNumber 页码，整型
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，整型
                     * @param _pageNumber 页码，整型
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
                     * 获取每页数目，整型
                     * @return PageSize 每页数目，整型
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目，整型
                     * @param _pageSize 每页数目，整型
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 触发运行名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 工作流过滤关键字，工作流名称 or 工作流ID
                     */
                    std::string m_workflowKeyword;
                    bool m_workflowKeywordHasBeenSet;

                    /**
                     * 触发运行提交人过滤，多个提交人用英文逗号分割
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 触发提交创建时间过滤，起始时间
                     */
                    std::string m_triggerStartTime;
                    bool m_triggerStartTimeHasBeenSet;

                    /**
                     * 触发提交创建时间过滤，结束时间
                     */
                    std::string m_triggerEndTime;
                    bool m_triggerEndTimeHasBeenSet;

                    /**
                     * 页码，整型
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目，整型
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEMANUALTRIGGERRECORDPAGEREQUEST_H_
