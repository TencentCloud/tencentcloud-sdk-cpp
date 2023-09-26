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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeDatasourceList请求参数结构体
                */
                class DescribeDatasourceListRequest : public AbstractModel
                {
                public:
                    DescribeDatasourceListRequest();
                    ~DescribeDatasourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return ProjectId 无
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置无
                     * @param _projectId 无
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取返回所有页面，默认false
                     * @return AllPage 返回所有页面，默认false
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置返回所有页面，默认false
                     * @param _allPage 返回所有页面，默认false
                     * 
                     */
                    void SetAllPage(const bool& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                    /**
                     * 获取数据库名称检索
                     * @return DbName 数据库名称检索
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称检索
                     * @param _dbName 数据库名称检索
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取无
                     * @return PageNo 无
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置无
                     * @param _pageNo 无
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
                     * 获取无
                     * @return PageSize 无
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置无
                     * @param _pageSize 无
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
                     * 获取搜索关键词
                     * @return Keyword 搜索关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键词
                     * @param _keyword 搜索关键词
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
                     * 获取过滤无权限列表的参数（0 全量，1 使用权限，2 编辑权限）
                     * @return PermissionType 过滤无权限列表的参数（0 全量，1 使用权限，2 编辑权限）
                     * 
                     */
                    int64_t GetPermissionType() const;

                    /**
                     * 设置过滤无权限列表的参数（0 全量，1 使用权限，2 编辑权限）
                     * @param _permissionType 过滤无权限列表的参数（0 全量，1 使用权限，2 编辑权限）
                     * 
                     */
                    void SetPermissionType(const int64_t& _permissionType);

                    /**
                     * 判断参数 PermissionType 是否已赋值
                     * @return PermissionType 是否已赋值
                     * 
                     */
                    bool PermissionTypeHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 返回所有页面，默认false
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 数据库名称检索
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 过滤无权限列表的参数（0 全量，1 使用权限，2 编辑权限）
                     */
                    int64_t m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
