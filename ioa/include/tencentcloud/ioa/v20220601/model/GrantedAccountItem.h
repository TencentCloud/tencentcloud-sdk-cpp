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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_GRANTEDACCOUNTITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_GRANTEDACCOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * GrantedAccountItem
                */
                class GrantedAccountItem : public AbstractModel
                {
                public:
                    GrantedAccountItem();
                    ~GrantedAccountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户Id
                     * @return AccountId 账户Id
                     * 
                     */
                    uint64_t GetAccountId() const;

                    /**
                     * 设置账户Id
                     * @param _accountId 账户Id
                     * 
                     */
                    void SetAccountId(const uint64_t& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取用户UserId
                     * @return UserId 用户UserId
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户UserId
                     * @param _userId 用户UserId
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
                     * 获取用户名称
                     * @return UserName 用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称
                     * @param _userName 用户名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取所属分组Id
                     * @return GroupId 所属分组Id
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置所属分组Id
                     * @param _groupId 所属分组Id
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
                     * 获取分组路劲GroupIdPathArray
                     * @return GroupIdPathArray 分组路劲GroupIdPathArray
                     * 
                     */
                    std::vector<uint64_t> GetGroupIdPathArray() const;

                    /**
                     * 设置分组路劲GroupIdPathArray
                     * @param _groupIdPathArray 分组路劲GroupIdPathArray
                     * 
                     */
                    void SetGroupIdPathArray(const std::vector<uint64_t>& _groupIdPathArray);

                    /**
                     * 判断参数 GroupIdPathArray 是否已赋值
                     * @return GroupIdPathArray 是否已赋值
                     * 
                     */
                    bool GroupIdPathArrayHasBeenSet() const;

                    /**
                     * 获取所属分组NamePathArray
                     * @return GroupNamePathArray 所属分组NamePathArray
                     * 
                     */
                    std::vector<std::string> GetGroupNamePathArray() const;

                    /**
                     * 设置所属分组NamePathArray
                     * @param _groupNamePathArray 所属分组NamePathArray
                     * 
                     */
                    void SetGroupNamePathArray(const std::vector<std::string>& _groupNamePathArray);

                    /**
                     * 判断参数 GroupNamePathArray 是否已赋值
                     * @return GroupNamePathArray 是否已赋值
                     * 
                     */
                    bool GroupNamePathArrayHasBeenSet() const;

                    /**
                     * 获取目录id
                     * @return MenuId 目录id
                     * 
                     */
                    uint64_t GetMenuId() const;

                    /**
                     * 设置目录id
                     * @param _menuId 目录id
                     * 
                     */
                    void SetMenuId(const uint64_t& _menuId);

                    /**
                     * 判断参数 MenuId 是否已赋值
                     * @return MenuId 是否已赋值
                     * 
                     */
                    bool MenuIdHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取关联id
                     * @return RelationId 关联id
                     * 
                     */
                    uint64_t GetRelationId() const;

                    /**
                     * 设置关联id
                     * @param _relationId 关联id
                     * 
                     */
                    void SetRelationId(const uint64_t& _relationId);

                    /**
                     * 判断参数 RelationId 是否已赋值
                     * @return RelationId 是否已赋值
                     * 
                     */
                    bool RelationIdHasBeenSet() const;

                private:

                    /**
                     * 账户Id
                     */
                    uint64_t m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 用户UserId
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 所属分组Id
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组路劲GroupIdPathArray
                     */
                    std::vector<uint64_t> m_groupIdPathArray;
                    bool m_groupIdPathArrayHasBeenSet;

                    /**
                     * 所属分组NamePathArray
                     */
                    std::vector<std::string> m_groupNamePathArray;
                    bool m_groupNamePathArrayHasBeenSet;

                    /**
                     * 目录id
                     */
                    uint64_t m_menuId;
                    bool m_menuIdHasBeenSet;

                    /**
                     * 过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 关联id
                     */
                    uint64_t m_relationId;
                    bool m_relationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_GRANTEDACCOUNTITEM_H_
