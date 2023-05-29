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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DBINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/UserHostPrivilege.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 数据库详细信息
                */
                class DbInfo : public AbstractModel
                {
                public:
                    DbInfo();
                    ~DbInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param DbName 数据库名称
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取字符集类型
                     * @return CharacterSet 字符集类型
                     */
                    std::string GetCharacterSet() const;

                    /**
                     * 设置字符集类型
                     * @param CharacterSet 字符集类型
                     */
                    void SetCharacterSet(const std::string& _characterSet);

                    /**
                     * 判断参数 CharacterSet 是否已赋值
                     * @return CharacterSet 是否已赋值
                     */
                    bool CharacterSetHasBeenSet() const;

                    /**
                     * 获取数据库状态
                     * @return Status 数据库状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置数据库状态
                     * @param Status 数据库状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取拍讯规则
                     * @return CollateRule 拍讯规则
                     */
                    std::string GetCollateRule() const;

                    /**
                     * 设置拍讯规则
                     * @param CollateRule 拍讯规则
                     */
                    void SetCollateRule(const std::string& _collateRule);

                    /**
                     * 判断参数 CollateRule 是否已赋值
                     * @return CollateRule 是否已赋值
                     */
                    bool CollateRuleHasBeenSet() const;

                    /**
                     * 获取数据库备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 数据库备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据库备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 数据库备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserHostPrivileges 用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserHostPrivilege> GetUserHostPrivileges() const;

                    /**
                     * 设置用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserHostPrivileges 用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserHostPrivileges(const std::vector<UserHostPrivilege>& _userHostPrivileges);

                    /**
                     * 判断参数 UserHostPrivileges 是否已赋值
                     * @return UserHostPrivileges 是否已赋值
                     */
                    bool UserHostPrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbId 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDbId() const;

                    /**
                     * 设置数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DbId 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDbId(const int64_t& _dbId);

                    /**
                     * 判断参数 DbId 是否已赋值
                     * @return DbId 是否已赋值
                     */
                    bool DbIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 字符集类型
                     */
                    std::string m_characterSet;
                    bool m_characterSetHasBeenSet;

                    /**
                     * 数据库状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 拍讯规则
                     */
                    std::string m_collateRule;
                    bool m_collateRuleHasBeenSet;

                    /**
                     * 数据库备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserHostPrivilege> m_userHostPrivileges;
                    bool m_userHostPrivilegesHasBeenSet;

                    /**
                     * 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dbId;
                    bool m_dbIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DBINFO_H_
