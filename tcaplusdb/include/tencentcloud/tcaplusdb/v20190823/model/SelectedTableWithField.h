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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEWITHFIELD_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEWITHFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/FieldInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/KafkaInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 附带被选中字段信息的表格列表
                */
                class SelectedTableWithField : public AbstractModel
                {
                public:
                    SelectedTableWithField();
                    ~SelectedTableWithField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表所属表格组ID
                     * @return TableGroupId 表所属表格组ID
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表所属表格组ID
                     * @param _tableGroupId 表所属表格组ID
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
                     * 获取表实例ID
                     * @return TableInstanceId 表实例ID
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表实例ID
                     * @param _tableInstanceId 表实例ID
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
                     * 获取表格描述语言类型：`PROTO`或`TDR`
                     * @return TableIdlType 表格描述语言类型：`PROTO`或`TDR`
                     * 
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置表格描述语言类型：`PROTO`或`TDR`
                     * @param _tableIdlType 表格描述语言类型：`PROTO`或`TDR`
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
                     * 获取表格数据结构类型：`GENERIC`或`LIST`
                     * @return TableType 表格数据结构类型：`GENERIC`或`LIST`
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表格数据结构类型：`GENERIC`或`LIST`
                     * @param _tableType 表格数据结构类型：`GENERIC`或`LIST`
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
                     * 获取待创建索引、缓写、数据订阅的字段列表
                     * @return SelectedFields 待创建索引、缓写、数据订阅的字段列表
                     * 
                     */
                    std::vector<FieldInfo> GetSelectedFields() const;

                    /**
                     * 设置待创建索引、缓写、数据订阅的字段列表
                     * @param _selectedFields 待创建索引、缓写、数据订阅的字段列表
                     * 
                     */
                    void SetSelectedFields(const std::vector<FieldInfo>& _selectedFields);

                    /**
                     * 判断参数 SelectedFields 是否已赋值
                     * @return SelectedFields 是否已赋值
                     * 
                     */
                    bool SelectedFieldsHasBeenSet() const;

                    /**
                     * 获取索引分片数
                     * @return ShardNum 索引分片数
                     * 
                     */
                    uint64_t GetShardNum() const;

                    /**
                     * 设置索引分片数
                     * @param _shardNum 索引分片数
                     * 
                     */
                    void SetShardNum(const uint64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取ckafka实例信息
                     * @return KafkaInfo ckafka实例信息
                     * 
                     */
                    KafkaInfo GetKafkaInfo() const;

                    /**
                     * 设置ckafka实例信息
                     * @param _kafkaInfo ckafka实例信息
                     * 
                     */
                    void SetKafkaInfo(const KafkaInfo& _kafkaInfo);

                    /**
                     * 判断参数 KafkaInfo 是否已赋值
                     * @return KafkaInfo 是否已赋值
                     * 
                     */
                    bool KafkaInfoHasBeenSet() const;

                private:

                    /**
                     * 表所属表格组ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表实例ID
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 表格描述语言类型：`PROTO`或`TDR`
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * 表格数据结构类型：`GENERIC`或`LIST`
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 待创建索引、缓写、数据订阅的字段列表
                     */
                    std::vector<FieldInfo> m_selectedFields;
                    bool m_selectedFieldsHasBeenSet;

                    /**
                     * 索引分片数
                     */
                    uint64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * ckafka实例信息
                     */
                    KafkaInfo m_kafkaInfo;
                    bool m_kafkaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEWITHFIELD_H_
