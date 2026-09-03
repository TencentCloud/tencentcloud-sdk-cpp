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
                * 账号分组授权信息
                */
                class GrantedAccountGroupItem : public AbstractModel
                {
                public:
                    GrantedAccountGroupItem();
                    ~GrantedAccountGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账户组Id</p>
                     * @return AccountGroupId <p>账户组Id</p>
                     * 
                     */
                    uint64_t GetAccountGroupId() const;

                    /**
                     * 设置<p>账户组Id</p>
                     * @param _accountGroupId <p>账户组Id</p>
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
                     * 获取<p>分组名称</p>
                     * @return Name <p>分组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分组名称</p>
                     * @param _name <p>分组名称</p>
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
                     * 获取<p>所属分组Id</p>
                     * @return IdPathArray <p>所属分组Id</p>
                     * 
                     */
                    std::vector<uint64_t> GetIdPathArray() const;

                    /**
                     * 设置<p>所属分组Id</p>
                     * @param _idPathArray <p>所属分组Id</p>
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
                     * 获取<p>所属分组NamePathArray</p>
                     * @return NamePathArray <p>所属分组NamePathArray</p>
                     * 
                     */
                    std::vector<std::string> GetNamePathArray() const;

                    /**
                     * 设置<p>所属分组NamePathArray</p>
                     * @param _namePathArray <p>所属分组NamePathArray</p>
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
                     * 获取<p>目录id</p>
                     * @return AccountCount <p>目录id</p>
                     * 
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 设置<p>目录id</p>
                     * @param _accountCount <p>目录id</p>
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
                     * 获取<p>过期时间</p>
                     * @return ExpireTime <p>过期时间</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expireTime <p>过期时间</p>
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
                     * 获取<p>关联id</p>
                     * @return RelationId <p>关联id</p>
                     * 
                     */
                    uint64_t GetRelationId() const;

                    /**
                     * 设置<p>关联id</p>
                     * @param _relationId <p>关联id</p>
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
                     * <p>账户组Id</p>
                     */
                    uint64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>分组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>所属分组Id</p>
                     */
                    std::vector<uint64_t> m_idPathArray;
                    bool m_idPathArrayHasBeenSet;

                    /**
                     * <p>所属分组NamePathArray</p>
                     */
                    std::vector<std::string> m_namePathArray;
                    bool m_namePathArrayHasBeenSet;

                    /**
                     * <p>目录id</p>
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>关联id</p>
                     */
                    uint64_t m_relationId;
                    bool m_relationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_GRANTEDACCOUNTGROUPITEM_H_
