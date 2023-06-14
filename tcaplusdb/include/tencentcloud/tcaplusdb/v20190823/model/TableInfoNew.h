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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SyncTableInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 表格详情信息
                */
                class TableInfoNew : public AbstractModel
                {
                public:
                    TableInfoNew();
                    ~TableInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表格名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInstanceId 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableInstanceId 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     * 
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取表格数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表格数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表格数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableType 表格数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取表格数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableIdlType 表格数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置表格数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableIdlType 表格数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     * 
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取表格所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 表格所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表格所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 表格所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表格所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 表格所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置表格所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 表格所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGroupId 表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGroupId 表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表格所属表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGroupName 表格所属表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置表格所属表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGroupName 表格所属表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     * 
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取表格主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyStruct 表格主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyStruct() const;

                    /**
                     * 设置表格主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyStruct 表格主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyStruct(const std::string& _keyStruct);

                    /**
                     * 判断参数 KeyStruct 是否已赋值
                     * @return KeyStruct 是否已赋值
                     * 
                     */
                    bool KeyStructHasBeenSet() const;

                    /**
                     * 获取表格非主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueStruct 表格非主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueStruct() const;

                    /**
                     * 设置表格非主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueStruct 表格非主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueStruct(const std::string& _valueStruct);

                    /**
                     * 判断参数 ValueStruct 是否已赋值
                     * @return ValueStruct 是否已赋值
                     * 
                     */
                    bool ValueStructHasBeenSet() const;

                    /**
                     * 获取表格分表因子集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardingKeySet 表格分表因子集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardingKeySet() const;

                    /**
                     * 设置表格分表因子集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardingKeySet 表格分表因子集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardingKeySet(const std::string& _shardingKeySet);

                    /**
                     * 判断参数 ShardingKeySet 是否已赋值
                     * @return ShardingKeySet 是否已赋值
                     * 
                     */
                    bool ShardingKeySetHasBeenSet() const;

                    /**
                     * 获取表格索引键字段集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStruct 表格索引键字段集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexStruct() const;

                    /**
                     * 设置表格索引键字段集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStruct 表格索引键字段集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexStruct(const std::string& _indexStruct);

                    /**
                     * 判断参数 IndexStruct 是否已赋值
                     * @return IndexStruct 是否已赋值
                     * 
                     */
                    bool IndexStructHasBeenSet() const;

                    /**
                     * 获取LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListElementNum LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetListElementNum() const;

                    /**
                     * 设置LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listElementNum LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListElementNum(const uint64_t& _listElementNum);

                    /**
                     * 判断参数 ListElementNum 是否已赋值
                     * @return ListElementNum 是否已赋值
                     * 
                     */
                    bool ListElementNumHasBeenSet() const;

                    /**
                     * 获取表格所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdlFiles 表格所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 设置表格所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idlFiles 表格所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdlFiles(const std::vector<IdlFileInfo>& _idlFiles);

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     * 
                     */
                    bool IdlFilesHasBeenSet() const;

                    /**
                     * 获取表格预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedVolume 表格预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReservedVolume() const;

                    /**
                     * 设置表格预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reservedVolume 表格预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReservedVolume(const int64_t& _reservedVolume);

                    /**
                     * 判断参数 ReservedVolume 是否已赋值
                     * @return ReservedVolume 是否已赋值
                     * 
                     */
                    bool ReservedVolumeHasBeenSet() const;

                    /**
                     * 获取表格预留读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedReadQps 表格预留读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReservedReadQps() const;

                    /**
                     * 设置表格预留读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reservedReadQps 表格预留读CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReservedReadQps(const int64_t& _reservedReadQps);

                    /**
                     * 判断参数 ReservedReadQps 是否已赋值
                     * @return ReservedReadQps 是否已赋值
                     * 
                     */
                    bool ReservedReadQpsHasBeenSet() const;

                    /**
                     * 获取表格预留写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedWriteQps 表格预留写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReservedWriteQps() const;

                    /**
                     * 设置表格预留写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reservedWriteQps 表格预留写CU
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReservedWriteQps(const int64_t& _reservedWriteQps);

                    /**
                     * 判断参数 ReservedWriteQps 是否已赋值
                     * @return ReservedWriteQps 是否已赋值
                     * 
                     */
                    bool ReservedWriteQpsHasBeenSet() const;

                    /**
                     * 获取表格实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableSize 表格实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTableSize() const;

                    /**
                     * 设置表格实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableSize 表格实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableSize(const int64_t& _tableSize);

                    /**
                     * 判断参数 TableSize 是否已赋值
                     * @return TableSize 是否已赋值
                     * 
                     */
                    bool TableSizeHasBeenSet() const;

                    /**
                     * 获取表格状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 表格状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置表格状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 表格状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表格创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 表格创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置表格创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 表格创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取表格最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 表格最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置表格最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime 表格最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取表格备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memo 表格备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemo() const;

                    /**
                     * 设置表格备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memo 表格备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemo(const std::string& _memo);

                    /**
                     * 判断参数 Memo 是否已赋值
                     * @return Memo 是否已赋值
                     * 
                     */
                    bool MemoHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取TcaplusDB SDK数据访问接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAccessId TcaplusDB SDK数据访问接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiAccessId() const;

                    /**
                     * 设置TcaplusDB SDK数据访问接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiAccessId TcaplusDB SDK数据访问接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiAccessId(const std::string& _apiAccessId);

                    /**
                     * 判断参数 ApiAccessId 是否已赋值
                     * @return ApiAccessId 是否已赋值
                     * 
                     */
                    bool ApiAccessIdHasBeenSet() const;

                    /**
                     * 获取SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SortFieldNum SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSortFieldNum() const;

                    /**
                     * 设置SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sortFieldNum SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSortFieldNum(const int64_t& _sortFieldNum);

                    /**
                     * 判断参数 SortFieldNum 是否已赋值
                     * @return SortFieldNum 是否已赋值
                     * 
                     */
                    bool SortFieldNumHasBeenSet() const;

                    /**
                     * 获取SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SortRule SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSortRule() const;

                    /**
                     * 设置SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sortRule SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSortRule(const int64_t& _sortRule);

                    /**
                     * 判断参数 SortRule 是否已赋值
                     * @return SortRule 是否已赋值
                     * 
                     */
                    bool SortRuleHasBeenSet() const;

                    /**
                     * 获取表格分布式索引/缓写、kafka数据订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbClusterInfoStruct 表格分布式索引/缓写、kafka数据订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbClusterInfoStruct() const;

                    /**
                     * 设置表格分布式索引/缓写、kafka数据订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbClusterInfoStruct 表格分布式索引/缓写、kafka数据订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbClusterInfoStruct(const std::string& _dbClusterInfoStruct);

                    /**
                     * 判断参数 DbClusterInfoStruct 是否已赋值
                     * @return DbClusterInfoStruct 是否已赋值
                     * 
                     */
                    bool DbClusterInfoStructHasBeenSet() const;

                    /**
                     * 获取表格Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TxhBackupExpireDay 表格Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTxhBackupExpireDay() const;

                    /**
                     * 设置表格Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _txhBackupExpireDay 表格Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTxhBackupExpireDay(const uint64_t& _txhBackupExpireDay);

                    /**
                     * 判断参数 TxhBackupExpireDay 是否已赋值
                     * @return TxhBackupExpireDay 是否已赋值
                     * 
                     */
                    bool TxhBackupExpireDayHasBeenSet() const;

                    /**
                     * 获取表格的缓写信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncTableInfo 表格的缓写信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SyncTableInfo GetSyncTableInfo() const;

                    /**
                     * 设置表格的缓写信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syncTableInfo 表格的缓写信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyncTableInfo(const SyncTableInfo& _syncTableInfo);

                    /**
                     * 判断参数 SyncTableInfo 是否已赋值
                     * @return SyncTableInfo 是否已赋值
                     * 
                     */
                    bool SyncTableInfoHasBeenSet() const;

                private:

                    /**
                     * 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 表格数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 表格数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * 表格所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 表格所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 表格所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格所属表格组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * 表格主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyStruct;
                    bool m_keyStructHasBeenSet;

                    /**
                     * 表格非主键字段结构json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueStruct;
                    bool m_valueStructHasBeenSet;

                    /**
                     * 表格分表因子集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardingKeySet;
                    bool m_shardingKeySetHasBeenSet;

                    /**
                     * 表格索引键字段集合，对PROTO类型表格有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexStruct;
                    bool m_indexStructHasBeenSet;

                    /**
                     * LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_listElementNum;
                    bool m_listElementNumHasBeenSet;

                    /**
                     * 表格所关联IDL文件信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                    /**
                     * 表格预留容量（GB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reservedVolume;
                    bool m_reservedVolumeHasBeenSet;

                    /**
                     * 表格预留读CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reservedReadQps;
                    bool m_reservedReadQpsHasBeenSet;

                    /**
                     * 表格预留写CU
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reservedWriteQps;
                    bool m_reservedWriteQpsHasBeenSet;

                    /**
                     * 表格实际数据量大小（MB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tableSize;
                    bool m_tableSizeHasBeenSet;

                    /**
                     * 表格状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 表格创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 表格最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 表格备注信息
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
                     * TcaplusDB SDK数据访问接入ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAccessId;
                    bool m_apiAccessIdHasBeenSet;

                    /**
                     * SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sortFieldNum;
                    bool m_sortFieldNumHasBeenSet;

                    /**
                     * SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sortRule;
                    bool m_sortRuleHasBeenSet;

                    /**
                     * 表格分布式索引/缓写、kafka数据订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbClusterInfoStruct;
                    bool m_dbClusterInfoStructHasBeenSet;

                    /**
                     * 表格Txh备份文件多少天后过期删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_txhBackupExpireDay;
                    bool m_txhBackupExpireDayHasBeenSet;

                    /**
                     * 表格的缓写信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SyncTableInfo m_syncTableInfo;
                    bool m_syncTableInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEINFONEW_H_
