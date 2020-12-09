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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPIGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPIGROUPREQUEST_H_

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
                * CreateApiGroup请求参数结构体
                */
                class CreateApiGroupRequest : public AbstractModel
                {
                public:
                    CreateApiGroupRequest();
                    ~CreateApiGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组名称, 不能包含中文
                     * @return GroupName 分组名称, 不能包含中文
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称, 不能包含中文
                     * @param GroupName 分组名称, 不能包含中文
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取分组上下文
                     * @return GroupContext 分组上下文
                     */
                    std::string GetGroupContext() const;

                    /**
                     * 设置分组上下文
                     * @param GroupContext 分组上下文
                     */
                    void SetGroupContext(const std::string& _groupContext);

                    /**
                     * 判断参数 GroupContext 是否已赋值
                     * @return GroupContext 是否已赋值
                     */
                    bool GroupContextHasBeenSet() const;

                    /**
                     * 获取鉴权类型。secret： 密钥鉴权； none:无鉴权
                     * @return AuthType 鉴权类型。secret： 密钥鉴权； none:无鉴权
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置鉴权类型。secret： 密钥鉴权； none:无鉴权
                     * @param AuthType 鉴权类型。secret： 密钥鉴权； none:无鉴权
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param Description 备注
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取分组类型,默认ms。 ms： 微服务分组； external:外部Api分组
                     * @return GroupType 分组类型,默认ms。 ms： 微服务分组； external:外部Api分组
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置分组类型,默认ms。 ms： 微服务分组； external:外部Api分组
                     * @param GroupType 分组类型,默认ms。 ms： 微服务分组； external:外部Api分组
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * 分组名称, 不能包含中文
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 分组上下文
                     */
                    std::string m_groupContext;
                    bool m_groupContextHasBeenSet;

                    /**
                     * 鉴权类型。secret： 密钥鉴权； none:无鉴权
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 分组类型,默认ms。 ms： 微服务分组； external:外部Api分组
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPIGROUPREQUEST_H_
