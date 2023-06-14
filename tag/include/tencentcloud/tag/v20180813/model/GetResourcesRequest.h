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
                     * 获取资源六段式列表。腾讯云使用资源六段式描述一个资源。
例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。
N取值范围：0~9
                     * @return ResourceList 资源六段式列表。腾讯云使用资源六段式描述一个资源。
例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。
N取值范围：0~9
                     * 
                     */
                    std::vector<std::string> GetResourceList() const;

                    /**
                     * 设置资源六段式列表。腾讯云使用资源六段式描述一个资源。
例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。
N取值范围：0~9
                     * @param _resourceList 资源六段式列表。腾讯云使用资源六段式描述一个资源。
例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。
N取值范围：0~9
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
                     * 获取标签键和标签值。
指定多个标签，会查询同时绑定了该多个标签的资源。
N取值范围：0~5。
每个TagFilters中的TagValue最多支持10个
                     * @return TagFilters 标签键和标签值。
指定多个标签，会查询同时绑定了该多个标签的资源。
N取值范围：0~5。
每个TagFilters中的TagValue最多支持10个
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签键和标签值。
指定多个标签，会查询同时绑定了该多个标签的资源。
N取值范围：0~5。
每个TagFilters中的TagValue最多支持10个
                     * @param _tagFilters 标签键和标签值。
指定多个标签，会查询同时绑定了该多个标签的资源。
N取值范围：0~5。
每个TagFilters中的TagValue最多支持10个
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
                     * 获取从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     * @return PaginationToken 从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 设置从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     * @param _paginationToken 从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
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
                     * 获取每一页返回的数据最大条数，最大200。
缺省值：50。
                     * @return MaxResults 每一页返回的数据最大条数，最大200。
缺省值：50。
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置每一页返回的数据最大条数，最大200。
缺省值：50。
                     * @param _maxResults 每一页返回的数据最大条数，最大200。
缺省值：50。
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
                     * 资源六段式列表。腾讯云使用资源六段式描述一个资源。
例如：ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
如果传入了此参数会返回所有匹配的资源列表，指定的MaxResults会失效。
N取值范围：0~9
                     */
                    std::vector<std::string> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * 标签键和标签值。
指定多个标签，会查询同时绑定了该多个标签的资源。
N取值范围：0~5。
每个TagFilters中的TagValue最多支持10个
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * 每一页返回的数据最大条数，最大200。
缺省值：50。
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESREQUEST_H_
