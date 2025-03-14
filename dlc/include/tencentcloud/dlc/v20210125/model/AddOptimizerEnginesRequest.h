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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ADDOPTIMIZERENGINESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ADDOPTIMIZERENGINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/OptimizerEngineInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AddOptimizerEngines请求参数结构体
                */
                class AddOptimizerEnginesRequest : public AbstractModel
                {
                public:
                    AddOptimizerEnginesRequest();
                    ~AddOptimizerEnginesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据目录名称
                     * @return Catalog 数据目录名称
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置数据目录名称
                     * @param _catalog 数据目录名称
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取引擎信息列表
                     * @return Engines 引擎信息列表
                     * 
                     */
                    std::vector<OptimizerEngineInfo> GetEngines() const;

                    /**
                     * 设置引擎信息列表
                     * @param _engines 引擎信息列表
                     * 
                     */
                    void SetEngines(const std::vector<OptimizerEngineInfo>& _engines);

                    /**
                     * 判断参数 Engines 是否已赋值
                     * @return Engines 是否已赋值
                     * 
                     */
                    bool EnginesHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return Database 数据库名称
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名称
                     * @param _database 数据库名称
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取数据表名称
                     * @return Table 数据表名称
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置数据表名称
                     * @param _table 数据表名称
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * 数据目录名称
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 引擎信息列表
                     */
                    std::vector<OptimizerEngineInfo> m_engines;
                    bool m_enginesHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 数据表名称
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ADDOPTIMIZERENGINESREQUEST_H_
