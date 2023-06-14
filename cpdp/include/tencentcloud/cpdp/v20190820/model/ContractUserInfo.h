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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTUSERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class ContractUserInfo : public AbstractModel
                {
                public:
                    ContractUserInfo();
                    ~ContractUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取USER_ID: 用户ID
ANONYMOUS: 匿名类型用户ID
                     * @return UserType USER_ID: 用户ID
ANONYMOUS: 匿名类型用户ID
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置USER_ID: 用户ID
ANONYMOUS: 匿名类型用户ID
                     * @param _userType USER_ID: 用户ID
ANONYMOUS: 匿名类型用户ID
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取用户类型
                     * @return UserId 用户类型
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户类型
                     * @param _userId 用户类型
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * USER_ID: 用户ID
ANONYMOUS: 匿名类型用户ID
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 用户类型
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTUSERINFO_H_
