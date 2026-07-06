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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILTABLEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * dlc失败日志存储表信息
                */
                class DlcFailTableInfo : public AbstractModel
                {
                public:
                    DlcFailTableInfo();
                    ~DlcFailTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DLC的表名称</p>
                     * @return TableName <p>DLC的表名称</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>DLC的表名称</p>
                     * @param _tableName <p>DLC的表名称</p>
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>表中的字段名称</p><p>字段类型必须是String类型</p>
                     * @return FieldName <p>表中的字段名称</p><p>字段类型必须是String类型</p>
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>表中的字段名称</p><p>字段类型必须是String类型</p>
                     * @param _fieldName <p>表中的字段名称</p><p>字段类型必须是String类型</p>
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                private:

                    /**
                     * <p>DLC的表名称</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>表中的字段名称</p><p>字段类型必须是String类型</p>
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILTABLEINFO_H_
