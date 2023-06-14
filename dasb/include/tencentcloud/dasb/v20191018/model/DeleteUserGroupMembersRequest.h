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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DELETEUSERGROUPMEMBERSREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DELETEUSERGROUPMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DeleteUserGroupMembers请求参数结构体
                */
                class DeleteUserGroupMembersRequest : public AbstractModel
                {
                public:
                    DeleteUserGroupMembersRequest();
                    ~DeleteUserGroupMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组ID
                     * @return Id 用户组ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置用户组ID
                     * @param _id 用户组ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取需删除的成员用户ID集合
                     * @return MemberIdSet 需删除的成员用户ID集合
                     * 
                     */
                    std::vector<uint64_t> GetMemberIdSet() const;

                    /**
                     * 设置需删除的成员用户ID集合
                     * @param _memberIdSet 需删除的成员用户ID集合
                     * 
                     */
                    void SetMemberIdSet(const std::vector<uint64_t>& _memberIdSet);

                    /**
                     * 判断参数 MemberIdSet 是否已赋值
                     * @return MemberIdSet 是否已赋值
                     * 
                     */
                    bool MemberIdSetHasBeenSet() const;

                private:

                    /**
                     * 用户组ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 需删除的成员用户ID集合
                     */
                    std::vector<uint64_t> m_memberIdSet;
                    bool m_memberIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DELETEUSERGROUPMEMBERSREQUEST_H_
