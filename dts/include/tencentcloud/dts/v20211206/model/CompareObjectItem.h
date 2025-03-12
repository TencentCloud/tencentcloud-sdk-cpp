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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECTITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareTableItem.h>
#include <tencentcloud/dts/v20211206/model/CompareViewItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 一致性校验库表对象
                */
                class CompareObjectItem : public AbstractModel
                {
                public:
                    CompareObjectItem();
                    ~CompareObjectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名
                     * @return DbName 数据库名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名
                     * @param _dbName 数据库名
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象
                     * @return DbMode 数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象
                     * @param _dbMode 数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取schema名称
                     * @return SchemaName schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名称
                     * @param _schemaName schema名称
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象
                     * @return TableMode 表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象
                     * @param _tableMode 表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象
                     * 
                     */
                    void SetTableMode(const std::string& _tableMode);

                    /**
                     * 判断参数 TableMode 是否已赋值
                     * @return TableMode 是否已赋值
                     * 
                     */
                    bool TableModeHasBeenSet() const;

                    /**
                     * 获取用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写
                     * @return Tables 用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写
                     * 
                     */
                    std::vector<CompareTableItem> GetTables() const;

                    /**
                     * 设置用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写
                     * @param _tables 用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写
                     * 
                     */
                    void SetTables(const std::vector<CompareTableItem>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)
                     * @return ViewMode 视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)
                     * 
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)
                     * @param _viewMode 视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)
                     * 
                     */
                    void SetViewMode(const std::string& _viewMode);

                    /**
                     * 判断参数 ViewMode 是否已赋值
                     * @return ViewMode 是否已赋值
                     * 
                     */
                    bool ViewModeHasBeenSet() const;

                    /**
                     * 获取用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Views 用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CompareViewItem> GetViews() const;

                    /**
                     * 设置用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _views 用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetViews(const std::vector<CompareViewItem>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * 用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写
                     */
                    std::vector<CompareTableItem> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * 视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * 用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CompareViewItem> m_views;
                    bool m_viewsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECTITEM_H_
