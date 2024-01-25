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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEGLOBALWORKFLOWDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEGLOBALWORKFLOWDSREQUEST_H_

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
                * DescribeGlobalWorkflowDs请求参数结构体
                */
                class DescribeGlobalWorkflowDsRequest : public AbstractModel
                {
                public:
                    DescribeGlobalWorkflowDsRequest();
                    ~DescribeGlobalWorkflowDsRequest() = default;
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
                     * 获取分页号
                     * @return PageNumber 分页号
                     * 
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置分页号
                     * @param _pageNumber 分页号
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
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取关键字，用于对工作流名称、项目名称以及责任人模糊匹配
                     * @return Keyword 关键字，用于对工作流名称、项目名称以及责任人模糊匹配
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字，用于对工作流名称、项目名称以及责任人模糊匹配
                     * @param _keyword 关键字，用于对工作流名称、项目名称以及责任人模糊匹配
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取需过滤的工作流 ID 列表，可以为空
                     * @return IgnoreWorkflowIds 需过滤的工作流 ID 列表，可以为空
                     * 
                     */
                    std::vector<std::string> GetIgnoreWorkflowIds() const;

                    /**
                     * 设置需过滤的工作流 ID 列表，可以为空
                     * @param _ignoreWorkflowIds 需过滤的工作流 ID 列表，可以为空
                     * 
                     */
                    void SetIgnoreWorkflowIds(const std::vector<std::string>& _ignoreWorkflowIds);

                    /**
                     * 判断参数 IgnoreWorkflowIds 是否已赋值
                     * @return IgnoreWorkflowIds 是否已赋值
                     * 
                     */
                    bool IgnoreWorkflowIdsHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页号
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 关键字，用于对工作流名称、项目名称以及责任人模糊匹配
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 需过滤的工作流 ID 列表，可以为空
                     */
                    std::vector<std::string> m_ignoreWorkflowIds;
                    bool m_ignoreWorkflowIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEGLOBALWORKFLOWDSREQUEST_H_
