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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListProjects请求参数结构体
                */
                class ListProjectsRequest : public AbstractModel
                {
                public:
                    ListProjectsRequest();
                    ~ListProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id列表
                     * @return ProjectIds 项目id列表
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目id列表
                     * @param _projectIds 项目id列表
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取项目名或项目唯一标识名，支持模糊搜索
                     * @return ProjectName 项目名或项目唯一标识名，支持模糊搜索
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名或项目唯一标识名，支持模糊搜索
                     * @param _projectName 项目名或项目唯一标识名，支持模糊搜索
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目状态，可选值：0（禁用）、1（正常）
                     * @return Status 项目状态，可选值：0（禁用）、1（正常）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置项目状态，可选值：0（禁用）、1（正常）
                     * @param _status 项目状态，可选值：0（禁用）、1（正常）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目模式，可选值：SIMPLE、STANDARD
                     * @return ProjectModel 项目模式，可选值：SIMPLE、STANDARD
                     * 
                     */
                    std::string GetProjectModel() const;

                    /**
                     * 设置项目模式，可选值：SIMPLE、STANDARD
                     * @param _projectModel 项目模式，可选值：SIMPLE、STANDARD
                     * 
                     */
                    void SetProjectModel(const std::string& _projectModel);

                    /**
                     * 判断参数 ProjectModel 是否已赋值
                     * @return ProjectModel 是否已赋值
                     * 
                     */
                    bool ProjectModelHasBeenSet() const;

                    /**
                     * 获取请求的数据页数，用于翻页
                     * @return PageNumber 请求的数据页数，用于翻页
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置请求的数据页数，用于翻页
                     * @param _pageNumber 请求的数据页数，用于翻页
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
                     * 获取每页显示的条数，默认为 10 条
                     * @return PageSize 每页显示的条数，默认为 10 条
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示的条数，默认为 10 条
                     * @param _pageSize 每页显示的条数，默认为 10 条
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
                     * 项目id列表
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 项目名或项目唯一标识名，支持模糊搜索
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目状态，可选值：0（禁用）、1（正常）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目模式，可选值：SIMPLE、STANDARD
                     */
                    std::string m_projectModel;
                    bool m_projectModelHasBeenSet;

                    /**
                     * 请求的数据页数，用于翻页
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的条数，默认为 10 条
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTSREQUEST_H_
