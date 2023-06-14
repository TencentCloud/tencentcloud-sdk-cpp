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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/solar/v20181011/model/Filters.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeProjects请求参数结构体
                */
                class DescribeProjectsRequest : public AbstractModel
                {
                public:
                    DescribeProjectsRequest();
                    ~DescribeProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取页面大小
                     * @return PageSize 页面大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页面大小
                     * @param _pageSize 页面大小
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
                     * 获取过滤规则
                     * @return SearchWord 过滤规则
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置过滤规则
                     * @param _searchWord 过滤规则
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取部门范围过滤
                     * @return Filters 部门范围过滤
                     * 
                     */
                    Filters GetFilters() const;

                    /**
                     * 设置部门范围过滤
                     * @param _filters 部门范围过滤
                     * 
                     */
                    void SetFilters(const Filters& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取项目状态, 0:编辑中 1:运营中 2:已下线 3:已删除 4:审批中
                     * @return ProjectStatus 项目状态, 0:编辑中 1:运营中 2:已下线 3:已删除 4:审批中
                     * 
                     */
                    int64_t GetProjectStatus() const;

                    /**
                     * 设置项目状态, 0:编辑中 1:运营中 2:已下线 3:已删除 4:审批中
                     * @param _projectStatus 项目状态, 0:编辑中 1:运营中 2:已下线 3:已删除 4:审批中
                     * 
                     */
                    void SetProjectStatus(const int64_t& _projectStatus);

                    /**
                     * 判断参数 ProjectStatus 是否已赋值
                     * @return ProjectStatus 是否已赋值
                     * 
                     */
                    bool ProjectStatusHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 页面大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤规则
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 部门范围过滤
                     */
                    Filters m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 项目状态, 0:编辑中 1:运营中 2:已下线 3:已删除 4:审批中
                     */
                    int64_t m_projectStatus;
                    bool m_projectStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTSREQUEST_H_
