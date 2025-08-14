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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_ASSOCIATECONFIGWITHGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_ASSOCIATECONFIGWITHGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * AssociateConfigWithGroup请求参数结构体
                */
                class AssociateConfigWithGroupRequest : public AbstractModel
                {
                public:
                    AssociateConfigWithGroupRequest();
                    ~AssociateConfigWithGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置项ID
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     * @return ConfigId 配置项ID
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项ID
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     * @param _configId 配置项ID
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取部署组信息
                     * @return Groups 部署组信息
                     * 
                     */
                    std::vector<GroupInfo> GetGroups() const;

                    /**
                     * 设置部署组信息
                     * @param _groups 部署组信息
                     * 
                     */
                    void SetGroups(const std::vector<GroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取是否选择全部投递，1 表示全部，0或不填表示非全部
                     * @return SelectAll 是否选择全部投递，1 表示全部，0或不填表示非全部
                     * 
                     */
                    int64_t GetSelectAll() const;

                    /**
                     * 设置是否选择全部投递，1 表示全部，0或不填表示非全部
                     * @param _selectAll 是否选择全部投递，1 表示全部，0或不填表示非全部
                     * 
                     */
                    void SetSelectAll(const int64_t& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取命名空间ID
可通过[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已经创建的命名空间，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)查看
                     * @return NamespaceId 命名空间ID
可通过[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已经创建的命名空间，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)查看
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
可通过[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已经创建的命名空间，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)查看
                     * @param _namespaceId 命名空间ID
可通过[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已经创建的命名空间，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)查看
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
                     * 获取集群ID
可通过[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已经创建的集群列表，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1)查看
                     * @return ClusterId 集群ID
可通过[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已经创建的集群列表，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1)查看
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
可通过[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已经创建的集群列表，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1)查看
                     * @param _clusterId 集群ID
可通过[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已经创建的集群列表，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1)查看
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
                     * 获取模糊搜索关键词
                     * @return SearchWord 模糊搜索关键词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置模糊搜索关键词
                     * @param _searchWord 模糊搜索关键词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * 配置项ID
可通过调用[DescribeBusinessLogConfigs](https://cloud.tencent.com/document/product/649/75777)查询已创建的日志配置项列表或登录[控制台](https://console.cloud.tencent.com/tsf/observable/log?rid=1)进行查看
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 部署组信息
                     */
                    std::vector<GroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 是否选择全部投递，1 表示全部，0或不填表示非全部
                     */
                    int64_t m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * 命名空间ID
可通过[DescribeSimpleNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已经创建的命名空间，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=namespace)查看
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 集群ID
可通过[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已经创建的集群列表，也可以通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1)查看
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 模糊搜索关键词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_ASSOCIATECONFIGWITHGROUPREQUEST_H_
