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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFOLDERSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFOLDERSREQUEST_H_

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
                * ListResourceFolders请求参数结构体
                */
                class ListResourceFoldersRequest : public AbstractModel
                {
                public:
                    ListResourceFoldersRequest();
                    ~ListResourceFoldersRequest() = default;
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
                     * 获取资源文件夹绝对路径，取值示例
/wedata/test
                     * @return ParentFolderPath 资源文件夹绝对路径，取值示例
/wedata/test
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置资源文件夹绝对路径，取值示例
/wedata/test
                     * @param _parentFolderPath 资源文件夹绝对路径，取值示例
/wedata/test
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取数据页数，大于等于1。默认1
                     * @return PageNumber 数据页数，大于等于1。默认1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置数据页数，大于等于1。默认1
                     * @param _pageNumber 数据页数，大于等于1。默认1
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
                     * 获取每页显示的数据条数，最小为10条，最大为200 条。默认10
                     * @return PageSize 每页显示的数据条数，最小为10条，最大为200 条。默认10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示的数据条数，最小为10条，最大为200 条。默认10
                     * @param _pageSize 每页显示的数据条数，最小为10条，最大为200 条。默认10
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
                     * 资源文件夹绝对路径，取值示例
/wedata/test
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 数据页数，大于等于1。默认1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的数据条数，最小为10条，最大为200 条。默认10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFOLDERSREQUEST_H_
