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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TABLEMAPPINGOBJECT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TABLEMAPPINGOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 表映射关系
                */
                class TableMappingObject : public AbstractModel
                {
                public:
                    TableMappingObject();
                    ~TableMappingObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源端实例Id
                     * @return SrcInstanceId 源端实例Id
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源端实例Id
                     * @param _srcInstanceId 源端实例Id
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
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
                     * 获取映射数据库名称
                     * @return MapDatabaseName 映射数据库名称
                     * 
                     */
                    std::string GetMapDatabaseName() const;

                    /**
                     * 设置映射数据库名称
                     * @param _mapDatabaseName 映射数据库名称
                     * 
                     */
                    void SetMapDatabaseName(const std::string& _mapDatabaseName);

                    /**
                     * 判断参数 MapDatabaseName 是否已赋值
                     * @return MapDatabaseName 是否已赋值
                     * 
                     */
                    bool MapDatabaseNameHasBeenSet() const;

                    /**
                     * 获取映射表名
                     * @return MapTableName 映射表名
                     * 
                     */
                    std::string GetMapTableName() const;

                    /**
                     * 设置映射表名
                     * @param _mapTableName 映射表名
                     * 
                     */
                    void SetMapTableName(const std::string& _mapTableName);

                    /**
                     * 判断参数 MapTableName 是否已赋值
                     * @return MapTableName 是否已赋值
                     * 
                     */
                    bool MapTableNameHasBeenSet() const;

                    /**
                     * 获取同步状态
                     * @return Status 同步状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置同步状态
                     * @param _status 同步状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取同步进度
                     * @return Process 同步进度
                     * 
                     */
                    double GetProcess() const;

                    /**
                     * 设置同步进度
                     * @param _process 同步进度
                     * 
                     */
                    void SetProcess(const double& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取延迟
                     * @return Lag 延迟
                     * 
                     */
                    int64_t GetLag() const;

                    /**
                     * 设置延迟
                     * @param _lag 延迟
                     * 
                     */
                    void SetLag(const int64_t& _lag);

                    /**
                     * 判断参数 Lag 是否已赋值
                     * @return Lag 是否已赋值
                     * 
                     */
                    bool LagHasBeenSet() const;

                    /**
                     * 获取消息
                     * @return Message 消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置消息
                     * @param _message 消息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取是否为主表
                     * @return IsPrimary 是否为主表
                     * 
                     */
                    bool GetIsPrimary() const;

                    /**
                     * 设置是否为主表
                     * @param _isPrimary 是否为主表
                     * 
                     */
                    void SetIsPrimary(const bool& _isPrimary);

                    /**
                     * 判断参数 IsPrimary 是否已赋值
                     * @return IsPrimary 是否已赋值
                     * 
                     */
                    bool IsPrimaryHasBeenSet() const;

                    /**
                     * 获取虚拟列填充值
                     * @return VirtualColValue 虚拟列填充值
                     * 
                     */
                    std::string GetVirtualColValue() const;

                    /**
                     * 设置虚拟列填充值
                     * @param _virtualColValue 虚拟列填充值
                     * 
                     */
                    void SetVirtualColValue(const std::string& _virtualColValue);

                    /**
                     * 判断参数 VirtualColValue 是否已赋值
                     * @return VirtualColValue 是否已赋值
                     * 
                     */
                    bool VirtualColValueHasBeenSet() const;

                private:

                    /**
                     * 源端实例Id
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 映射数据库名称
                     */
                    std::string m_mapDatabaseName;
                    bool m_mapDatabaseNameHasBeenSet;

                    /**
                     * 映射表名
                     */
                    std::string m_mapTableName;
                    bool m_mapTableNameHasBeenSet;

                    /**
                     * 同步状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 同步进度
                     */
                    double m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 延迟
                     */
                    int64_t m_lag;
                    bool m_lagHasBeenSet;

                    /**
                     * 消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 是否为主表
                     */
                    bool m_isPrimary;
                    bool m_isPrimaryHasBeenSet;

                    /**
                     * 虚拟列填充值
                     */
                    std::string m_virtualColValue;
                    bool m_virtualColValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TABLEMAPPINGOBJECT_H_
