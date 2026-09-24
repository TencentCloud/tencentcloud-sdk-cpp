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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COLUMNINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COLUMNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc table列定义
                */
                class ColumnInfo : public AbstractModel
                {
                public:
                    ColumnInfo();
                    ~ColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字段名</p>
                     * @return Name <p>字段名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>字段名</p>
                     * @param _name <p>字段名</p>
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
                     * 获取<p>字段类型</p><p>枚举值：</p><ul><li>integer： 数值类型</li></ul>
                     * @return Type <p>字段类型</p><p>枚举值：</p><ul><li>integer： 数值类型</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>字段类型</p><p>枚举值：</p><ul><li>integer： 数值类型</li></ul>
                     * @param _type <p>字段类型</p><p>枚举值：</p><ul><li>integer： 数值类型</li></ul>
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
                     * 获取<p>字段描述</p>
                     * @return Comment <p>字段描述</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>字段描述</p>
                     * @param _comment <p>字段描述</p>
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
                     * 获取<p>字段设置（已废弃）</p>
                     * @return FieldSetting <p>字段设置（已废弃）</p>
                     * 
                     */
                    std::string GetFieldSetting() const;

                    /**
                     * 设置<p>字段设置（已废弃）</p>
                     * @param _fieldSetting <p>字段设置（已废弃）</p>
                     * 
                     */
                    void SetFieldSetting(const std::string& _fieldSetting);

                    /**
                     * 判断参数 FieldSetting 是否已赋值
                     * @return FieldSetting 是否已赋值
                     * 
                     */
                    bool FieldSettingHasBeenSet() const;

                    /**
                     * 获取<p>是否为主键（已废弃）</p><p>枚举值：</p><ul><li>true： 是主键</li></ul>
                     * @return IsPrimaryKey <p>是否为主键（已废弃）</p><p>枚举值：</p><ul><li>true： 是主键</li></ul>
                     * 
                     */
                    bool GetIsPrimaryKey() const;

                    /**
                     * 设置<p>是否为主键（已废弃）</p><p>枚举值：</p><ul><li>true： 是主键</li></ul>
                     * @param _isPrimaryKey <p>是否为主键（已废弃）</p><p>枚举值：</p><ul><li>true： 是主键</li></ul>
                     * 
                     */
                    void SetIsPrimaryKey(const bool& _isPrimaryKey);

                    /**
                     * 判断参数 IsPrimaryKey 是否已赋值
                     * @return IsPrimaryKey 是否已赋值
                     * 
                     */
                    bool IsPrimaryKeyHasBeenSet() const;

                    /**
                     * 获取<p>字段类型 sqlType 格式</p>
                     * @return TypeText <p>字段类型 sqlType 格式</p>
                     * 
                     */
                    std::string GetTypeText() const;

                    /**
                     * 设置<p>字段类型 sqlType 格式</p>
                     * @param _typeText <p>字段类型 sqlType 格式</p>
                     * 
                     */
                    void SetTypeText(const std::string& _typeText);

                    /**
                     * 判断参数 TypeText 是否已赋值
                     * @return TypeText 是否已赋值
                     * 
                     */
                    bool TypeTextHasBeenSet() const;

                private:

                    /**
                     * <p>字段名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>字段类型</p><p>枚举值：</p><ul><li>integer： 数值类型</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>字段描述</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>字段设置（已废弃）</p>
                     */
                    std::string m_fieldSetting;
                    bool m_fieldSettingHasBeenSet;

                    /**
                     * <p>是否为主键（已废弃）</p><p>枚举值：</p><ul><li>true： 是主键</li></ul>
                     */
                    bool m_isPrimaryKey;
                    bool m_isPrimaryKeyHasBeenSet;

                    /**
                     * <p>字段类型 sqlType 格式</p>
                     */
                    std::string m_typeText;
                    bool m_typeTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COLUMNINFO_H_
