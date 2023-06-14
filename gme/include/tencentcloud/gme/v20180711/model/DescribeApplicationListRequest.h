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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/Tag.h>
#include <tencentcloud/gme/v20180711/model/Filter.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeApplicationList请求参数结构体
                */
                class DescribeApplicationListRequest : public AbstractModel
                {
                public:
                    DescribeApplicationListRequest();
                    ~DescribeApplicationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project
                     * @return ProjectId 项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project
                     * @param _projectId 项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页码ID，0表示第一页，以此后推。默认填0
                     * @return PageNo 页码ID，0表示第一页，以此后推。默认填0
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置页码ID，0表示第一页，以此后推。默认填0
                     * @param _pageNo 页码ID，0表示第一页，以此后推。默认填0
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
                     * 获取每页展示应用数量。默认填200
                     * @return PageSize 每页展示应用数量。默认填200
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页展示应用数量。默认填200
                     * @param _pageSize 每页展示应用数量。默认填200
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
                     * 获取所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用
                     * @return SearchText 所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用
                     * 
                     */
                    std::string GetSearchText() const;

                    /**
                     * 设置所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用
                     * @param _searchText 所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用
                     * 
                     */
                    void SetSearchText(const std::string& _searchText);

                    /**
                     * 判断参数 SearchText 是否已赋值
                     * @return SearchText 是否已赋值
                     * 
                     */
                    bool SearchTextHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagSet 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签列表
                     * @param _tagSet 标签列表
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取查找过滤关键字列表
                     * @return Filters 查找过滤关键字列表
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查找过滤关键字列表
                     * @param _filters 查找过滤关键字列表
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码ID，0表示第一页，以此后推。默认填0
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 每页展示应用数量。默认填200
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用
                     */
                    std::string m_searchText;
                    bool m_searchTextHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 查找过滤关键字列表
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_
