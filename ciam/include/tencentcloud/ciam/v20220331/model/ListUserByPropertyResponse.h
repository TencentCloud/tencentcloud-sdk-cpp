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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYRESPONSE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/User.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUserByProperty返回参数结构体
                */
                class ListUserByPropertyResponse : public AbstractModel
                {
                public:
                    ListUserByPropertyResponse();
                    ~ListUserByPropertyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户列表
                     * @return Users 用户列表
                     * 
                     */
                    std::vector<User> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * 用户列表
                     */
                    std::vector<User> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYRESPONSE_H_
