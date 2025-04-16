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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATABASERESPONSEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATABASERESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>
#include <tencentcloud/dlc/v20210125/model/DataGovernPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据库对象
                */
                class DatabaseResponseInfo : public AbstractModel
                {
                public:
                    DatabaseResponseInfo();
                    ~DatabaseResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称。
                     * @return DatabaseName 数据库名称。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称。
                     * @param _databaseName 数据库名称。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据库描述信息，长度 0~256。
                     * @return Comment 数据库描述信息，长度 0~256。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置数据库描述信息，长度 0~256。
                     * @param _comment 数据库描述信息，长度 0~256。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取允许针对数据库的属性元数据信息进行指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 允许针对数据库的属性元数据信息进行指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置允许针对数据库的属性元数据信息进行指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 允许针对数据库的属性元数据信息进行指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取数据库创建时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 数据库创建时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置数据库创建时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 数据库创建时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据库更新时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 数据库更新时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置数据库更新时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 数据库更新时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取cos存储路径
                     * @return Location cos存储路径
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置cos存储路径
                     * @param _location cos存储路径
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取建库用户昵称
                     * @return UserAlias 建库用户昵称
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置建库用户昵称
                     * @param _userAlias 建库用户昵称
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
                     * 获取建库用户ID
                     * @return UserSubUin 建库用户ID
                     * 
                     */
                    std::string GetUserSubUin() const;

                    /**
                     * 设置建库用户ID
                     * @param _userSubUin 建库用户ID
                     * 
                     */
                    void SetUserSubUin(const std::string& _userSubUin);

                    /**
                     * 判断参数 UserSubUin 是否已赋值
                     * @return UserSubUin 是否已赋值
                     * 
                     */
                    bool UserSubUinHasBeenSet() const;

                    /**
                     * 获取数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GovernPolicy 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataGovernPolicy GetGovernPolicy() const;

                    /**
                     * 设置数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _governPolicy 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGovernPolicy(const DataGovernPolicy& _governPolicy);

                    /**
                     * 判断参数 GovernPolicy 是否已赋值
                     * @return GovernPolicy 是否已赋值
                     * 
                     */
                    bool GovernPolicyHasBeenSet() const;

                    /**
                     * 获取数据库ID（无效字段）
                     * @return DatabaseId 数据库ID（无效字段）
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库ID（无效字段）
                     * @param _databaseId 数据库ID（无效字段）
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                private:

                    /**
                     * 数据库名称。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据库描述信息，长度 0~256。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 允许针对数据库的属性元数据信息进行指定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 数据库创建时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据库更新时间戳，单位：s。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * cos存储路径
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 建库用户昵称
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 建库用户ID
                     */
                    std::string m_userSubUin;
                    bool m_userSubUinHasBeenSet;

                    /**
                     * 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataGovernPolicy m_governPolicy;
                    bool m_governPolicyHasBeenSet;

                    /**
                     * 数据库ID（无效字段）
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATABASERESPONSEINFO_H_
