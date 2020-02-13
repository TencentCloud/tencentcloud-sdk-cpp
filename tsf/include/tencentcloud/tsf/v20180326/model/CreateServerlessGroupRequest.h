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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATESERVERLESSGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATESERVERLESSGROUPREQUEST_H_

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
                * CreateServerlessGroup请求参数结构体
                */
                class CreateServerlessGroupRequest : public AbstractModel
                {
                public:
                    CreateServerlessGroupRequest();
                    ~CreateServerlessGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组所属应用ID
                     * @return ApplicationId 分组所属应用ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置分组所属应用ID
                     * @param ApplicationId 分组所属应用ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     * @return GroupName 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     * @param GroupName 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取分组所属名字空间ID
                     * @return NamespaceId 分组所属名字空间ID
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置分组所属名字空间ID
                     * @param NamespaceId 分组所属名字空间ID
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取分组所属集群ID
                     * @return ClusterId 分组所属集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分组所属集群ID
                     * @param ClusterId 分组所属集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 分组所属应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 分组所属名字空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 分组所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATESERVERLESSGROUPREQUEST_H_
