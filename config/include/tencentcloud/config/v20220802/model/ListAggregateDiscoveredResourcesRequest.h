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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Filter.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListAggregateDiscoveredResources请求参数结构体
                */
                class ListAggregateDiscoveredResourcesRequest : public AbstractModel
                {
                public:
                    ListAggregateDiscoveredResourcesRequest();
                    ~ListAggregateDiscoveredResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>每页显示数量</p>
                     * @return MaxResults <p>每页显示数量</p>
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置<p>每页显示数量</p>
                     * @param _maxResults <p>每页显示数量</p>
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>账号组ID</p>
                     * @return AccountGroupId <p>账号组ID</p>
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置<p>账号组ID</p>
                     * @param _accountGroupId <p>账号组ID</p>
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>resourceName：资源名  resourceId ：资源ID resourceType：资源类型</p>
                     * @return Filters <p>resourceName：资源名  resourceId ：资源ID resourceType：资源类型</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>resourceName：资源名  resourceId ：资源ID resourceType：资源类型</p>
                     * @param _filters <p>resourceName：资源名  resourceId ：资源ID resourceType：资源类型</p>
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
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>下一页token</p>
                     * @return NextToken <p>下一页token</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>下一页token</p>
                     * @param _nextToken <p>下一页token</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<p>排序方式 asc、desc</p>
                     * @return OrderType <p>排序方式 asc、desc</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序方式 asc、desc</p>
                     * @param _orderType <p>排序方式 asc、desc</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * <p>每页显示数量</p>
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>账号组ID</p>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>resourceName：资源名  resourceId ：资源ID resourceType：资源类型</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>下一页token</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>排序方式 asc、desc</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_H_
