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
                     * 获取<p>数据库名</p>
                     * @return DbName <p>数据库名</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _dbName <p>数据库名</p>
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
                     * 获取<p>数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象</p>
                     * @return DbMode <p>数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象</p>
                     * @param _dbMode <p>数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象</p>
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
                     * 获取<p>schema名称</p>
                     * @return SchemaName <p>schema名称</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema名称</p>
                     * @param _schemaName <p>schema名称</p>
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
                     * 获取<p>表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象</p>
                     * @return TableMode <p>表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象</p>
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置<p>表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象</p>
                     * @param _tableMode <p>表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象</p>
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
                     * 获取<p>用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写</p>
                     * @return Tables <p>用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写</p>
                     * 
                     */
                    std::vector<CompareTableItem> GetTables() const;

                    /**
                     * 设置<p>用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写</p>
                     * @param _tables <p>用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写</p>
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
                     * 获取<p>视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)</p>
                     * @return ViewMode <p>视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)</p>
                     * 
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置<p>视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)</p>
                     * @param _viewMode <p>视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)</p>
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
                     * 获取<p>用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Views <p>用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CompareViewItem> GetViews() const;

                    /**
                     * 设置<p>用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _views <p>用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)</p>
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
                     * <p>数据库名</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>数据库选择模式: all 为当前对象下的所有对象,partial 为部分对象</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>schema名称</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>表选择模式: all 为当前对象下的所有表对象,partial 为部分表对象</p>
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * <p>用于一致性校验的表配置，当 TableMode 为 partial 时，需要填写</p>
                     */
                    std::vector<CompareTableItem> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象(一致性校验不校验视图，当前参数未启作用)</p>
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * <p>用于一致性校验的视图配置，当 ViewMode 为 partial 时， 需要填写(一致性校验不校验视图，当前参数未启作用)</p>
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
