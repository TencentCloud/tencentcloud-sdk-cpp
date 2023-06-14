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
                     * 获取配置项id
                     * @return ConfigId 配置项id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项id
                     * @param _configId 配置项id
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
                     * 获取命名空间id
                     * @return NamespaceId 命名空间id
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间id
                     * @param _namespaceId 命名空间id
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
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 配置项id
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
                     * 命名空间id
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 集群id
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
