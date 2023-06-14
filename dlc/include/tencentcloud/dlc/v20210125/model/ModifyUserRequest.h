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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYUSERREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ModifyUser请求参数结构体
                */
                class ModifyUserRequest : public AbstractModel
                {
                public:
                    ModifyUserRequest();
                    ~ModifyUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户Id，和CAM侧Uin匹配
                     * @return UserId 用户Id，和CAM侧Uin匹配
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，和CAM侧Uin匹配
                     * @param _userId 用户Id，和CAM侧Uin匹配
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
                     * 获取用户描述
                     * @return UserDescription 用户描述
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置用户描述
                     * @param _userDescription 用户描述
                     * 
                     */
                    void SetUserDescription(const std::string& _userDescription);

                    /**
                     * 判断参数 UserDescription 是否已赋值
                     * @return UserDescription 是否已赋值
                     * 
                     */
                    bool UserDescriptionHasBeenSet() const;

                private:

                    /**
                     * 用户Id，和CAM侧Uin匹配
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户描述
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYUSERREQUEST_H_
