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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Tag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateGroup请求参数结构体
                */
                class CreateGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupRequest();
                    ~CreateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组所属的应用ID
                     * @return ApplicationId 部署组所属的应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置部署组所属的应用ID
                     * @param _applicationId 部署组所属的应用ID
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
                     * 获取部署组所属命名空间ID
                     * @return NamespaceId 部署组所属命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置部署组所属命名空间ID
                     * @param _namespaceId 部署组所属命名空间ID
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
                     * 获取部署组名称
                     * @return GroupName 部署组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
                     * @param _groupName 部署组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取部署组描述
                     * @return GroupDesc 部署组描述
                     * 
                     */
                    std::string GetGroupDesc() const;

                    /**
                     * 设置部署组描述
                     * @param _groupDesc 部署组描述
                     * 
                     */
                    void SetGroupDesc(const std::string& _groupDesc);

                    /**
                     * 判断参数 GroupDesc 是否已赋值
                     * @return GroupDesc 是否已赋值
                     * 
                     */
                    bool GroupDescHasBeenSet() const;

                    /**
                     * 获取部署组资源类型；DEF 表示默认资源类型；GW 表示网关资源类型
                     * @return GroupResourceType 部署组资源类型；DEF 表示默认资源类型；GW 表示网关资源类型
                     * 
                     */
                    std::string GetGroupResourceType() const;

                    /**
                     * 设置部署组资源类型；DEF 表示默认资源类型；GW 表示网关资源类型
                     * @param _groupResourceType 部署组资源类型；DEF 表示默认资源类型；GW 表示网关资源类型
                     * 
                     */
                    void SetGroupResourceType(const std::string& _groupResourceType);

                    /**
                     * 判断参数 GroupResourceType 是否已赋值
                     * @return GroupResourceType 是否已赋值
                     * 
                     */
                    bool GroupResourceTypeHasBeenSet() const;

                    /**
                     * 获取部署组备注
                     * @return Alias 部署组备注
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置部署组备注
                     * @param _alias 部署组备注
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 部署组所属的应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 部署组所属命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 部署组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 部署组描述
                     */
                    std::string m_groupDesc;
                    bool m_groupDescHasBeenSet;

                    /**
                     * 部署组资源类型；DEF 表示默认资源类型；GW 表示网关资源类型
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * 部署组备注
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEGROUPREQUEST_H_
