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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_FIELDINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_FIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 表格字段信息列表
                */
                class FieldInfo : public AbstractModel
                {
                public:
                    FieldInfo();
                    ~FieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格字段名称
                     * @return FieldName 表格字段名称
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置表格字段名称
                     * @param _fieldName 表格字段名称
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取字段是否是主键字段
                     * @return IsPrimaryKey 字段是否是主键字段
                     * 
                     */
                    std::string GetIsPrimaryKey() const;

                    /**
                     * 设置字段是否是主键字段
                     * @param _isPrimaryKey 字段是否是主键字段
                     * 
                     */
                    void SetIsPrimaryKey(const std::string& _isPrimaryKey);

                    /**
                     * 判断参数 IsPrimaryKey 是否已赋值
                     * @return IsPrimaryKey 是否已赋值
                     * 
                     */
                    bool IsPrimaryKeyHasBeenSet() const;

                    /**
                     * 获取字段类型
                     * @return FieldType 字段类型
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置字段类型
                     * @param _fieldType 字段类型
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取字段长度
                     * @return FieldSize 字段长度
                     * 
                     */
                    int64_t GetFieldSize() const;

                    /**
                     * 设置字段长度
                     * @param _fieldSize 字段长度
                     * 
                     */
                    void SetFieldSize(const int64_t& _fieldSize);

                    /**
                     * 判断参数 FieldSize 是否已赋值
                     * @return FieldSize 是否已赋值
                     * 
                     */
                    bool FieldSizeHasBeenSet() const;

                private:

                    /**
                     * 表格字段名称
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 字段是否是主键字段
                     */
                    std::string m_isPrimaryKey;
                    bool m_isPrimaryKeyHasBeenSet;

                    /**
                     * 字段类型
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * 字段长度
                     */
                    int64_t m_fieldSize;
                    bool m_fieldSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_FIELDINFO_H_
