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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Table.h>
#include <tencentcloud/dts/v20211206/model/View.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 需要同步的库表对象
                */
                class Database : public AbstractModel
                {
                public:
                    Database();
                    ~Database() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>需要迁移或同步的库名，当ObjectMode为Partial时，此项必填</p>
                     * @return DbName <p>需要迁移或同步的库名，当ObjectMode为Partial时，此项必填</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>需要迁移或同步的库名，当ObjectMode为Partial时，此项必填</p>
                     * @param _dbName <p>需要迁移或同步的库名，当ObjectMode为Partial时，此项必填</p>
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
                     * 获取<p>迁移或同步后的库名，默认与源库相同</p>
                     * @return NewDbName <p>迁移或同步后的库名，默认与源库相同</p>
                     * 
                     */
                    std::string GetNewDbName() const;

                    /**
                     * 设置<p>迁移或同步后的库名，默认与源库相同</p>
                     * @param _newDbName <p>迁移或同步后的库名，默认与源库相同</p>
                     * 
                     */
                    void SetNewDbName(const std::string& _newDbName);

                    /**
                     * 判断参数 NewDbName 是否已赋值
                     * @return NewDbName 是否已赋值
                     * 
                     */
                    bool NewDbNameHasBeenSet() const;

                    /**
                     * 获取<p>DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。</p>
                     * @return DbMode <p>DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。</p>
                     * @param _dbMode <p>DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。</p>
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
                     * 获取<p>迁移或同步的 schema</p>
                     * @return SchemaName <p>迁移或同步的 schema</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>迁移或同步的 schema</p>
                     * @param _schemaName <p>迁移或同步的 schema</p>
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
                     * 获取<p>迁移或同步后的 schema name</p>
                     * @return NewSchemaName <p>迁移或同步后的 schema name</p>
                     * 
                     */
                    std::string GetNewSchemaName() const;

                    /**
                     * 设置<p>迁移或同步后的 schema name</p>
                     * @param _newSchemaName <p>迁移或同步后的 schema name</p>
                     * 
                     */
                    void SetNewSchemaName(const std::string& _newSchemaName);

                    /**
                     * 判断参数 NewSchemaName 是否已赋值
                     * @return NewSchemaName 是否已赋值
                     * 
                     */
                    bool NewSchemaNameHasBeenSet() const;

                    /**
                     * 获取<p>schema选择模式，pg和sqlserver需要使用</p><p>枚举值：</p><ul><li>All： 当前对象下的所有对象</li><li>Partial： 部分对象</li></ul>
                     * @return SchemaMode <p>schema选择模式，pg和sqlserver需要使用</p><p>枚举值：</p><ul><li>All： 当前对象下的所有对象</li><li>Partial： 部分对象</li></ul>
                     * 
                     */
                    std::string GetSchemaMode() const;

                    /**
                     * 设置<p>schema选择模式，pg和sqlserver需要使用</p><p>枚举值：</p><ul><li>All： 当前对象下的所有对象</li><li>Partial： 部分对象</li></ul>
                     * @param _schemaMode <p>schema选择模式，pg和sqlserver需要使用</p><p>枚举值：</p><ul><li>All： 当前对象下的所有对象</li><li>Partial： 部分对象</li></ul>
                     * 
                     */
                    void SetSchemaMode(const std::string& _schemaMode);

                    /**
                     * 判断参数 SchemaMode 是否已赋值
                     * @return SchemaMode 是否已赋值
                     * 
                     */
                    bool SchemaModeHasBeenSet() const;

                    /**
                     * 获取<p>表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。</p>
                     * @return TableMode <p>表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。</p>
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置<p>表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。</p>
                     * @param _tableMode <p>表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。</p>
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
                     * 获取<p>表图对象集合，当 TableMode 为 Partial 时，此项需要填写</p>
                     * @return Tables <p>表图对象集合，当 TableMode 为 Partial 时，此项需要填写</p>
                     * 
                     */
                    std::vector<Table> GetTables() const;

                    /**
                     * 设置<p>表图对象集合，当 TableMode 为 Partial 时，此项需要填写</p>
                     * @param _tables <p>表图对象集合，当 TableMode 为 Partial 时，此项需要填写</p>
                     * 
                     */
                    void SetTables(const std::vector<Table>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。</p>
                     * @return ViewMode <p>视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。</p>
                     * 
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置<p>视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。</p>
                     * @param _viewMode <p>视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。</p>
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
                     * 获取<p>视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写</p>
                     * @return Views <p>视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写</p>
                     * 
                     */
                    std::vector<View> GetViews() const;

                    /**
                     * 设置<p>视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写</p>
                     * @param _views <p>视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写</p>
                     * 
                     */
                    void SetViews(const std::vector<View>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                    /**
                     * 获取<p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * @return FunctionMode <p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * 
                     */
                    std::string GetFunctionMode() const;

                    /**
                     * 设置<p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * @param _functionMode <p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * 
                     */
                    void SetFunctionMode(const std::string& _functionMode);

                    /**
                     * 判断参数 FunctionMode 是否已赋值
                     * @return FunctionMode 是否已赋值
                     * 
                     */
                    bool FunctionModeHasBeenSet() const;

                    /**
                     * 获取<p>FunctionMode取值为Partial时需要填写</p>
                     * @return Functions <p>FunctionMode取值为Partial时需要填写</p>
                     * 
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置<p>FunctionMode取值为Partial时需要填写</p>
                     * @param _functions <p>FunctionMode取值为Partial时需要填写</p>
                     * 
                     */
                    void SetFunctions(const std::vector<std::string>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取<p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * @return ProcedureMode <p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * 
                     */
                    std::string GetProcedureMode() const;

                    /**
                     * 设置<p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * @param _procedureMode <p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     * 
                     */
                    void SetProcedureMode(const std::string& _procedureMode);

                    /**
                     * 判断参数 ProcedureMode 是否已赋值
                     * @return ProcedureMode 是否已赋值
                     * 
                     */
                    bool ProcedureModeHasBeenSet() const;

                    /**
                     * 获取<p>ProcedureMode取值为Partial时需要填写</p>
                     * @return Procedures <p>ProcedureMode取值为Partial时需要填写</p>
                     * 
                     */
                    std::vector<std::string> GetProcedures() const;

                    /**
                     * 设置<p>ProcedureMode取值为Partial时需要填写</p>
                     * @param _procedures <p>ProcedureMode取值为Partial时需要填写</p>
                     * 
                     */
                    void SetProcedures(const std::vector<std::string>& _procedures);

                    /**
                     * 判断参数 Procedures 是否已赋值
                     * @return Procedures 是否已赋值
                     * 
                     */
                    bool ProceduresHasBeenSet() const;

                    /**
                     * 获取<p>触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * @return TriggerMode <p>触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置<p>触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * @param _triggerMode <p>触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * 
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     * 
                     */
                    bool TriggerModeHasBeenSet() const;

                    /**
                     * 获取<p>当TriggerMode为partial，指定要迁移的触发器名称</p>
                     * @return Triggers <p>当TriggerMode为partial，指定要迁移的触发器名称</p>
                     * 
                     */
                    std::vector<std::string> GetTriggers() const;

                    /**
                     * 设置<p>当TriggerMode为partial，指定要迁移的触发器名称</p>
                     * @param _triggers <p>当TriggerMode为partial，指定要迁移的触发器名称</p>
                     * 
                     */
                    void SetTriggers(const std::vector<std::string>& _triggers);

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取<p>事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * @return EventMode <p>事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * 
                     */
                    std::string GetEventMode() const;

                    /**
                     * 设置<p>事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * @param _eventMode <p>事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     * 
                     */
                    void SetEventMode(const std::string& _eventMode);

                    /**
                     * 判断参数 EventMode 是否已赋值
                     * @return EventMode 是否已赋值
                     * 
                     */
                    bool EventModeHasBeenSet() const;

                    /**
                     * 获取<p>当EventMode为partial，指定要迁移的事件名称</p>
                     * @return Events <p>当EventMode为partial，指定要迁移的事件名称</p>
                     * 
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置<p>当EventMode为partial，指定要迁移的事件名称</p>
                     * @param _events <p>当EventMode为partial，指定要迁移的事件名称</p>
                     * 
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                private:

                    /**
                     * <p>需要迁移或同步的库名，当ObjectMode为Partial时，此项必填</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>迁移或同步后的库名，默认与源库相同</p>
                     */
                    std::string m_newDbName;
                    bool m_newDbNameHasBeenSet;

                    /**
                     * <p>DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>迁移或同步的 schema</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>迁移或同步后的 schema name</p>
                     */
                    std::string m_newSchemaName;
                    bool m_newSchemaNameHasBeenSet;

                    /**
                     * <p>schema选择模式，pg和sqlserver需要使用</p><p>枚举值：</p><ul><li>All： 当前对象下的所有对象</li><li>Partial： 部分对象</li></ul>
                     */
                    std::string m_schemaMode;
                    bool m_schemaModeHasBeenSet;

                    /**
                     * <p>表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。</p>
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * <p>表图对象集合，当 TableMode 为 Partial 时，此项需要填写</p>
                     */
                    std::vector<Table> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。</p>
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * <p>视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写</p>
                     */
                    std::vector<View> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * <p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     */
                    std::string m_functionMode;
                    bool m_functionModeHasBeenSet;

                    /**
                     * <p>FunctionMode取值为Partial时需要填写</p>
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * <p>选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。</p>
                     */
                    std::string m_procedureMode;
                    bool m_procedureModeHasBeenSet;

                    /**
                     * <p>ProcedureMode取值为Partial时需要填写</p>
                     */
                    std::vector<std::string> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * <p>触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * <p>当TriggerMode为partial，指定要迁移的触发器名称</p>
                     */
                    std::vector<std::string> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * <p>事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。</p>
                     */
                    std::string m_eventMode;
                    bool m_eventModeHasBeenSet;

                    /**
                     * <p>当EventMode为partial，指定要迁移的事件名称</p>
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_
