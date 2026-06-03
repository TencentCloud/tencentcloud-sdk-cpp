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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetResources请求参数结构体
                */
                class GetResourcesRequest : public AbstractModel
                {
                public:
                    GetResourcesRequest();
                    ~GetResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源六段式列表。腾讯云使用资源六段式描述一个资源。<br>例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。<br>如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。<br>N取值范围：0~9</p>
                     * @return ResourceList <p>资源六段式列表。腾讯云使用资源六段式描述一个资源。<br>例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。<br>如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。<br>N取值范围：0~9</p>
                     * 
                     */
                    std::vector<std::string> GetResourceList() const;

                    /**
                     * 设置<p>资源六段式列表。腾讯云使用资源六段式描述一个资源。<br>例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。<br>如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。<br>N取值范围：0~9</p>
                     * @param _resourceList <p>资源六段式列表。腾讯云使用资源六段式描述一个资源。<br>例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。<br>如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。<br>N取值范围：0~9</p>
                     * 
                     */
                    void SetResourceList(const std::vector<std::string>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取<p>标签过滤数组，最多支持6组标签。会查询同时绑定了这多组标签的资源。<br>每组标签中的TagValue最多支持10个。</p>
                     * @return TagFilters <p>标签过滤数组，最多支持6组标签。会查询同时绑定了这多组标签的资源。<br>每组标签中的TagValue最多支持10个。</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤数组，最多支持6组标签。会查询同时绑定了这多组标签的资源。<br>每组标签中的TagValue最多支持10个。</p>
                     * @param _tagFilters <p>标签过滤数组，最多支持6组标签。会查询同时绑定了这多组标签的资源。<br>每组标签中的TagValue最多支持10个。</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取<p>从上一页的响应中获取的下一页的Token值。<br>如果是第一次请求，设置为空。</p>
                     * @return PaginationToken <p>从上一页的响应中获取的下一页的Token值。<br>如果是第一次请求，设置为空。</p>
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 设置<p>从上一页的响应中获取的下一页的Token值。<br>如果是第一次请求，设置为空。</p>
                     * @param _paginationToken <p>从上一页的响应中获取的下一页的Token值。<br>如果是第一次请求，设置为空。</p>
                     * 
                     */
                    void SetPaginationToken(const std::string& _paginationToken);

                    /**
                     * 判断参数 PaginationToken 是否已赋值
                     * @return PaginationToken 是否已赋值
                     * 
                     */
                    bool PaginationTokenHasBeenSet() const;

                    /**
                     * 获取<p>每一页返回的数据最大条数，最大200。<br>缺省值：50。</p>
                     * @return MaxResults <p>每一页返回的数据最大条数，最大200。<br>缺省值：50。</p>
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置<p>每一页返回的数据最大条数，最大200。<br>缺省值：50。</p>
                     * @param _maxResults <p>每一页返回的数据最大条数，最大200。<br>缺省值：50。</p>
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                private:

                    /**
                     * <p>资源六段式列表。腾讯云使用资源六段式描述一个资源。<br>例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。<br>如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。<br>N取值范围：0~9</p>
                     */
                    std::vector<std::string> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * <p>标签过滤数组，最多支持6组标签。会查询同时绑定了这多组标签的资源。<br>每组标签中的TagValue最多支持10个。</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>从上一页的响应中获取的下一页的Token值。<br>如果是第一次请求，设置为空。</p>
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * <p>每一页返回的数据最大条数，最大200。<br>缺省值：50。</p>
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESREQUEST_H_
