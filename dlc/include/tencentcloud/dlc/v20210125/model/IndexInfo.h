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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_INDEXINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_INDEXINFO_H_

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
                * tcc IndexInfo定义
                */
                class IndexInfo : public AbstractModel
                {
                public:
                    IndexInfo();
                    ~IndexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>索引名称</p>
                     * @return Name <p>索引名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>索引名称</p>
                     * @param _name <p>索引名称</p>
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
                     * 获取<p>索引类型</p><p>枚举值：</p><ul><li>primary_key： 主键</li></ul>
                     * @return Type <p>索引类型</p><p>枚举值：</p><ul><li>primary_key： 主键</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>索引类型</p><p>枚举值：</p><ul><li>primary_key： 主键</li></ul>
                     * @param _type <p>索引类型</p><p>枚举值：</p><ul><li>primary_key： 主键</li></ul>
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
                     * 获取<p>索引字段</p>
                     * @return FieldNames <p>索引字段</p>
                     * 
                     */
                    std::vector<std::string> GetFieldNames() const;

                    /**
                     * 设置<p>索引字段</p>
                     * @param _fieldNames <p>索引字段</p>
                     * 
                     */
                    void SetFieldNames(const std::vector<std::string>& _fieldNames);

                    /**
                     * 判断参数 FieldNames 是否已赋值
                     * @return FieldNames 是否已赋值
                     * 
                     */
                    bool FieldNamesHasBeenSet() const;

                private:

                    /**
                     * <p>索引名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>索引类型</p><p>枚举值：</p><ul><li>primary_key： 主键</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>索引字段</p>
                     */
                    std::vector<std::string> m_fieldNames;
                    bool m_fieldNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_INDEXINFO_H_
