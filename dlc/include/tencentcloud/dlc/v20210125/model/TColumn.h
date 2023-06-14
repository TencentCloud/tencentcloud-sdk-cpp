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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_

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
                * 表字段描述信息
                */
                class TColumn : public AbstractModel
                {
                public:
                    TColumn();
                    ~TColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
                     * @return Name 字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
                     * @param _name 字段名称
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
                     * 获取字段类型
                     * @return Type 字段类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型
                     * @param _type 字段类型
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
                     * 获取字段描述
                     * @return Comment 字段描述
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置字段描述
                     * @param _comment 字段描述
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
                     * 获取字段默认值
                     * @return Default 字段默认值
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置字段默认值
                     * @param _default 字段默认值
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取字段是否是非空
                     * @return NotNull 字段是否是非空
                     * 
                     */
                    bool GetNotNull() const;

                    /**
                     * 设置字段是否是非空
                     * @param _notNull 字段是否是非空
                     * 
                     */
                    void SetNotNull(const bool& _notNull);

                    /**
                     * 判断参数 NotNull 是否已赋值
                     * @return NotNull 是否已赋值
                     * 
                     */
                    bool NotNullHasBeenSet() const;

                private:

                    /**
                     * 字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 字段默认值
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 字段是否是非空
                     */
                    bool m_notNull;
                    bool m_notNullHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_
