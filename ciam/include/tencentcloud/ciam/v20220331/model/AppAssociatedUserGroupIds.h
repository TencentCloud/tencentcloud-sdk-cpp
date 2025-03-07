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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_APPASSOCIATEDUSERGROUPIDS_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_APPASSOCIATEDUSERGROUPIDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 用户组删除时关联的应用信息
                */
                class AppAssociatedUserGroupIds : public AbstractModel
                {
                public:
                    AppAssociatedUserGroupIds();
                    ~AppAssociatedUserGroupIds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组id
                     * @return UserGroupId 用户组id
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置用户组id
                     * @param _userGroupId 用户组id
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return ApplicationId 应用id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用id
                     * @param _applicationId 应用id
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
                     * 获取应用名称
                     * @return ApplicationName 应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
                     * @param _applicationName 应用名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                private:

                    /**
                     * 用户组id
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * 应用id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_APPASSOCIATEDUSERGROUPIDS_H_
