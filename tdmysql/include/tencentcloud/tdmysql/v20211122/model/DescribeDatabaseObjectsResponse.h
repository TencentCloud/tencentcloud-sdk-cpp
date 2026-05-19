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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/DatabaseTable.h>
#include <tencentcloud/tdmysql/v20211122/model/DatabaseView.h>
#include <tencentcloud/tdmysql/v20211122/model/DatabaseProcedure.h>
#include <tencentcloud/tdmysql/v20211122/model/DatabaseFunction.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjects返回参数结构体
                */
                class DescribeDatabaseObjectsResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsResponse();
                    ~DescribeDatabaseObjectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>透传入参。</p>
                     * @return InstanceId <p>透传入参。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库名称。</p>
                     * @return DbName <p>数据库名称。</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取<p>表列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tables <p>表列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatabaseTable> GetTables() const;

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>视图列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Views <p>视图列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatabaseView> GetViews() const;

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                    /**
                     * 获取<p>存储过程列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Procs <p>存储过程列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatabaseProcedure> GetProcs() const;

                    /**
                     * 判断参数 Procs 是否已赋值
                     * @return Procs 是否已赋值
                     * 
                     */
                    bool ProcsHasBeenSet() const;

                    /**
                     * 获取<p>函数列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Funcs <p>函数列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatabaseFunction> GetFuncs() const;

                    /**
                     * 判断参数 Funcs 是否已赋值
                     * @return Funcs 是否已赋值
                     * 
                     */
                    bool FuncsHasBeenSet() const;

                private:

                    /**
                     * <p>透传入参。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>数据库名称。</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>表列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatabaseTable> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>视图列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatabaseView> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * <p>存储过程列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatabaseProcedure> m_procs;
                    bool m_procsHasBeenSet;

                    /**
                     * <p>函数列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatabaseFunction> m_funcs;
                    bool m_funcsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
