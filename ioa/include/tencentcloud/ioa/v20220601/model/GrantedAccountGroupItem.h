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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_GRANTEDACCOUNTGROUPITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_GRANTEDACCOUNTGROUPITEM_H_

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
                class GrantedAccountGroupItem : public AbstractModel
                {
                public:
                    GrantedAccountGroupItem();
                    ~GrantedAccountGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户组Id
                     * @return AccountGroupId 账户组Id
                     * 
                     */
                    uint64_t GetAccountGroupId() const;

                    /**
                     * 设置账户组Id
                     * @param _accountGroupId 账户组Id
                     * 
                     */
                    void SetAccountGroupId(const uint64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取分组名称
                     * @return Name 分组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分组名称
                     * @param _name 分组名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取所属分组Id
                     * @return IdPathArray 所属分组Id
                     * 
                     */
                    std::vector<uint64_t> GetIdPathArray() const;

                    /**
                     * 设置所属分组Id
                     * @param _idPathArray 所属分组Id
                     * 
                     */
                    void SetIdPathArray(const std::vector<uint64_t>& _idPathArray);

                    /**
                     * 判断参数 IdPathArray 是否已赋值
                     * @return IdPathArray 是否已赋值
                     * 
                     */
                    bool IdPathArrayHasBeenSet() const;

                    /**
                     * 获取所属分组NamePathArray
                     * @return NamePathArray 所属分组NamePathArray
                     * 
                     */
                    std::vector<std::string> GetNamePathArray() const;

                    /**
                     * 设置所属分组NamePathArray
                     * @param _namePathArray 所属分组NamePathArray
                     * 
                     */
                    void SetNamePathArray(const std::vector<std::string>& _namePathArray);

                    /**
                     * 判断参数 NamePathArray 是否已赋值
                     * @return NamePathArray 是否已赋值
                     * 
                     */
                    bool NamePathArrayHasBeenSet() const;

                    /**
                     * 获取目录id
                     * @return AccountCount 目录id
                     * 
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 设置目录id
                     * @param _accountCount 目录id
                     * 
                     */
                    void SetAccountCount(const uint64_t& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

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
                     * 账户组Id
                     */
                    uint64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 分组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 所属分组Id
                     */
                    std::vector<uint64_t> m_idPathArray;
                    bool m_idPathArrayHasBeenSet;

                    /**
                     * 所属分组NamePathArray
                     */
                    std::vector<std::string> m_namePathArray;
                    bool m_namePathArrayHasBeenSet;

                    /**
                     * 目录id
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

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

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_GRANTEDACCOUNTGROUPITEM_H_
