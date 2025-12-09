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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_COLUMNINFO_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_COLUMNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 知识库文档表列信息
                */
                class ColumnInfo : public AbstractModel
                {
                public:
                    ColumnInfo();
                    ~ColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列名称
                     * @return Name 列名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置列名称
                     * @param _name 列名称
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
                     * 获取列类型：int, bigint, double, date, datetime, string，decimal
                     * @return Type 列类型：int, bigint, double, date, datetime, string，decimal
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置列类型：int, bigint, double, date, datetime, string，decimal
                     * @param _type 列类型：int, bigint, double, date, datetime, string，decimal
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
                     * 获取列名称描述
                     * @return Description 列名称描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置列名称描述
                     * @param _description 列名称描述
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
                     * 获取列索引
                     * @return Index 列索引
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置列索引
                     * @param _index 列索引
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取原始字段名称
                     * @return OriginalName 原始字段名称
                     * 
                     */
                    std::string GetOriginalName() const;

                    /**
                     * 设置原始字段名称
                     * @param _originalName 原始字段名称
                     * 
                     */
                    void SetOriginalName(const std::string& _originalName);

                    /**
                     * 判断参数 OriginalName 是否已赋值
                     * @return OriginalName 是否已赋值
                     * 
                     */
                    bool OriginalNameHasBeenSet() const;

                private:

                    /**
                     * 列名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 列类型：int, bigint, double, date, datetime, string，decimal
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 列名称描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 列索引
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 原始字段名称
                     */
                    std::string m_originalName;
                    bool m_originalNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_COLUMNINFO_H_
