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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYMEMBERGROUPREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYMEMBERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * ModifyMemberGroup请求参数结构体
                */
                class ModifyMemberGroupRequest : public AbstractModel
                {
                public:
                    ModifyMemberGroupRequest();
                    ~ModifyMemberGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标成员 AppId
                     * @return UserMemberId 目标成员 AppId
                     * 
                     */
                    std::string GetUserMemberId() const;

                    /**
                     * 设置目标成员 AppId
                     * @param _userMemberId 目标成员 AppId
                     * 
                     */
                    void SetUserMemberId(const std::string& _userMemberId);

                    /**
                     * 判断参数 UserMemberId 是否已赋值
                     * @return UserMemberId 是否已赋值
                     * 
                     */
                    bool UserMemberIdHasBeenSet() const;

                    /**
                     * 获取账户组ID（空字符串表示移出账户组）
                     * @return GroupId 账户组ID（空字符串表示移出账户组）
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置账户组ID（空字符串表示移出账户组）
                     * @param _groupId 账户组ID（空字符串表示移出账户组）
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 目标成员 AppId
                     */
                    std::string m_userMemberId;
                    bool m_userMemberIdHasBeenSet;

                    /**
                     * 账户组ID（空字符串表示移出账户组）
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYMEMBERGROUPREQUEST_H_
