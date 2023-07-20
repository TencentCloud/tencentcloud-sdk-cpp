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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWEXECUTEBYIDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWEXECUTEBYIDREQUEST_H_

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
                * DescribeWorkflowExecuteById请求参数结构体
                */
                class DescribeWorkflowExecuteByIdRequest : public AbstractModel
                {
                public:
                    DescribeWorkflowExecuteByIdRequest();
                    ~DescribeWorkflowExecuteByIdRequest() = default;
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
                     * 获取工作流ID
                     * @return WorkFlowIdList 工作流ID
                     * 
                     */
                    std::string GetWorkFlowIdList() const;

                    /**
                     * 设置工作流ID
                     * @param _workFlowIdList 工作流ID
                     * 
                     */
                    void SetWorkFlowIdList(const std::string& _workFlowIdList);

                    /**
                     * 判断参数 WorkFlowIdList 是否已赋值
                     * @return WorkFlowIdList 是否已赋值
                     * 
                     */
                    bool WorkFlowIdListHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageNumber 分页大小
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页大小
                     * @param _pageNumber 分页大小
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
                     * 获取分页索引
                     * @return PageSize 分页索引
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页索引
                     * @param _pageSize 分页索引
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
                     * 工作流ID
                     */
                    std::string m_workFlowIdList;
                    bool m_workFlowIdListHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页索引
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWEXECUTEBYIDREQUEST_H_
