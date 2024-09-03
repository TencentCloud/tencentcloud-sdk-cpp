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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPARTITION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表的分区数据
                */
                class TablePartition : public AbstractModel
                {
                public:
                    TablePartition();
                    ~TablePartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区名称
                     * @return PartitionName 分区名称
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置分区名称
                     * @param _partitionName 分区名称
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取分区记录数
                     * @return RecordCount 分区记录数
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置分区记录数
                     * @param _recordCount 分区记录数
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
                     * 获取分区数据存储大小，字节数
                     * @return StorageSize 分区数据存储大小，字节数
                     * 
                     */
                    std::string GetStorageSize() const;

                    /**
                     * 设置分区数据存储大小，字节数
                     * @param _storageSize 分区数据存储大小，字节数
                     * 
                     */
                    void SetStorageSize(const std::string& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取分区创建时间
                     * @return CreateTime 分区创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置分区创建时间
                     * @param _createTime 分区创建时间
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
                     * 获取分区修改时间
                     * @return ModifiedTime 分区修改时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置分区修改时间
                     * @param _modifiedTime 分区修改时间
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
                     * 获取分区数据存储大小，已转为适合的单位
                     * @return StorageSizeWithUnit 分区数据存储大小，已转为适合的单位
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置分区数据存储大小，已转为适合的单位
                     * @param _storageSizeWithUnit 分区数据存储大小，已转为适合的单位
                     * 
                     */
                    void SetStorageSizeWithUnit(const std::string& _storageSizeWithUnit);

                    /**
                     * 判断参数 StorageSizeWithUnit 是否已赋值
                     * @return StorageSizeWithUnit 是否已赋值
                     * 
                     */
                    bool StorageSizeWithUnitHasBeenSet() const;

                    /**
                     * 获取文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumFiles 文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumFiles() const;

                    /**
                     * 设置文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numFiles 文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumFiles(const int64_t& _numFiles);

                    /**
                     * 判断参数 NumFiles 是否已赋值
                     * @return NumFiles 是否已赋值
                     * 
                     */
                    bool NumFilesHasBeenSet() const;

                    /**
                     * 获取平均文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AverageFileSizeWithUnit 平均文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAverageFileSizeWithUnit() const;

                    /**
                     * 设置平均文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _averageFileSizeWithUnit 平均文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAverageFileSizeWithUnit(const std::string& _averageFileSizeWithUnit);

                    /**
                     * 判断参数 AverageFileSizeWithUnit 是否已赋值
                     * @return AverageFileSizeWithUnit 是否已赋值
                     * 
                     */
                    bool AverageFileSizeWithUnitHasBeenSet() const;

                private:

                    /**
                     * 分区名称
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * 分区记录数
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 分区数据存储大小，字节数
                     */
                    std::string m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 分区创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分区修改时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 分区数据存储大小，已转为适合的单位
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * 文件数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numFiles;
                    bool m_numFilesHasBeenSet;

                    /**
                     * 平均文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_averageFileSizeWithUnit;
                    bool m_averageFileSizeWithUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPARTITION_H_
