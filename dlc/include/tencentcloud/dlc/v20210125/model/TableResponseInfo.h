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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TABLERESPONSEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TABLERESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TableBaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/Column.h>
#include <tencentcloud/dlc/v20210125/model/Partition.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 查询表信息对象
                */
                class TableResponseInfo : public AbstractModel
                {
                public:
                    TableResponseInfo();
                    ~TableResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据表基本信息。
                     * @return TableBaseInfo 数据表基本信息。
                     * 
                     */
                    TableBaseInfo GetTableBaseInfo() const;

                    /**
                     * 设置数据表基本信息。
                     * @param _tableBaseInfo 数据表基本信息。
                     * 
                     */
                    void SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo);

                    /**
                     * 判断参数 TableBaseInfo 是否已赋值
                     * @return TableBaseInfo 是否已赋值
                     * 
                     */
                    bool TableBaseInfoHasBeenSet() const;

                    /**
                     * 获取数据表列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 数据表列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 设置数据表列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 数据表列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<Column>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取数据表分块信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 数据表分块信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Partition> GetPartitions() const;

                    /**
                     * 设置数据表分块信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions 数据表分块信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const std::vector<Partition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取数据存储路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 数据存储路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置数据存储路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 数据存储路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取数据表属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 数据表属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置数据表属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 数据表属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取数据表更新时间, 单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 数据表更新时间, 单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置数据表更新时间, 单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 数据表更新时间, 单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取数据表创建时间,单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 数据表创建时间,单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置数据表创建时间,单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 数据表创建时间,单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputFormat 数据格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputFormat() const;

                    /**
                     * 设置数据格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputFormat 数据格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputFormat(const std::string& _inputFormat);

                    /**
                     * 判断参数 InputFormat 是否已赋值
                     * @return InputFormat 是否已赋值
                     * 
                     */
                    bool InputFormatHasBeenSet() const;

                    /**
                     * 获取数据表存储大小（单位：Byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize 数据表存储大小（单位：Byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置数据表存储大小（单位：Byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize 数据表存储大小（单位：Byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取数据表行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordCount 数据表行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置数据表行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordCount 数据表行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordCount(const int64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取xxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MapMaterializedViewName xxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMapMaterializedViewName() const;

                    /**
                     * 设置xxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mapMaterializedViewName xxxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMapMaterializedViewName(const std::string& _mapMaterializedViewName);

                    /**
                     * 判断参数 MapMaterializedViewName 是否已赋值
                     * @return MapMaterializedViewName 是否已赋值
                     * 
                     */
                    bool MapMaterializedViewNameHasBeenSet() const;

                private:

                    /**
                     * 数据表基本信息。
                     */
                    TableBaseInfo m_tableBaseInfo;
                    bool m_tableBaseInfoHasBeenSet;

                    /**
                     * 数据表列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 数据表分块信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Partition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 数据存储路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 数据表属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 数据表更新时间, 单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 数据表创建时间,单位: ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputFormat;
                    bool m_inputFormatHasBeenSet;

                    /**
                     * 数据表存储大小（单位：Byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 数据表行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * xxxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mapMaterializedViewName;
                    bool m_mapMaterializedViewNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TABLERESPONSEINFO_H_
