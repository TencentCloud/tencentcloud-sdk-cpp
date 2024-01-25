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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWCANVASOPLOGSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWCANVASOPLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasOplogRequestFilter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeWorkflowCanvasOpLogs请求参数结构体
                */
                class DescribeWorkflowCanvasOpLogsRequest : public AbstractModel
                {
                public:
                    DescribeWorkflowCanvasOpLogsRequest();
                    ~DescribeWorkflowCanvasOpLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤器
                     * @return Filter 过滤器
                     * 
                     */
                    DescribeWorkflowCanvasOplogRequestFilter GetFilter() const;

                    /**
                     * 设置过滤器
                     * @param _filter 过滤器
                     * 
                     */
                    void SetFilter(const DescribeWorkflowCanvasOplogRequestFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

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
                     * 获取页号
                     * @return PageNumber 页号
                     * 
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置页号
                     * @param _pageNumber 页号
                     * 
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 过滤器
                     */
                    DescribeWorkflowCanvasOplogRequestFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页号
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWCANVASOPLOGSREQUEST_H_
