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
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Api 分组ID
                     * @param GroupId Api 分组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Api 分组名称
                     * @return GroupName Api 分组名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Api 分组名称
                     * @param GroupName Api 分组名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Api 分组描述
                     * @return Description Api 分组描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Api 分组描述
                     * @param Description Api 分组描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取鉴权类型
                     * @return AuthType 鉴权类型
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置鉴权类型
                     * @param AuthType 鉴权类型
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

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
                     * 鉴权类型
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 分组上下文
                     */
                    std::string m_groupContext;
                    bool m_groupContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEAPIGROUPREQUEST_H_
