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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLICKHOUSESCHEMA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLICKHOUSESCHEMA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ClickHouse的Schema
                */
                class ClickHouseSchema : public AbstractModel
                {
                public:
                    ClickHouseSchema();
                    ~ClickHouseSchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表的列名
                     * @return ColumnName 表的列名
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置表的列名
                     * @param _columnName 表的列名
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取该列对应的jsonKey名
                     * @return JsonKey 该列对应的jsonKey名
                     * 
                     */
                    std::string GetJsonKey() const;

                    /**
                     * 设置该列对应的jsonKey名
                     * @param _jsonKey 该列对应的jsonKey名
                     * 
                     */
                    void SetJsonKey(const std::string& _jsonKey);

                    /**
                     * 判断参数 JsonKey 是否已赋值
                     * @return JsonKey 是否已赋值
                     * 
                     */
                    bool JsonKeyHasBeenSet() const;

                    /**
                     * 获取表列项的类型
                     * @return Type 表列项的类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表列项的类型
                     * @param _type 表列项的类型
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
                     * 获取列项是否允许为空
                     * @return AllowNull 列项是否允许为空
                     * 
                     */
                    bool GetAllowNull() const;

                    /**
                     * 设置列项是否允许为空
                     * @param _allowNull 列项是否允许为空
                     * 
                     */
                    void SetAllowNull(const bool& _allowNull);

                    /**
                     * 判断参数 AllowNull 是否已赋值
                     * @return AllowNull 是否已赋值
                     * 
                     */
                    bool AllowNullHasBeenSet() const;

                private:

                    /**
                     * 表的列名
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 该列对应的jsonKey名
                     */
                    std::string m_jsonKey;
                    bool m_jsonKeyHasBeenSet;

                    /**
                     * 表列项的类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 列项是否允许为空
                     */
                    bool m_allowNull;
                    bool m_allowNullHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLICKHOUSESCHEMA_H_
