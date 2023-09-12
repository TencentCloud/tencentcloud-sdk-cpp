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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEAPIGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEAPIGROUPREQUEST_H_

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
                * UpdateApiGroup请求参数结构体
                */
                class UpdateApiGroupRequest : public AbstractModel
                {
                public:
                    UpdateApiGroupRequest();
                    ~UpdateApiGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Api 分组ID
                     * @return GroupId Api 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Api 分组ID
                     * @param _groupId Api 分组ID
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
                     * 获取Api 分组名称
                     * @return GroupName Api 分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Api 分组名称
                     * @param _groupName Api 分组名称
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
                     * 获取Api 分组描述
                     * @return Description Api 分组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Api 分组描述
                     * @param _description Api 分组描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * @return AuthType 鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * @param _authType 鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取分组上下文
                     * @return GroupContext 分组上下文
                     * 
                     */
                    std::string GetGroupContext() const;

                    /**
                     * 设置分组上下文
                     * @param _groupContext 分组上下文
                     * 
                     */
                    void SetGroupContext(const std::string& _groupContext);

                    /**
                     * 判断参数 GroupContext 是否已赋值
                     * @return GroupContext 是否已赋值
                     * 
                     */
                    bool GroupContextHasBeenSet() const;

                    /**
                     * 获取命名空间参数key值
                     * @return NamespaceNameKey 命名空间参数key值
                     * 
                     */
                    std::string GetNamespaceNameKey() const;

                    /**
                     * 设置命名空间参数key值
                     * @param _namespaceNameKey 命名空间参数key值
                     * 
                     */
                    void SetNamespaceNameKey(const std::string& _namespaceNameKey);

                    /**
                     * 判断参数 NamespaceNameKey 是否已赋值
                     * @return NamespaceNameKey 是否已赋值
                     * 
                     */
                    bool NamespaceNameKeyHasBeenSet() const;

                    /**
                     * 获取微服务名参数key值
                     * @return ServiceNameKey 微服务名参数key值
                     * 
                     */
                    std::string GetServiceNameKey() const;

                    /**
                     * 设置微服务名参数key值
                     * @param _serviceNameKey 微服务名参数key值
                     * 
                     */
                    void SetServiceNameKey(const std::string& _serviceNameKey);

                    /**
                     * 判断参数 ServiceNameKey 是否已赋值
                     * @return ServiceNameKey 是否已赋值
                     * 
                     */
                    bool ServiceNameKeyHasBeenSet() const;

                    /**
                     * 获取命名空间参数位置，path，header或query，默认是path
                     * @return NamespaceNameKeyPosition 命名空间参数位置，path，header或query，默认是path
                     * 
                     */
                    std::string GetNamespaceNameKeyPosition() const;

                    /**
                     * 设置命名空间参数位置，path，header或query，默认是path
                     * @param _namespaceNameKeyPosition 命名空间参数位置，path，header或query，默认是path
                     * 
                     */
                    void SetNamespaceNameKeyPosition(const std::string& _namespaceNameKeyPosition);

                    /**
                     * 判断参数 NamespaceNameKeyPosition 是否已赋值
                     * @return NamespaceNameKeyPosition 是否已赋值
                     * 
                     */
                    bool NamespaceNameKeyPositionHasBeenSet() const;

                    /**
                     * 获取微服务名参数位置，path，header或query，默认是path
                     * @return ServiceNameKeyPosition 微服务名参数位置，path，header或query，默认是path
                     * 
                     */
                    std::string GetServiceNameKeyPosition() const;

                    /**
                     * 设置微服务名参数位置，path，header或query，默认是path
                     * @param _serviceNameKeyPosition 微服务名参数位置，path，header或query，默认是path
                     * 
                     */
                    void SetServiceNameKeyPosition(const std::string& _serviceNameKeyPosition);

                    /**
                     * 判断参数 ServiceNameKeyPosition 是否已赋值
                     * @return ServiceNameKeyPosition 是否已赋值
                     * 
                     */
                    bool ServiceNameKeyPositionHasBeenSet() const;

                private:

                    /**
                     * Api 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Api 分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Api 分组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 分组上下文
                     */
                    std::string m_groupContext;
                    bool m_groupContextHasBeenSet;

                    /**
                     * 命名空间参数key值
                     */
                    std::string m_namespaceNameKey;
                    bool m_namespaceNameKeyHasBeenSet;

                    /**
                     * 微服务名参数key值
                     */
                    std::string m_serviceNameKey;
                    bool m_serviceNameKeyHasBeenSet;

                    /**
                     * 命名空间参数位置，path，header或query，默认是path
                     */
                    std::string m_namespaceNameKeyPosition;
                    bool m_namespaceNameKeyPositionHasBeenSet;

                    /**
                     * 微服务名参数位置，path，header或query，默认是path
                     */
                    std::string m_serviceNameKeyPosition;
                    bool m_serviceNameKeyPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEAPIGROUPREQUEST_H_
