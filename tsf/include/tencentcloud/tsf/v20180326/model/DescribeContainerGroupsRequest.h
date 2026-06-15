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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINERGROUPSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeContainerGroups请求参数结构体
                */
                class DescribeContainerGroupsRequest : public AbstractModel
                {
                public:
                    DescribeContainerGroupsRequest();
                    ~DescribeContainerGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分组所属【应用ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36090">DescribeApplications</a>查询已创建的应用列表或登录<a href="https://console.cloud.tencent.com/tsf/app?rid=1">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36094">CreateApplication</a>创建新的应用。</p>
                     * @return ApplicationId <p>分组所属【应用ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36090">DescribeApplications</a>查询已创建的应用列表或登录<a href="https://console.cloud.tencent.com/tsf/app?rid=1">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36094">CreateApplication</a>创建新的应用。</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>分组所属【应用ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36090">DescribeApplications</a>查询已创建的应用列表或登录<a href="https://console.cloud.tencent.com/tsf/app?rid=1">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36094">CreateApplication</a>创建新的应用。</p>
                     * @param _applicationId <p>分组所属【应用ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36090">DescribeApplications</a>查询已创建的应用列表或登录<a href="https://console.cloud.tencent.com/tsf/app?rid=1">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36094">CreateApplication</a>创建新的应用。</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>搜索字段，模糊搜索groupName字段</p>
                     * @return SearchWord <p>搜索字段，模糊搜索groupName字段</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>搜索字段，模糊搜索groupName字段</p>
                     * @param _searchWord <p>搜索字段，模糊搜索groupName字段</p>
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
                     * 获取<p>排序字段，默认为 createTime字段，支持id， name， createTime</p>
                     * @return OrderBy <p>排序字段，默认为 createTime字段，支持id， name， createTime</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段，默认为 createTime字段，支持id， name， createTime</p>
                     * @param _orderBy <p>排序字段，默认为 createTime字段，支持id， name， createTime</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，默认为1：倒序排序，0：正序，1：倒序</p>
                     * @return OrderType <p>排序方式，默认为1：倒序排序，0：正序，1：倒序</p>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置<p>排序方式，默认为1：倒序排序，0：正序，1：倒序</p>
                     * @param _orderType <p>排序方式，默认为1：倒序排序，0：正序，1：倒序</p>
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，取值从0开始</p>
                     * @return Offset <p>偏移量，取值从0开始</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，取值从0开始</p>
                     * @param _offset <p>偏移量，取值从0开始</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页个数，默认为20， 取值应为1~50</p>
                     * @return Limit <p>分页个数，默认为20， 取值应为1~50</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页个数，默认为20， 取值应为1~50</p>
                     * @param _limit <p>分页个数，默认为20， 取值应为1~50</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分组所属【集群ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/85857">DescribeClusters</a>查询已创建的集群列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=docker">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36049">CreateCluster</a>创建新的集群。</p>
                     * @return ClusterId <p>分组所属【集群ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/85857">DescribeClusters</a>查询已创建的集群列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=docker">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36049">CreateCluster</a>创建新的集群。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>分组所属【集群ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/85857">DescribeClusters</a>查询已创建的集群列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=docker">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36049">CreateCluster</a>创建新的集群。</p>
                     * @param _clusterId <p>分组所属【集群ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/85857">DescribeClusters</a>查询已创建的集群列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=docker">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36049">CreateCluster</a>创建新的集群。</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>分组所属【命名空间 ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36096">DescribeSimpleNamespaces</a>查询已创建的命名空间列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=namespace">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * @return NamespaceId <p>分组所属【命名空间 ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36096">DescribeSimpleNamespaces</a>查询已创建的命名空间列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=namespace">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置<p>分组所属【命名空间 ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36096">DescribeSimpleNamespaces</a>查询已创建的命名空间列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=namespace">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * @param _namespaceId <p>分组所属【命名空间 ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36096">DescribeSimpleNamespaces</a>查询已创建的命名空间列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=namespace">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取<p>部署组ID列表</p>
                     * @return GroupIdList <p>部署组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIdList() const;

                    /**
                     * 设置<p>部署组ID列表</p>
                     * @param _groupIdList <p>部署组ID列表</p>
                     * 
                     */
                    void SetGroupIdList(const std::vector<std::string>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     * 
                     */
                    bool GroupIdListHasBeenSet() const;

                private:

                    /**
                     * <p>分组所属【应用ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36090">DescribeApplications</a>查询已创建的应用列表或登录<a href="https://console.cloud.tencent.com/tsf/app?rid=1">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36094">CreateApplication</a>创建新的应用。</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>搜索字段，模糊搜索groupName字段</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>排序字段，默认为 createTime字段，支持id， name， createTime</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方式，默认为1：倒序排序，0：正序，1：倒序</p>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>偏移量，取值从0开始</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页个数，默认为20， 取值应为1~50</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分组所属【集群ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/85857">DescribeClusters</a>查询已创建的集群列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=docker">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36049">CreateCluster</a>创建新的集群。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>分组所属【命名空间 ID】，可通过调用<a href="https://cloud.tencent.com/document/product/649/36096">DescribeSimpleNamespaces</a>查询已创建的命名空间列表或登录<a href="https://console.cloud.tencent.com/tsf/resource?rid=1&amp;tab=namespace">控制台</a>进行查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * <p>部署组ID列表</p>
                     */
                    std::vector<std::string> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINERGROUPSREQUEST_H_
