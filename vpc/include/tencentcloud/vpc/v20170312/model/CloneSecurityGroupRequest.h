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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CLONESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CLONESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CloneSecurityGroup请求参数结构体
                */
                class CloneSecurityGroupRequest : public AbstractModel
                {
                public:
                    CloneSecurityGroupRequest();
                    ~CloneSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     * @return SecurityGroupId 安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     * @param _securityGroupId 安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取安全组名称，可任意命名，但不得超过60个字符。未提供参数时，克隆后的安全组名称和SecurityGroupId对应的安全组名称相同。
                     * @return GroupName 安全组名称，可任意命名，但不得超过60个字符。未提供参数时，克隆后的安全组名称和SecurityGroupId对应的安全组名称相同。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置安全组名称，可任意命名，但不得超过60个字符。未提供参数时，克隆后的安全组名称和SecurityGroupId对应的安全组名称相同。
                     * @param _groupName 安全组名称，可任意命名，但不得超过60个字符。未提供参数时，克隆后的安全组名称和SecurityGroupId对应的安全组名称相同。
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
                     * 获取安全组备注，最多100个字符。未提供参数时，克隆后的安全组备注和SecurityGroupId对应的安全组备注相同。
                     * @return GroupDescription 安全组备注，最多100个字符。未提供参数时，克隆后的安全组备注和SecurityGroupId对应的安全组备注相同。
                     * 
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置安全组备注，最多100个字符。未提供参数时，克隆后的安全组备注和SecurityGroupId对应的安全组备注相同。
                     * @param _groupDescription 安全组备注，最多100个字符。未提供参数时，克隆后的安全组备注和SecurityGroupId对应的安全组备注相同。
                     * 
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     * 
                     */
                    bool GroupDescriptionHasBeenSet() const;

                    /**
                     * 获取项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">qcloud控制台项目管理页面</a>查询到。
                     * @return ProjectId 项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">qcloud控制台项目管理页面</a>查询到。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">qcloud控制台项目管理页面</a>查询到。
                     * @param _projectId 项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">qcloud控制台项目管理页面</a>查询到。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取源Region,跨地域克隆安全组时，需要传入源安全组所属地域信息，例如：克隆广州的安全组到上海，则这里需要传入广州安全的地域信息：ap-guangzhou。
                     * @return RemoteRegion 源Region,跨地域克隆安全组时，需要传入源安全组所属地域信息，例如：克隆广州的安全组到上海，则这里需要传入广州安全的地域信息：ap-guangzhou。
                     * 
                     */
                    std::string GetRemoteRegion() const;

                    /**
                     * 设置源Region,跨地域克隆安全组时，需要传入源安全组所属地域信息，例如：克隆广州的安全组到上海，则这里需要传入广州安全的地域信息：ap-guangzhou。
                     * @param _remoteRegion 源Region,跨地域克隆安全组时，需要传入源安全组所属地域信息，例如：克隆广州的安全组到上海，则这里需要传入广州安全的地域信息：ap-guangzhou。
                     * 
                     */
                    void SetRemoteRegion(const std::string& _remoteRegion);

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     * 
                     */
                    bool RemoteRegionHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
若指定Tags入参且指定IsCloneTags为true，会合并源安全组的标签和新增的标签。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
若指定Tags入参且指定IsCloneTags为true，会合并源安全组的标签和新增的标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
若指定Tags入参且指定IsCloneTags为true，会合并源安全组的标签和新增的标签。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
若指定Tags入参且指定IsCloneTags为true，会合并源安全组的标签和新增的标签。
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
                     * 安全组实例ID，例如sg-33ocnj9n，可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组名称，可任意命名，但不得超过60个字符。未提供参数时，克隆后的安全组名称和SecurityGroupId对应的安全组名称相同。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 安全组备注，最多100个字符。未提供参数时，克隆后的安全组备注和SecurityGroupId对应的安全组备注相同。
                     */
                    std::string m_groupDescription;
                    bool m_groupDescriptionHasBeenSet;

                    /**
                     * 项目ID，默认0。可在<a href="https://console.cloud.tencent.com/project">qcloud控制台项目管理页面</a>查询到。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 源Region,跨地域克隆安全组时，需要传入源安全组所属地域信息，例如：克隆广州的安全组到上海，则这里需要传入广州安全的地域信息：ap-guangzhou。
                     */
                    std::string m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
若指定Tags入参且指定IsCloneTags为true，会合并源安全组的标签和新增的标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CLONESECURITYGROUPREQUEST_H_
