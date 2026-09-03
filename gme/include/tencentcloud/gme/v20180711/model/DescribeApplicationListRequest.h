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
                     * 获取<p>项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project</p>
                     * @return ProjectId <p>项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project</p>
                     * @param _projectId <p>项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project</p>
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
                     * 获取<p>页码ID，0表示第一页，以此后推。默认填0</p>
                     * @return PageNo <p>页码ID，0表示第一页，以此后推。默认填0</p>
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置<p>页码ID，0表示第一页，以此后推。默认填0</p>
                     * @param _pageNo <p>页码ID，0表示第一页，以此后推。默认填0</p>
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
                     * 获取<p>每页展示应用数量。默认填200</p>
                     * @return PageSize <p>每页展示应用数量。默认填200</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页展示应用数量。默认填200</p>
                     * @param _pageSize <p>每页展示应用数量。默认填200</p>
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
                     * 获取<p>所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用</p>
                     * @return SearchText <p>所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用</p>
                     * 
                     */
                    std::string GetSearchText() const;

                    /**
                     * 设置<p>所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用</p>
                     * @param _searchText <p>所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用</p>
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
                     * 获取<p>标签列表</p>
                     * @return TagSet <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tagSet <p>标签列表</p>
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
                     * 获取<p>查找过滤关键字列表</p>
                     * @return Filters <p>查找过滤关键字列表</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查找过滤关键字列表</p>
                     * @param _filters <p>查找过滤关键字列表</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>是否查询GME3.0应用</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @return NewVersion <p>是否查询GME3.0应用</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetNewVersion() const;

                    /**
                     * 设置<p>是否查询GME3.0应用</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @param _newVersion <p>是否查询GME3.0应用</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    void SetNewVersion(const uint64_t& _newVersion);

                    /**
                     * 判断参数 NewVersion 是否已赋值
                     * @return NewVersion 是否已赋值
                     * 
                     */
                    bool NewVersionHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID，0表示默认项目，-1表示所有项目，如果需要查找具体项目下的应用列表，请填入具体项目ID，项目ID在项目管理中查看 https://console.cloud.tencent.com/project</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>页码ID，0表示第一页，以此后推。默认填0</p>
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>每页展示应用数量。默认填200</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>所查找应用名称的关键字，支持模糊匹配查找。空串表示查询所有应用</p>
                     */
                    std::string m_searchText;
                    bool m_searchTextHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>查找过滤关键字列表</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>是否查询GME3.0应用</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     */
                    uint64_t m_newVersion;
                    bool m_newVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_
