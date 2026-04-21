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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DELETEUSERGROUPMEMBERREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DELETEUSERGROUPMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DeleteUserGroupMember请求参数结构体
                */
                class DeleteUserGroupMemberRequest : public AbstractModel
                {
                public:
                    DeleteUserGroupMemberRequest();
                    ~DeleteUserGroupMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组id
                     * @return GroupId 用户组id
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置用户组id
                     * @param _groupId 用户组id
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取用户id集合
                     * @return UserIdList 用户id集合
                     * 
                     */
                    std::vector<std::string> GetUserIdList() const;

                    /**
                     * 设置用户id集合
                     * @param _userIdList 用户id集合
                     * 
                     */
                    void SetUserIdList(const std::vector<std::string>& _userIdList);

                    /**
                     * 判断参数 UserIdList 是否已赋值
                     * @return UserIdList 是否已赋值
                     * 
                     */
                    bool UserIdListHasBeenSet() const;

                private:

                    /**
                     * 用户组id
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 用户id集合
                     */
                    std::vector<std::string> m_userIdList;
                    bool m_userIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DELETEUSERGROUPMEMBERREQUEST_H_
