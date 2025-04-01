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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEUSER_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 设备的用户
                */
                class DeviceUser : public AbstractModel
                {
                public:
                    DeviceUser();
                    ~DeviceUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户角色 1所有者，0：其他分享者
                     * @return Role 用户角色 1所有者，0：其他分享者
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置用户角色 1所有者，0：其他分享者
                     * @param _role 用户角色 1所有者，0：其他分享者
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取家庭ID，所有者带该参数
                     * @return FamilyId 家庭ID，所有者带该参数
                     * 
                     */
                    std::string GetFamilyId() const;

                    /**
                     * 设置家庭ID，所有者带该参数
                     * @param _familyId 家庭ID，所有者带该参数
                     * 
                     */
                    void SetFamilyId(const std::string& _familyId);

                    /**
                     * 判断参数 FamilyId 是否已赋值
                     * @return FamilyId 是否已赋值
                     * 
                     */
                    bool FamilyIdHasBeenSet() const;

                    /**
                     * 获取家庭名称，所有者带该参数
                     * @return FamilyName 家庭名称，所有者带该参数
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 设置家庭名称，所有者带该参数
                     * @param _familyName 家庭名称，所有者带该参数
                     * 
                     */
                    void SetFamilyName(const std::string& _familyName);

                    /**
                     * 判断参数 FamilyName 是否已赋值
                     * @return FamilyName 是否已赋值
                     * 
                     */
                    bool FamilyNameHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户角色 1所有者，0：其他分享者
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 家庭ID，所有者带该参数
                     */
                    std::string m_familyId;
                    bool m_familyIdHasBeenSet;

                    /**
                     * 家庭名称，所有者带该参数
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEUSER_H_
