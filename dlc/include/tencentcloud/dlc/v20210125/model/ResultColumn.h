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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESULTCOLUMN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESULTCOLUMN_H_

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
                * 结果集列定义（DescribeJobResult.Columns 的元素）.
                */
                class ResultColumn : public AbstractModel
                {
                public:
                    ResultColumn();
                    ~ResultColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>列名。</p>
                     * @return Name <p>列名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>列名。</p>
                     * @param _name <p>列名。</p>
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
                     * 获取<p>列数据类型（如 int / string）。</p>
                     * @return DataType <p>列数据类型（如 int / string）。</p>
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置<p>列数据类型（如 int / string）。</p>
                     * @param _dataType <p>列数据类型（如 int / string）。</p>
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取<p>列注释。</p>
                     * @return Comment <p>列注释。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>列注释。</p>
                     * @param _comment <p>列注释。</p>
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
                     * 获取<p>是否可为 NULL。</p>
                     * @return Nullable <p>是否可为 NULL。</p>
                     * 
                     */
                    bool GetNullable() const;

                    /**
                     * 设置<p>是否可为 NULL。</p>
                     * @param _nullable <p>是否可为 NULL。</p>
                     * 
                     */
                    void SetNullable(const bool& _nullable);

                    /**
                     * 判断参数 Nullable 是否已赋值
                     * @return Nullable 是否已赋值
                     * 
                     */
                    bool NullableHasBeenSet() const;

                private:

                    /**
                     * <p>列名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>列数据类型（如 int / string）。</p>
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * <p>列注释。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>是否可为 NULL。</p>
                     */
                    bool m_nullable;
                    bool m_nullableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESULTCOLUMN_H_
