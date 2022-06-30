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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSTABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDMSTable请求参数结构体
                */
                class DescribeDMSTableRequest : public AbstractModel
                {
                public:
                    DescribeDMSTableRequest();
                    ~DescribeDMSTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param DbName 数据库名称
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取数据库schema名称
                     * @return SchemaName 数据库schema名称
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置数据库schema名称
                     * @param SchemaName 数据库schema名称
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return Name 表名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置表名称
                     * @param Name 表名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取数据目录
                     * @return Catalog 数据目录
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置数据目录
                     * @param Catalog 数据目录
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取查询关键词
                     * @return Keyword 查询关键词
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置查询关键词
                     * @param Keyword 查询关键词
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取查询模式
                     * @return Pattern 查询模式
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置查询模式
                     * @param Pattern 查询模式
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取表类型
                     * @return Type 表类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置表类型
                     * @param Type 表类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据库schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据目录
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 查询关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 查询模式
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 表类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSTABLEREQUEST_H_
