/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * RemoveConsoleUsers请求参数结构体
                */
                class RemoveConsoleUsersRequest : public AbstractModel
                {
                public:
                    RemoveConsoleUsersRequest();
                    ~RemoveConsoleUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>必填，待移除的用户 UIN 列表，单次最多10个</p>
                     * @return UserUins <p>必填，待移除的用户 UIN 列表，单次最多10个</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>必填，待移除的用户 UIN 列表，单次最多10个</p>
                     * @param _userUins <p>必填，待移除的用户 UIN 列表，单次最多10个</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

                private:

                    /**
                     * <p>必填，待移除的用户 UIN 列表，单次最多10个</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSREQUEST_H_
