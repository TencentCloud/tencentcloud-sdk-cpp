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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 表详情信息
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInstanceId 表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableInstanceId 表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableType 表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableIdlType 表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableIdlType 表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取表所属应用实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 表所属应用实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置表所属应用实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationId 表所属应用实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取表所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppName 表所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置表所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppName 表所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicZoneId 表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogicZoneId() const;

                    /**
                     * 设置表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogicZoneId 表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogicZoneId(const std::string& _logicZoneId);

                    /**
                     * 判断参数 LogicZoneId 是否已赋值
                     * @return LogicZoneId 是否已赋值
                     */
                    bool LogicZoneIdHasBeenSet() const;

                    /**
                     * 获取表所属大区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneName 表所属大区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置表所属大区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneName 表所属大区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取表主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyStruct 表主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKeyStruct() const;

                    /**
                     * 设置表主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KeyStruct 表主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeyStruct(const std::string& _keyStruct);

                    /**
                     * 判断参数 KeyStruct 是否已赋值
                     * @return KeyStruct 是否已赋值
                     */
                    bool KeyStructHasBeenSet() const;

                    /**
                     * 获取表非主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueStruct 表非主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValueStruct() const;

                    /**
                     * 设置表非主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ValueStruct 表非主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValueStruct(const std::string& _valueStruct);

                    /**
                     * 判断参数 ValueStruct 是否已赋值
                     * @return ValueStruct 是否已赋值
                     */
                    bool ValueStructHasBeenSet() const;

                    /**
                     * 获取表分表因子集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardingKeySet 表分表因子集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetShardingKeySet() const;

                    /**
                     * 设置表分表因子集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ShardingKeySet 表分表因子集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetShardingKeySet(const std::string& _shardingKeySet);

                    /**
                     * 判断参数 ShardingKeySet 是否已赋值
                     * @return ShardingKeySet 是否已赋值
                     */
                    bool ShardingKeySetHasBeenSet() const;

                    /**
                     * 获取表索引键集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStruct 表索引键集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIndexStruct() const;

                    /**
                     * 设置表索引键集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IndexStruct 表索引键集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndexStruct(const std::string& _indexStruct);

                    /**
                     * 判断参数 IndexStruct 是否已赋值
                     * @return IndexStruct 是否已赋值
                     */
                    bool IndexStructHasBeenSet() const;

                    /**
                     * 获取LIST表元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListElementNum LIST表元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetListElementNum() const;

                    /**
                     * 设置LIST表元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ListElementNum LIST表元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetListElementNum(const uint64_t& _listElementNum);

                    /**
                     * 判断参数 ListElementNum 是否已赋值
                     * @return ListElementNum 是否已赋值
                     */
                    bool ListElementNumHasBeenSet() const;

                    /**
                     * 获取表所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdlFiles 表所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 设置表所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IdlFiles 表所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIdlFiles(const std::vector<IdlFileInfo>& _idlFiles);

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     */
                    bool IdlFilesHasBeenSet() const;

                    /**
                     * 获取表预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedVolume 表预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetReservedVolume() const;

                    /**
                     * 设置表预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReservedVolume 表预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReservedVolume(const int64_t& _reservedVolume);

                    /**
                     * 判断参数 ReservedVolume 是否已赋值
                     * @return ReservedVolume 是否已赋值
                     */
                    bool ReservedVolumeHasBeenSet() const;

                    /**
                     * 获取表预留读QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedReadQps 表预留读QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetReservedReadQps() const;

                    /**
                     * 设置表预留读QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReservedReadQps 表预留读QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReservedReadQps(const int64_t& _reservedReadQps);

                    /**
                     * 判断参数 ReservedReadQps 是否已赋值
                     * @return ReservedReadQps 是否已赋值
                     */
                    bool ReservedReadQpsHasBeenSet() const;

                    /**
                     * 获取表预留写QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedWriteQps 表预留写QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetReservedWriteQps() const;

                    /**
                     * 设置表预留写QPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReservedWriteQps 表预留写QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReservedWriteQps(const int64_t& _reservedWriteQps);

                    /**
                     * 判断参数 ReservedWriteQps 是否已赋值
                     * @return ReservedWriteQps 是否已赋值
                     */
                    bool ReservedWriteQpsHasBeenSet() const;

                    /**
                     * 获取表实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableSize 表实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTableSize() const;

                    /**
                     * 设置表实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableSize 表实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableSize(const int64_t& _tableSize);

                    /**
                     * 判断参数 TableSize 是否已赋值
                     * @return TableSize 是否已赋值
                     */
                    bool TableSizeHasBeenSet() const;

                    /**
                     * 获取表状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 表状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置表状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 表状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取表创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 表创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置表创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedTime 表创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取最后一次更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 最后一次更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置最后一次更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedTime 最后一次更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取表备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memo 表备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemo() const;

                    /**
                     * 设置表备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Memo 表备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemo(const std::string& _memo);

                    /**
                     * 判断参数 Memo 是否已赋值
                     * @return Memo 是否已赋值
                     */
                    bool MemoHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取Api接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAccessId Api接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApiAccessId() const;

                    /**
                     * 设置Api接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApiAccessId Api接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApiAccessId(const std::string& _apiAccessId);

                    /**
                     * 判断参数 ApiAccessId 是否已赋值
                     * @return ApiAccessId 是否已赋值
                     */
                    bool ApiAccessIdHasBeenSet() const;

                private:

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * 表所属应用实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 表所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logicZoneId;
                    bool m_logicZoneIdHasBeenSet;

                    /**
                     * 表所属大区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 表主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyStruct;
                    bool m_keyStructHasBeenSet;

                    /**
                     * 表非主键结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueStruct;
                    bool m_valueStructHasBeenSet;

                    /**
                     * 表分表因子集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardingKeySet;
                    bool m_shardingKeySetHasBeenSet;

                    /**
                     * 表索引键集合，PROTO表有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexStruct;
                    bool m_indexStructHasBeenSet;

                    /**
                     * LIST表元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_listElementNum;
                    bool m_listElementNumHasBeenSet;

                    /**
                     * 表所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                    /**
                     * 表预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reservedVolume;
                    bool m_reservedVolumeHasBeenSet;

                    /**
                     * 表预留读QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reservedReadQps;
                    bool m_reservedReadQpsHasBeenSet;

                    /**
                     * 表预留写QPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reservedWriteQps;
                    bool m_reservedWriteQpsHasBeenSet;

                    /**
                     * 表实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tableSize;
                    bool m_tableSizeHasBeenSet;

                    /**
                     * 表状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 表创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最后一次更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 表备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memo;
                    bool m_memoHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * Api接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAccessId;
                    bool m_apiAccessIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFO_H_
