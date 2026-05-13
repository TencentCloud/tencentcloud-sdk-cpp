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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TABLEFIELD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TABLEFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SensitiveDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 数据库字段描述
                */
                class TableField : public AbstractModel
                {
                public:
                    TableField();
                    ~TableField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名
                     * @return DB 数据库名
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置数据库名
                     * @param _dB 数据库名
                     * 
                     */
                    void SetDB(const std::string& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取数据库视图名
                     * @return Schema 数据库视图名
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置数据库视图名
                     * @param _schema 数据库视图名
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取数据库表名
                     * @return Table 数据库表名
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置数据库表名
                     * @param _table 数据库表名
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取数据库字段名
                     * @return Field 数据库字段名
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置数据库字段名
                     * @param _field 数据库字段名
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取字段敏感信息
                     * @return Sensitive 字段敏感信息
                     * 
                     */
                    SensitiveDetail GetSensitive() const;

                    /**
                     * 设置字段敏感信息
                     * @param _sensitive 字段敏感信息
                     * 
                     */
                    void SetSensitive(const SensitiveDetail& _sensitive);

                    /**
                     * 判断参数 Sensitive 是否已赋值
                     * @return Sensitive 是否已赋值
                     * 
                     */
                    bool SensitiveHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * 数据库视图名
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 数据库表名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 数据库字段名
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 字段敏感信息
                     */
                    SensitiveDetail m_sensitive;
                    bool m_sensitiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TABLEFIELD_H_
