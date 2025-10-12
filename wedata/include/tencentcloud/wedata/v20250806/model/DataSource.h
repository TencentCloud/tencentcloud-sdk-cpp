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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据源对象
                */
                class DataSource : public AbstractModel
                {
                public:
                    DataSource();
                    ~DataSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 数据源描述信息
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
                     * 获取归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取数据源创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUser 数据源创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置数据源创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUser 数据源创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 时间
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
                     * 获取更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyUser() const;

                    /**
                     * 设置更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyUser 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyUser(const std::string& _modifyUser);

                    /**
                     * 判断参数 ModifyUser 是否已赋值
                     * @return ModifyUser 是否已赋值
                     * 
                     */
                    bool ModifyUserHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProdConProperties 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProdConProperties() const;

                    /**
                     * 设置数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prodConProperties 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProdConProperties(const std::string& _prodConProperties);

                    /**
                     * 判断参数 ProdConProperties 是否已赋值
                     * @return ProdConProperties 是否已赋值
                     * 
                     */
                    bool ProdConPropertiesHasBeenSet() const;

                    /**
                     * 获取同params 内容为开发数据源的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevConProperties 同params 内容为开发数据源的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDevConProperties() const;

                    /**
                     * 设置同params 内容为开发数据源的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _devConProperties 同params 内容为开发数据源的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDevConProperties(const std::string& _devConProperties);

                    /**
                     * 判断参数 DevConProperties 是否已赋值
                     * @return DevConProperties 是否已赋值
                     * 
                     */
                    bool DevConPropertiesHasBeenSet() const;

                    /**
                     * 获取数据源类别：

- DB ---自定义源
- CLUSTER --- 系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 数据源类别：

- DB ---自定义源
- CLUSTER --- 系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置数据源类别：

- DB ---自定义源
- CLUSTER --- 系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category 数据源类别：

- DB ---自定义源
- CLUSTER --- 系统源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 数据源创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyUser;
                    bool m_modifyUserHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prodConProperties;
                    bool m_prodConPropertiesHasBeenSet;

                    /**
                     * 同params 内容为开发数据源的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_devConProperties;
                    bool m_devConPropertiesHasBeenSet;

                    /**
                     * 数据源类别：

- DB ---自定义源
- CLUSTER --- 系统源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCE_H_
