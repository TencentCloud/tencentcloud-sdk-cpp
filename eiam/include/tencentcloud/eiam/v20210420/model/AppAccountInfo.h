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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_APPACCOUNTINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_APPACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/LinkUserInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 查询账号信息列表。
                */
                class AppAccountInfo : public AbstractModel
                {
                public:
                    AppAccountInfo();
                    ~AppAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号ID。
                     * @return AccountId 账号ID。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账号ID。
                     * @param _accountId 账号ID。
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取账号名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName 账号名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName 账号名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserList 用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LinkUserInfo> GetUserList() const;

                    /**
                     * 设置用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userList 用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserList(const std::vector<LinkUserInfo>& _userList);

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     * 
                     */
                    bool UserListHasBeenSet() const;

                    /**
                     * 获取描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedDate 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdDate 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                private:

                    /**
                     * 账号ID。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 账号名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 用户信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LinkUserInfo> m_userList;
                    bool m_userListHasBeenSet;

                    /**
                     * 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_APPACCOUNTINFO_H_
