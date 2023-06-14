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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/DatabaseTable.h>
#include <tencentcloud/mariadb/v20170312/model/DatabaseView.h>
#include <tencentcloud/mariadb/v20170312/model/DatabaseProcedure.h>
#include <tencentcloud/mariadb/v20170312/model/DatabaseFunction.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
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
                     * 获取透传入参。
                     * @return InstanceId 透传入参。
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
                     * 获取数据库名称。
                     * @return DbName 数据库名称。
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
                     * 获取表列表。
                     * @return Tables 表列表。
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
                     * 获取视图列表。
                     * @return Views 视图列表。
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
                     * 获取存储过程列表。
                     * @return Procs 存储过程列表。
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
                     * 获取函数列表。
                     * @return Funcs 函数列表。
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
                     * 透传入参。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 表列表。
                     */
                    std::vector<DatabaseTable> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * 视图列表。
                     */
                    std::vector<DatabaseView> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * 存储过程列表。
                     */
                    std::vector<DatabaseProcedure> m_procs;
                    bool m_procsHasBeenSet;

                    /**
                     * 函数列表。
                     */
                    std::vector<DatabaseFunction> m_funcs;
                    bool m_funcsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
