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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SCHEMADIFFERENCE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SCHEMADIFFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 结构不一致详情
                */
                class SchemaDifference : public AbstractModel
                {
                public:
                    SchemaDifference();
                    ~SchemaDifference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结构不一致的表所在库
                     * @return Db 结构不一致的表所在库
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置结构不一致的表所在库
                     * @param _db 结构不一致的表所在库
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取结构不一致的表所在schema
                     * @return Schema 结构不一致的表所在schema
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置结构不一致的表所在schema
                     * @param _schema 结构不一致的表所在schema
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
                     * 获取结构不一致的表
                     * @return Table 结构不一致的表
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置结构不一致的表
                     * @param _table 结构不一致的表
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
                     * 获取源库表结构
                     * @return SrcSchema 源库表结构
                     * 
                     */
                    std::string GetSrcSchema() const;

                    /**
                     * 设置源库表结构
                     * @param _srcSchema 源库表结构
                     * 
                     */
                    void SetSrcSchema(const std::string& _srcSchema);

                    /**
                     * 判断参数 SrcSchema 是否已赋值
                     * @return SrcSchema 是否已赋值
                     * 
                     */
                    bool SrcSchemaHasBeenSet() const;

                    /**
                     * 获取目标库表结构
                     * @return DstSchema 目标库表结构
                     * 
                     */
                    std::string GetDstSchema() const;

                    /**
                     * 设置目标库表结构
                     * @param _dstSchema 目标库表结构
                     * 
                     */
                    void SetDstSchema(const std::string& _dstSchema);

                    /**
                     * 判断参数 DstSchema 是否已赋值
                     * @return DstSchema 是否已赋值
                     * 
                     */
                    bool DstSchemaHasBeenSet() const;

                private:

                    /**
                     * 结构不一致的表所在库
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 结构不一致的表所在schema
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 结构不一致的表
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 源库表结构
                     */
                    std::string m_srcSchema;
                    bool m_srcSchemaHasBeenSet;

                    /**
                     * 目标库表结构
                     */
                    std::string m_dstSchema;
                    bool m_dstSchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SCHEMADIFFERENCE_H_
