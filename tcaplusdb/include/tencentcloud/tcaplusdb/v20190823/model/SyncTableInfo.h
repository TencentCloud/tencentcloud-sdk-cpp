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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SyncTableField.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * TcaplusDB的缓写表信息
                */
                class SyncTableInfo : public AbstractModel
                {
                public:
                    SyncTableInfo();
                    ~SyncTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标缓写表的分表数目
                     * @return TargetTableSplitNum 目标缓写表的分表数目
                     * 
                     */
                    uint64_t GetTargetTableSplitNum() const;

                    /**
                     * 设置目标缓写表的分表数目
                     * @param _targetTableSplitNum 目标缓写表的分表数目
                     * 
                     */
                    void SetTargetTableSplitNum(const uint64_t& _targetTableSplitNum);

                    /**
                     * 判断参数 TargetTableSplitNum 是否已赋值
                     * @return TargetTableSplitNum 是否已赋值
                     * 
                     */
                    bool TargetTableSplitNumHasBeenSet() const;

                    /**
                     * 获取目标缓写表名前缀
                     * @return TargetTableNamePrefix 目标缓写表名前缀
                     * 
                     */
                    std::vector<std::string> GetTargetTableNamePrefix() const;

                    /**
                     * 设置目标缓写表名前缀
                     * @param _targetTableNamePrefix 目标缓写表名前缀
                     * 
                     */
                    void SetTargetTableNamePrefix(const std::vector<std::string>& _targetTableNamePrefix);

                    /**
                     * 判断参数 TargetTableNamePrefix 是否已赋值
                     * @return TargetTableNamePrefix 是否已赋值
                     * 
                     */
                    bool TargetTableNamePrefixHasBeenSet() const;

                    /**
                     * 获取缓写数据库实例ID
                     * @return TargetSyncDBInstanceId 缓写数据库实例ID
                     * 
                     */
                    std::string GetTargetSyncDBInstanceId() const;

                    /**
                     * 设置缓写数据库实例ID
                     * @param _targetSyncDBInstanceId 缓写数据库实例ID
                     * 
                     */
                    void SetTargetSyncDBInstanceId(const std::string& _targetSyncDBInstanceId);

                    /**
                     * 判断参数 TargetSyncDBInstanceId 是否已赋值
                     * @return TargetSyncDBInstanceId 是否已赋值
                     * 
                     */
                    bool TargetSyncDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取缓写表所在数据库名称
                     * @return TargetDatabaseName 缓写表所在数据库名称
                     * 
                     */
                    std::string GetTargetDatabaseName() const;

                    /**
                     * 设置缓写表所在数据库名称
                     * @param _targetDatabaseName 缓写表所在数据库名称
                     * 
                     */
                    void SetTargetDatabaseName(const std::string& _targetDatabaseName);

                    /**
                     * 判断参数 TargetDatabaseName 是否已赋值
                     * @return TargetDatabaseName 是否已赋值
                     * 
                     */
                    bool TargetDatabaseNameHasBeenSet() const;

                    /**
                     * 获取缓写状态，0：创建中，1：进行中，2：关闭，-1：被删除
                     * @return Status 缓写状态，0：创建中，1：进行中，2：关闭，-1：被删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置缓写状态，0：创建中，1：进行中，2：关闭，-1：被删除
                     * @param _status 缓写状态，0：创建中，1：进行中，2：关闭，-1：被删除
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取表格所在集群ID
                     * @return ClusterId 表格所在集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表格所在集群ID
                     * @param _clusterId 表格所在集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取表格所在表格组ID
                     * @return TableGroupId 表格所在表格组ID
                     * 
                     */
                    uint64_t GetTableGroupId() const;

                    /**
                     * 设置表格所在表格组ID
                     * @param _tableGroupId 表格所在表格组ID
                     * 
                     */
                    void SetTableGroupId(const uint64_t& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表格名称
                     * @return TableName 表格名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名称
                     * @param _tableName 表格名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取表格ID
                     * @return TableId 表格ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表格ID
                     * @param _tableId 表格ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取TcaplusDB表主键字段到目标缓写表字段的映射
                     * @return KeyFieldMapping TcaplusDB表主键字段到目标缓写表字段的映射
                     * 
                     */
                    std::vector<SyncTableField> GetKeyFieldMapping() const;

                    /**
                     * 设置TcaplusDB表主键字段到目标缓写表字段的映射
                     * @param _keyFieldMapping TcaplusDB表主键字段到目标缓写表字段的映射
                     * 
                     */
                    void SetKeyFieldMapping(const std::vector<SyncTableField>& _keyFieldMapping);

                    /**
                     * 判断参数 KeyFieldMapping 是否已赋值
                     * @return KeyFieldMapping 是否已赋值
                     * 
                     */
                    bool KeyFieldMappingHasBeenSet() const;

                    /**
                     * 获取TcaplusDB表字段到目标缓写表字段的映射
                     * @return ValueFieldMapping TcaplusDB表字段到目标缓写表字段的映射
                     * 
                     */
                    std::vector<SyncTableField> GetValueFieldMapping() const;

                    /**
                     * 设置TcaplusDB表字段到目标缓写表字段的映射
                     * @param _valueFieldMapping TcaplusDB表字段到目标缓写表字段的映射
                     * 
                     */
                    void SetValueFieldMapping(const std::vector<SyncTableField>& _valueFieldMapping);

                    /**
                     * 判断参数 ValueFieldMapping 是否已赋值
                     * @return ValueFieldMapping 是否已赋值
                     * 
                     */
                    bool ValueFieldMappingHasBeenSet() const;

                private:

                    /**
                     * 目标缓写表的分表数目
                     */
                    uint64_t m_targetTableSplitNum;
                    bool m_targetTableSplitNumHasBeenSet;

                    /**
                     * 目标缓写表名前缀
                     */
                    std::vector<std::string> m_targetTableNamePrefix;
                    bool m_targetTableNamePrefixHasBeenSet;

                    /**
                     * 缓写数据库实例ID
                     */
                    std::string m_targetSyncDBInstanceId;
                    bool m_targetSyncDBInstanceIdHasBeenSet;

                    /**
                     * 缓写表所在数据库名称
                     */
                    std::string m_targetDatabaseName;
                    bool m_targetDatabaseNameHasBeenSet;

                    /**
                     * 缓写状态，0：创建中，1：进行中，2：关闭，-1：被删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 表格所在集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 表格所在表格组ID
                     */
                    uint64_t m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表格ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * TcaplusDB表主键字段到目标缓写表字段的映射
                     */
                    std::vector<SyncTableField> m_keyFieldMapping;
                    bool m_keyFieldMappingHasBeenSet;

                    /**
                     * TcaplusDB表字段到目标缓写表字段的映射
                     */
                    std::vector<SyncTableField> m_valueFieldMapping;
                    bool m_valueFieldMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEINFO_H_
