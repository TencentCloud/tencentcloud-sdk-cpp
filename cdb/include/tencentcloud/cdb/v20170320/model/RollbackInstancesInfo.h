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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKINSTANCESINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKINSTANCESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RollbackDBName.h>
#include <tencentcloud/cdb/v20170320/model/RollbackTables.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 用于回档的实例详情
                */
                class RollbackInstancesInfo : public AbstractModel
                {
                public:
                    RollbackInstancesInfo();
                    ~RollbackInstancesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云数据库实例ID
                     * @return InstanceId 云数据库实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云数据库实例ID
                     * @param _instanceId 云数据库实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取回档策略。可选值为：table、db、full；默认值为full。table - 极速回档模式，仅导入所选中表级别的备份和binlog，如有跨表操作，且关联表未被同时选中，将会导致回档失败，该模式下参数Databases必须为空；db - 快速模式，仅导入所选中库级别的备份和binlog，如有跨库操作，且关联库未被同时选中，将会导致回档失败；full - 普通回档模式，将导入整个实例的备份和binlog，速度较慢。
                     * @return Strategy 回档策略。可选值为：table、db、full；默认值为full。table - 极速回档模式，仅导入所选中表级别的备份和binlog，如有跨表操作，且关联表未被同时选中，将会导致回档失败，该模式下参数Databases必须为空；db - 快速模式，仅导入所选中库级别的备份和binlog，如有跨库操作，且关联库未被同时选中，将会导致回档失败；full - 普通回档模式，将导入整个实例的备份和binlog，速度较慢。
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置回档策略。可选值为：table、db、full；默认值为full。table - 极速回档模式，仅导入所选中表级别的备份和binlog，如有跨表操作，且关联表未被同时选中，将会导致回档失败，该模式下参数Databases必须为空；db - 快速模式，仅导入所选中库级别的备份和binlog，如有跨库操作，且关联库未被同时选中，将会导致回档失败；full - 普通回档模式，将导入整个实例的备份和binlog，速度较慢。
                     * @param _strategy 回档策略。可选值为：table、db、full；默认值为full。table - 极速回档模式，仅导入所选中表级别的备份和binlog，如有跨表操作，且关联表未被同时选中，将会导致回档失败，该模式下参数Databases必须为空；db - 快速模式，仅导入所选中库级别的备份和binlog，如有跨库操作，且关联库未被同时选中，将会导致回档失败；full - 普通回档模式，将导入整个实例的备份和binlog，速度较慢。
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取数据库回档时间，时间格式为：yyyy-mm-dd hh:mm:ss
                     * @return RollbackTime 数据库回档时间，时间格式为：yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置数据库回档时间，时间格式为：yyyy-mm-dd hh:mm:ss
                     * @param _rollbackTime 数据库回档时间，时间格式为：yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     * 
                     */
                    bool RollbackTimeHasBeenSet() const;

                    /**
                     * 获取待回档的数据库信息，表示整库回档
                     * @return Databases 待回档的数据库信息，表示整库回档
                     * 
                     */
                    std::vector<RollbackDBName> GetDatabases() const;

                    /**
                     * 设置待回档的数据库信息，表示整库回档
                     * @param _databases 待回档的数据库信息，表示整库回档
                     * 
                     */
                    void SetDatabases(const std::vector<RollbackDBName>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取待回档的数据库表信息，表示按表回档
                     * @return Tables 待回档的数据库表信息，表示按表回档
                     * 
                     */
                    std::vector<RollbackTables> GetTables() const;

                    /**
                     * 设置待回档的数据库表信息，表示按表回档
                     * @param _tables 待回档的数据库表信息，表示按表回档
                     * 
                     */
                    void SetTables(const std::vector<RollbackTables>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                private:

                    /**
                     * 云数据库实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 回档策略。可选值为：table、db、full；默认值为full。table - 极速回档模式，仅导入所选中表级别的备份和binlog，如有跨表操作，且关联表未被同时选中，将会导致回档失败，该模式下参数Databases必须为空；db - 快速模式，仅导入所选中库级别的备份和binlog，如有跨库操作，且关联库未被同时选中，将会导致回档失败；full - 普通回档模式，将导入整个实例的备份和binlog，速度较慢。
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 数据库回档时间，时间格式为：yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * 待回档的数据库信息，表示整库回档
                     */
                    std::vector<RollbackDBName> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * 待回档的数据库表信息，表示按表回档
                     */
                    std::vector<RollbackTables> m_tables;
                    bool m_tablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKINSTANCESINFO_H_
