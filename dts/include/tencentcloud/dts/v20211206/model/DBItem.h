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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TableItem.h>
#include <tencentcloud/dts/v20211206/model/ViewItem.h>
#include <tencentcloud/dts/v20211206/model/RoleItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 迁移对象信息，在配置库表视图等对象信息时大小写敏感
                */
                class DBItem : public AbstractModel
                {
                public:
                    DBItem();
                    ~DBItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要迁移或同步的库名，当ObjectMode为partial时，此项必填
                     * @return DbName 需要迁移或同步的库名，当ObjectMode为partial时，此项必填
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置需要迁移或同步的库名，当ObjectMode为partial时，此项必填
                     * @param _dbName 需要迁移或同步的库名，当ObjectMode为partial时，此项必填
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
                     * 获取迁移或同步后的库名，默认与源库相同
                     * @return NewDbName 迁移或同步后的库名，默认与源库相同
                     * 
                     */
                    std::string GetNewDbName() const;

                    /**
                     * 设置迁移或同步后的库名，默认与源库相同
                     * @param _newDbName 迁移或同步后的库名，默认与源库相同
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
                     * 获取迁移或同步的 schema
                     * @return SchemaName 迁移或同步的 schema
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置迁移或同步的 schema
                     * @param _schemaName 迁移或同步的 schema
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
                     * 获取迁移或同步后的 schema name
                     * @return NewSchemaName 迁移或同步后的 schema name
                     * 
                     */
                    std::string GetNewSchemaName() const;

                    /**
                     * 设置迁移或同步后的 schema name
                     * @param _newSchemaName 迁移或同步后的 schema name
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
                     * 获取DB选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当ObjectMode为partial时，此项必填
                     * @return DBMode DB选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当ObjectMode为partial时，此项必填
                     * 
                     */
                    std::string GetDBMode() const;

                    /**
                     * 设置DB选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当ObjectMode为partial时，此项必填
                     * @param _dBMode DB选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当ObjectMode为partial时，此项必填
                     * 
                     */
                    void SetDBMode(const std::string& _dBMode);

                    /**
                     * 判断参数 DBMode 是否已赋值
                     * @return DBMode 是否已赋值
                     * 
                     */
                    bool DBModeHasBeenSet() const;

                    /**
                     * 获取schema选择模式: all(为当前对象下的所有对象)，partial(部分对象)
                     * @return SchemaMode schema选择模式: all(为当前对象下的所有对象)，partial(部分对象)
                     * 
                     */
                    std::string GetSchemaMode() const;

                    /**
                     * 设置schema选择模式: all(为当前对象下的所有对象)，partial(部分对象)
                     * @param _schemaMode schema选择模式: all(为当前对象下的所有对象)，partial(部分对象)
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
                     * 获取表选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当DBMode为partial时此项必填
                     * @return TableMode 表选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当DBMode为partial时此项必填
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置表选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当DBMode为partial时此项必填
                     * @param _tableMode 表选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当DBMode为partial时此项必填
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
                     * 获取表图对象集合，当 TableMode 为 partial 时，此项需要填写
                     * @return Tables 表图对象集合，当 TableMode 为 partial 时，此项需要填写
                     * 
                     */
                    std::vector<TableItem> GetTables() const;

                    /**
                     * 设置表图对象集合，当 TableMode 为 partial 时，此项需要填写
                     * @param _tables 表图对象集合，当 TableMode 为 partial 时，此项需要填写
                     * 
                     */
                    void SetTables(const std::vector<TableItem>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象
                     * @return ViewMode 视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象
                     * 
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象
                     * @param _viewMode 视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象
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
                     * 获取视图对象集合，当 ViewMode 为 partial 时， 此项需要填写
                     * @return Views 视图对象集合，当 ViewMode 为 partial 时， 此项需要填写
                     * 
                     */
                    std::vector<ViewItem> GetViews() const;

                    /**
                     * 设置视图对象集合，当 ViewMode 为 partial 时， 此项需要填写
                     * @param _views 视图对象集合，当 ViewMode 为 partial 时， 此项需要填写
                     * 
                     */
                    void SetViews(const std::vector<ViewItem>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                    /**
                     * 获取postgresql独有参数，角色选择模式: all 为当前对象下的所有角色对象,partial 为部分角色对象
                     * @return RoleMode postgresql独有参数，角色选择模式: all 为当前对象下的所有角色对象,partial 为部分角色对象
                     * 
                     */
                    std::string GetRoleMode() const;

                    /**
                     * 设置postgresql独有参数，角色选择模式: all 为当前对象下的所有角色对象,partial 为部分角色对象
                     * @param _roleMode postgresql独有参数，角色选择模式: all 为当前对象下的所有角色对象,partial 为部分角色对象
                     * 
                     */
                    void SetRoleMode(const std::string& _roleMode);

                    /**
                     * 判断参数 RoleMode 是否已赋值
                     * @return RoleMode 是否已赋值
                     * 
                     */
                    bool RoleModeHasBeenSet() const;

                    /**
                     * 获取postgresql独有参数，当 RoleMode 为 partial 时， 此项需要填写
                     * @return Roles postgresql独有参数，当 RoleMode 为 partial 时， 此项需要填写
                     * 
                     */
                    std::vector<RoleItem> GetRoles() const;

                    /**
                     * 设置postgresql独有参数，当 RoleMode 为 partial 时， 此项需要填写
                     * @param _roles postgresql独有参数，当 RoleMode 为 partial 时， 此项需要填写
                     * 
                     */
                    void SetRoles(const std::vector<RoleItem>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取选择要同步的模式，partial为部分，all为整选
                     * @return FunctionMode 选择要同步的模式，partial为部分，all为整选
                     * 
                     */
                    std::string GetFunctionMode() const;

                    /**
                     * 设置选择要同步的模式，partial为部分，all为整选
                     * @param _functionMode 选择要同步的模式，partial为部分，all为整选
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
                     * 获取选择要同步的模式，partial为部分，all为整选
                     * @return TriggerMode 选择要同步的模式，partial为部分，all为整选
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置选择要同步的模式，partial为部分，all为整选
                     * @param _triggerMode 选择要同步的模式，partial为部分，all为整选
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
                     * 获取选择要同步的模式，partial为部分，all为整选
                     * @return EventMode 选择要同步的模式，partial为部分，all为整选
                     * 
                     */
                    std::string GetEventMode() const;

                    /**
                     * 设置选择要同步的模式，partial为部分，all为整选
                     * @param _eventMode 选择要同步的模式，partial为部分，all为整选
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
                     * 获取选择要同步的模式，partial为部分，all为整选
                     * @return ProcedureMode 选择要同步的模式，partial为部分，all为整选
                     * 
                     */
                    std::string GetProcedureMode() const;

                    /**
                     * 设置选择要同步的模式，partial为部分，all为整选
                     * @param _procedureMode 选择要同步的模式，partial为部分，all为整选
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
                     * 获取FunctionMode取值为partial时需要填写
                     * @return Functions FunctionMode取值为partial时需要填写
                     * 
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置FunctionMode取值为partial时需要填写
                     * @param _functions FunctionMode取值为partial时需要填写
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
                     * 获取ProcedureMode取值为partial时需要填写
                     * @return Procedures ProcedureMode取值为partial时需要填写
                     * 
                     */
                    std::vector<std::string> GetProcedures() const;

                    /**
                     * 设置ProcedureMode取值为partial时需要填写
                     * @param _procedures ProcedureMode取值为partial时需要填写
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
                     * 获取EventMode取值为partial时需要填写
                     * @return Events EventMode取值为partial时需要填写
                     * 
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置EventMode取值为partial时需要填写
                     * @param _events EventMode取值为partial时需要填写
                     * 
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取TriggerMode取值为partial时需要填写
                     * @return Triggers TriggerMode取值为partial时需要填写
                     * 
                     */
                    std::vector<std::string> GetTriggers() const;

                    /**
                     * 设置TriggerMode取值为partial时需要填写
                     * @param _triggers TriggerMode取值为partial时需要填写
                     * 
                     */
                    void SetTriggers(const std::vector<std::string>& _triggers);

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                private:

                    /**
                     * 需要迁移或同步的库名，当ObjectMode为partial时，此项必填
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 迁移或同步后的库名，默认与源库相同
                     */
                    std::string m_newDbName;
                    bool m_newDbNameHasBeenSet;

                    /**
                     * 迁移或同步的 schema
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 迁移或同步后的 schema name
                     */
                    std::string m_newSchemaName;
                    bool m_newSchemaNameHasBeenSet;

                    /**
                     * DB选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当ObjectMode为partial时，此项必填
                     */
                    std::string m_dBMode;
                    bool m_dBModeHasBeenSet;

                    /**
                     * schema选择模式: all(为当前对象下的所有对象)，partial(部分对象)
                     */
                    std::string m_schemaMode;
                    bool m_schemaModeHasBeenSet;

                    /**
                     * 表选择模式: all(为当前对象下的所有对象)，partial(部分对象)，当DBMode为partial时此项必填
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * 表图对象集合，当 TableMode 为 partial 时，此项需要填写
                     */
                    std::vector<TableItem> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * 视图选择模式: all 为当前对象下的所有视图对象,partial 为部分视图对象
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * 视图对象集合，当 ViewMode 为 partial 时， 此项需要填写
                     */
                    std::vector<ViewItem> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * postgresql独有参数，角色选择模式: all 为当前对象下的所有角色对象,partial 为部分角色对象
                     */
                    std::string m_roleMode;
                    bool m_roleModeHasBeenSet;

                    /**
                     * postgresql独有参数，当 RoleMode 为 partial 时， 此项需要填写
                     */
                    std::vector<RoleItem> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * 选择要同步的模式，partial为部分，all为整选
                     */
                    std::string m_functionMode;
                    bool m_functionModeHasBeenSet;

                    /**
                     * 选择要同步的模式，partial为部分，all为整选
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * 选择要同步的模式，partial为部分，all为整选
                     */
                    std::string m_eventMode;
                    bool m_eventModeHasBeenSet;

                    /**
                     * 选择要同步的模式，partial为部分，all为整选
                     */
                    std::string m_procedureMode;
                    bool m_procedureModeHasBeenSet;

                    /**
                     * FunctionMode取值为partial时需要填写
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * ProcedureMode取值为partial时需要填写
                     */
                    std::vector<std::string> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * EventMode取值为partial时需要填写
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * TriggerMode取值为partial时需要填写
                     */
                    std::vector<std::string> m_triggers;
                    bool m_triggersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBITEM_H_
