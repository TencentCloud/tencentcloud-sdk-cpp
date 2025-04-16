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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATABASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATABASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>


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
                class DatabaseInfo : public AbstractModel
                {
                public:
                    DatabaseInfo();
                    ~DatabaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称，长度0~128，支持数字、字母下划线，不允许数字大头，统一转换为小写。
                     * @return DatabaseName 数据库名称，长度0~128，支持数字、字母下划线，不允许数字大头，统一转换为小写。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称，长度0~128，支持数字、字母下划线，不允许数字大头，统一转换为小写。
                     * @param _databaseName 数据库名称，长度0~128，支持数字、字母下划线，不允许数字大头，统一转换为小写。
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
                     * 获取数据库描述信息，长度 0~500。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 数据库描述信息，长度 0~500。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置数据库描述信息，长度 0~500。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 数据库描述信息，长度 0~500。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据库属性列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 数据库属性列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置数据库属性列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 数据库属性列表。
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
                     * 获取数据库cos路径
                     * @return Location 数据库cos路径
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置数据库cos路径
                     * @param _location 数据库cos路径
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 数据库名称，长度0~128，支持数字、字母下划线，不允许数字大头，统一转换为小写。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据库描述信息，长度 0~500。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 数据库属性列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 数据库cos路径
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATABASEINFO_H_
