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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SCHEMAINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SCHEMAINFO_H_

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
                * Schema信息
                */
                class SchemaInfo : public AbstractModel
                {
                public:
                    SchemaInfo();
                    ~SchemaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Schema GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Guid Schema GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGuid() const;

                    /**
                     * 设置Schema GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _guid Schema GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGuid(const std::string& _guid);

                    /**
                     * 判断参数 Guid 是否已赋值
                     * @return Guid 是否已赋值
                     * 
                     */
                    bool GuidHasBeenSet() const;

                    /**
                     * 获取Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Schema名称
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
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                private:

                    /**
                     * Schema GUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_guid;
                    bool m_guidHasBeenSet;

                    /**
                     * Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SCHEMAINFO_H_
