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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Database.h>
#include <tencentcloud/dts/v20211206/model/OnlineDDL.h>
#include <tencentcloud/dts/v20211206/model/DBOpFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 同步的数据库对对象描述
                */
                class Objects : public AbstractModel
                {
                public:
                    Objects();
                    ~Objects() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>同步对象类型 Partial(部分对象)</p>
                     * @return Mode <p>同步对象类型 Partial(部分对象)</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>同步对象类型 Partial(部分对象)</p>
                     * @param _mode <p>同步对象类型 Partial(部分对象)</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>同步对象，当 Mode 为 Partial 时，不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Databases <p>同步对象，当 Mode 为 Partial 时，不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Database> GetDatabases() const;

                    /**
                     * 设置<p>同步对象，当 Mode 为 Partial 时，不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databases <p>同步对象，当 Mode 为 Partial 时，不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabases(const std::vector<Database>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取<p>高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full</p>
                     * @return AdvancedObjects <p>高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full</p>
                     * 
                     */
                    std::vector<std::string> GetAdvancedObjects() const;

                    /**
                     * 设置<p>高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full</p>
                     * @param _advancedObjects <p>高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full</p>
                     * 
                     */
                    void SetAdvancedObjects(const std::vector<std::string>& _advancedObjects);

                    /**
                     * 判断参数 AdvancedObjects 是否已赋值
                     * @return AdvancedObjects 是否已赋值
                     * 
                     */
                    bool AdvancedObjectsHasBeenSet() const;

                    /**
                     * 获取<p>此字段已废弃。对于临时表的同步应该使用Objects.Databases[n].Tables[n].TmpTables传入。</p>
                     * @return OnlineDDL <p>此字段已废弃。对于临时表的同步应该使用Objects.Databases[n].Tables[n].TmpTables传入。</p>
                     * 
                     */
                    OnlineDDL GetOnlineDDL() const;

                    /**
                     * 设置<p>此字段已废弃。对于临时表的同步应该使用Objects.Databases[n].Tables[n].TmpTables传入。</p>
                     * @param _onlineDDL <p>此字段已废弃。对于临时表的同步应该使用Objects.Databases[n].Tables[n].TmpTables传入。</p>
                     * 
                     */
                    void SetOnlineDDL(const OnlineDDL& _onlineDDL);

                    /**
                     * 判断参数 OnlineDDL 是否已赋值
                     * @return OnlineDDL 是否已赋值
                     * 
                     */
                    bool OnlineDDLHasBeenSet() const;

                    /**
                     * 获取<p>库/表/视图级 DML/DDL 白名单</p>
                     * @return DatabasesOpFilter <p>库/表/视图级 DML/DDL 白名单</p>
                     * 
                     */
                    std::vector<DBOpFilter> GetDatabasesOpFilter() const;

                    /**
                     * 设置<p>库/表/视图级 DML/DDL 白名单</p>
                     * @param _databasesOpFilter <p>库/表/视图级 DML/DDL 白名单</p>
                     * 
                     */
                    void SetDatabasesOpFilter(const std::vector<DBOpFilter>& _databasesOpFilter);

                    /**
                     * 判断参数 DatabasesOpFilter 是否已赋值
                     * @return DatabasesOpFilter 是否已赋值
                     * 
                     */
                    bool DatabasesOpFilterHasBeenSet() const;

                private:

                    /**
                     * <p>同步对象类型 Partial(部分对象)</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>同步对象，当 Mode 为 Partial 时，不为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Database> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * <p>高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full</p>
                     */
                    std::vector<std::string> m_advancedObjects;
                    bool m_advancedObjectsHasBeenSet;

                    /**
                     * <p>此字段已废弃。对于临时表的同步应该使用Objects.Databases[n].Tables[n].TmpTables传入。</p>
                     */
                    OnlineDDL m_onlineDDL;
                    bool m_onlineDDLHasBeenSet;

                    /**
                     * <p>库/表/视图级 DML/DDL 白名单</p>
                     */
                    std::vector<DBOpFilter> m_databasesOpFilter;
                    bool m_databasesOpFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
