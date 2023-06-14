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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEACCOUNTGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEACCOUNTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * CreateAccountGroup请求参数结构体
                */
                class CreateAccountGroupRequest : public AbstractModel
                {
                public:
                    CreateAccountGroupRequest();
                    ~CreateAccountGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID。
                     * @return ApplicationId 应用ID。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID。
                     * @param _applicationId 应用ID。
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
                     * 获取账号组名。
                     * @return GroupName 账号组名。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置账号组名。
                     * @param _groupName 账号组名。
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
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 应用ID。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 账号组名。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEACCOUNTGROUPREQUEST_H_
