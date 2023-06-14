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
                     * 获取部署组ID列表，不填写时查询全量
                     * @return GroupIdList 部署组ID列表，不填写时查询全量
                     * 
                     */
                    std::vector<std::string> GetGroupIdList() const;

                    /**
                     * 设置部署组ID列表，不填写时查询全量
                     * @param _groupIdList 部署组ID列表，不填写时查询全量
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
                     * 获取应用ID，不填写时查询全量
                     * @return ApplicationId 应用ID，不填写时查询全量
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID，不填写时查询全量
                     * @param _applicationId 应用ID，不填写时查询全量
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
                     * 获取集群ID，不填写时查询全量
                     * @return ClusterId 集群ID，不填写时查询全量
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，不填写时查询全量
                     * @param _clusterId 集群ID，不填写时查询全量
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
                     * 获取命名空间ID，不填写时查询全量
                     * @return NamespaceId 命名空间ID，不填写时查询全量
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID，不填写时查询全量
                     * @param _namespaceId 命名空间ID，不填写时查询全量
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
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
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
                     * 获取起始偏移量
                     * @return Offset 起始偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始偏移量
                     * @param _offset 起始偏移量
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

                private:

                    /**
                     * 部署组ID列表，不填写时查询全量
                     */
                    std::vector<std::string> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                    /**
                     * 应用ID，不填写时查询全量
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 集群ID，不填写时查询全量
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间ID，不填写时查询全量
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始偏移量
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLEGROUPSREQUEST_H_
