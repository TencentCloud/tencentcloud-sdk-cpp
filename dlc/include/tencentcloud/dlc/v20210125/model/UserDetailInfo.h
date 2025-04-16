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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERDETAILINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policys.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroups.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 用户详细信息
                */
                class UserDetailInfo : public AbstractModel
                {
                public:
                    UserDetailInfo();
                    ~UserDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户Id
                     * @return UserId 用户Id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id
                     * @param _userId 用户Id
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
                     * 获取返回的信息类型，Group：返回的当前用户的工作组信息；DataAuth：返回的当前用户的数据权限信息；EngineAuth：返回的当前用户的引擎权限信息
                     * @return Type 返回的信息类型，Group：返回的当前用户的工作组信息；DataAuth：返回的当前用户的数据权限信息；EngineAuth：返回的当前用户的引擎权限信息
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置返回的信息类型，Group：返回的当前用户的工作组信息；DataAuth：返回的当前用户的数据权限信息；EngineAuth：返回的当前用户的引擎权限信息
                     * @param _type 返回的信息类型，Group：返回的当前用户的工作组信息；DataAuth：返回的当前用户的数据权限信息；EngineAuth：返回的当前用户的引擎权限信息
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取用户类型：ADMIN：管理员 COMMON：一般用户
                     * @return UserType 用户类型：ADMIN：管理员 COMMON：一般用户
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型：ADMIN：管理员 COMMON：一般用户
                     * @param _userType 用户类型：ADMIN：管理员 COMMON：一般用户
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取用户描述信息
                     * @return UserDescription 用户描述信息
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置用户描述信息
                     * @param _userDescription 用户描述信息
                     * 
                     */
                    void SetUserDescription(const std::string& _userDescription);

                    /**
                     * 判断参数 UserDescription 是否已赋值
                     * @return UserDescription 是否已赋值
                     * 
                     */
                    bool UserDescriptionHasBeenSet() const;

                    /**
                     * 获取数据权限信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataPolicyInfo 数据权限信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Policys GetDataPolicyInfo() const;

                    /**
                     * 设置数据权限信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataPolicyInfo 数据权限信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataPolicyInfo(const Policys& _dataPolicyInfo);

                    /**
                     * 判断参数 DataPolicyInfo 是否已赋值
                     * @return DataPolicyInfo 是否已赋值
                     * 
                     */
                    bool DataPolicyInfoHasBeenSet() const;

                    /**
                     * 获取引擎权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnginePolicyInfo 引擎权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Policys GetEnginePolicyInfo() const;

                    /**
                     * 设置引擎权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enginePolicyInfo 引擎权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnginePolicyInfo(const Policys& _enginePolicyInfo);

                    /**
                     * 判断参数 EnginePolicyInfo 是否已赋值
                     * @return EnginePolicyInfo 是否已赋值
                     * 
                     */
                    bool EnginePolicyInfoHasBeenSet() const;

                    /**
                     * 获取绑定到该用户的工作组集合信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkGroupInfo 绑定到该用户的工作组集合信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkGroups GetWorkGroupInfo() const;

                    /**
                     * 设置绑定到该用户的工作组集合信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workGroupInfo 绑定到该用户的工作组集合信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkGroupInfo(const WorkGroups& _workGroupInfo);

                    /**
                     * 判断参数 WorkGroupInfo 是否已赋值
                     * @return WorkGroupInfo 是否已赋值
                     * 
                     */
                    bool WorkGroupInfoHasBeenSet() const;

                    /**
                     * 获取用户别名
                     * @return UserAlias 用户别名
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置用户别名
                     * @param _userAlias 用户别名
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取行过滤集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowFilterInfo 行过滤集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Policys GetRowFilterInfo() const;

                    /**
                     * 设置行过滤集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowFilterInfo 行过滤集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowFilterInfo(const Policys& _rowFilterInfo);

                    /**
                     * 判断参数 RowFilterInfo 是否已赋值
                     * @return RowFilterInfo 是否已赋值
                     * 
                     */
                    bool RowFilterInfoHasBeenSet() const;

                    /**
                     * 获取账号类型
                     * @return AccountType 账号类型
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置账号类型
                     * @param _accountType 账号类型
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取数据源权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogPolicyInfo 数据源权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Policys GetCatalogPolicyInfo() const;

                    /**
                     * 设置数据源权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogPolicyInfo 数据源权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogPolicyInfo(const Policys& _catalogPolicyInfo);

                    /**
                     * 判断参数 CatalogPolicyInfo 是否已赋值
                     * @return CatalogPolicyInfo 是否已赋值
                     * 
                     */
                    bool CatalogPolicyInfoHasBeenSet() const;

                private:

                    /**
                     * 用户Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 返回的信息类型，Group：返回的当前用户的工作组信息；DataAuth：返回的当前用户的数据权限信息；EngineAuth：返回的当前用户的引擎权限信息
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用户类型：ADMIN：管理员 COMMON：一般用户
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 用户描述信息
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * 数据权限信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Policys m_dataPolicyInfo;
                    bool m_dataPolicyInfoHasBeenSet;

                    /**
                     * 引擎权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Policys m_enginePolicyInfo;
                    bool m_enginePolicyInfoHasBeenSet;

                    /**
                     * 绑定到该用户的工作组集合信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkGroups m_workGroupInfo;
                    bool m_workGroupInfoHasBeenSet;

                    /**
                     * 用户别名
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 行过滤集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Policys m_rowFilterInfo;
                    bool m_rowFilterInfoHasBeenSet;

                    /**
                     * 账号类型
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 数据源权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Policys m_catalogPolicyInfo;
                    bool m_catalogPolicyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERDETAILINFO_H_
