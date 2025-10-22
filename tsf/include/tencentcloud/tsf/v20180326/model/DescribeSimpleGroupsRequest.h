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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEGROUPSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEGROUPSREQUEST_H_

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
                * DescribeSimpleGroups请求参数结构体
                */
                class DescribeSimpleGroupsRequest : public AbstractModel
                {
                public:
                    DescribeSimpleGroupsRequest();
                    ~DescribeSimpleGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照【部署组ID】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @return GroupIdList 按照【部署组ID】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    std::vector<std::string> GetGroupIdList() const;

                    /**
                     * 设置按照【部署组ID】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @param _groupIdList 按照【部署组ID】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    void SetGroupIdList(const std::vector<std::string>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     * 
                     */
                    bool GroupIdListHasBeenSet() const;

                    /**
                     * 获取按照【应用ID】进行过滤，不填写时查询全量。可通过调用[DescribeApplications](https://cloud.tencent.com/document/product/649/36090)查询已创建的应用列表或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * @return ApplicationId 按照【应用ID】进行过滤，不填写时查询全量。可通过调用[DescribeApplications](https://cloud.tencent.com/document/product/649/36090)查询已创建的应用列表或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置按照【应用ID】进行过滤，不填写时查询全量。可通过调用[DescribeApplications](https://cloud.tencent.com/document/product/649/36090)查询已创建的应用列表或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * @param _applicationId 按照【应用ID】进行过滤，不填写时查询全量。可通过调用[DescribeApplications](https://cloud.tencent.com/document/product/649/36090)查询已创建的应用列表或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
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
                     * 获取按照【集群ID】进行过滤，不填写时查询全量。可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=docker)进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。
                     * @return ClusterId 按照【集群ID】进行过滤，不填写时查询全量。可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=docker)进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置按照【集群ID】进行过滤，不填写时查询全量。可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=docker)进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。
                     * @param _clusterId 按照【集群ID】进行过滤，不填写时查询全量。可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=docker)进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。
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
                     * 获取按照【命名空间ID】进行过滤，不填写时查询全量。可通过调用[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     * @return NamespaceId 按照【命名空间ID】进行过滤，不填写时查询全量。可通过调用[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置按照【命名空间ID】进行过滤，不填写时查询全量。可通过调用[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     * @param _namespaceId 按照【命名空间ID】进行过滤，不填写时查询全量。可通过调用[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
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
                     * 获取每页条数，默认值20，无上限
                     * @return Limit 每页条数，默认值20，无上限
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数，默认值20，无上限
                     * @param _limit 每页条数，默认值20，无上限
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
                     * 获取起始偏移量，默认值0
                     * @return Offset 起始偏移量，默认值0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始偏移量，默认值0
                     * @param _offset 起始偏移量，默认值0
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
                     * 获取部署组ID，不填写时查询全量
                     * @return GroupId 部署组ID，不填写时查询全量
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，不填写时查询全量
                     * @param _groupId 部署组ID，不填写时查询全量
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取模糊查询，部署组名称，不填写时查询全量
                     * @return SearchWord 模糊查询，部署组名称，不填写时查询全量
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置模糊查询，部署组名称，不填写时查询全量
                     * @param _searchWord 模糊查询，部署组名称，不填写时查询全量
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
                     * 获取部署组类型，精确过滤字段，M：service mesh, P：原生应用， G：网关应用
                     * @return AppMicroServiceType 部署组类型，精确过滤字段，M：service mesh, P：原生应用， G：网关应用
                     * 
                     */
                    std::string GetAppMicroServiceType() const;

                    /**
                     * 设置部署组类型，精确过滤字段，M：service mesh, P：原生应用， G：网关应用
                     * @param _appMicroServiceType 部署组类型，精确过滤字段，M：service mesh, P：原生应用， G：网关应用
                     * 
                     */
                    void SetAppMicroServiceType(const std::string& _appMicroServiceType);

                    /**
                     * 判断参数 AppMicroServiceType 是否已赋值
                     * @return AppMicroServiceType 是否已赋值
                     * 
                     */
                    bool AppMicroServiceTypeHasBeenSet() const;

                    /**
                     * 获取按照【部署组名称】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @return GroupName 按照【部署组名称】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置按照【部署组名称】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @param _groupName 按照【部署组名称】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 按照【部署组ID】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     */
                    std::vector<std::string> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                    /**
                     * 按照【应用ID】进行过滤，不填写时查询全量。可通过调用[DescribeApplications](https://cloud.tencent.com/document/product/649/36090)查询已创建的应用列表或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 按照【集群ID】进行过滤，不填写时查询全量。可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=docker)进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 按照【命名空间ID】进行过滤，不填写时查询全量。可通过调用[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 每页条数，默认值20，无上限
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始偏移量，默认值0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 部署组ID，不填写时查询全量
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 模糊查询，部署组名称，不填写时查询全量
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 部署组类型，精确过滤字段，M：service mesh, P：原生应用， G：网关应用
                     */
                    std::string m_appMicroServiceType;
                    bool m_appMicroServiceTypeHasBeenSet;

                    /**
                     * 按照【部署组名称】进行过滤，不填写时查询全量。可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-zvw6zp9a&tab=publish&subTab=group)进行查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEGROUPSREQUEST_H_
