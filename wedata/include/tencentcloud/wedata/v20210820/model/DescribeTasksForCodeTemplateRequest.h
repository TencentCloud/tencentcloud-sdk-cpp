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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKSFORCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKSFORCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OrderCondition.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTasksForCodeTemplate请求参数结构体
                */
                class DescribeTasksForCodeTemplateRequest : public AbstractModel
                {
                public:
                    DescribeTasksForCodeTemplateRequest();
                    ~DescribeTasksForCodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取页码，最小1
                     * @return PageNumber 页码，最小1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，最小1
                     * @param _pageNumber 页码，最小1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取单页大小，最小10，最大200
                     * @return PageSize 单页大小，最小10，最大200
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置单页大小，最小10，最大200
                     * @param _pageSize 单页大小，最小10，最大200
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
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取工作流id列表
                     * @return WorkflowIdList 工作流id列表
                     * 
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置工作流id列表
                     * @param _workflowIdList 工作流id列表
                     * 
                     */
                    void SetWorkflowIdList(const std::vector<std::string>& _workflowIdList);

                    /**
                     * 判断参数 WorkflowIdList 是否已赋值
                     * @return WorkflowIdList 是否已赋值
                     * 
                     */
                    bool WorkflowIdListHasBeenSet() const;

                    /**
                     * 获取责任人名列表
                     * @return OwnerIdList 责任人名列表
                     * 
                     */
                    std::vector<std::string> GetOwnerIdList() const;

                    /**
                     * 设置责任人名列表
                     * @param _ownerIdList 责任人名列表
                     * 
                     */
                    void SetOwnerIdList(const std::vector<std::string>& _ownerIdList);

                    /**
                     * 判断参数 OwnerIdList 是否已赋值
                     * @return OwnerIdList 是否已赋值
                     * 
                     */
                    bool OwnerIdListHasBeenSet() const;

                    /**
                     * 获取任务名
                     * @return TaskName 任务名
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
                     * @param _taskName 任务名
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取排序提交，目前只支持workflowName
                     * @return OrderCondition 排序提交，目前只支持workflowName
                     * 
                     */
                    OrderCondition GetOrderCondition() const;

                    /**
                     * 设置排序提交，目前只支持workflowName
                     * @param _orderCondition 排序提交，目前只支持workflowName
                     * 
                     */
                    void SetOrderCondition(const OrderCondition& _orderCondition);

                    /**
                     * 判断参数 OrderCondition 是否已赋值
                     * @return OrderCondition 是否已赋值
                     * 
                     */
                    bool OrderConditionHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码，最小1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 单页大小，最小10，最大200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 模板id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 工作流id列表
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * 责任人名列表
                     */
                    std::vector<std::string> m_ownerIdList;
                    bool m_ownerIdListHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 排序提交，目前只支持workflowName
                     */
                    OrderCondition m_orderCondition;
                    bool m_orderConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKSFORCODETEMPLATEREQUEST_H_
