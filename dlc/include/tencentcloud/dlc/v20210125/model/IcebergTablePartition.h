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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ICEBERGTABLEPARTITION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ICEBERGTABLEPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/LocationInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Iceberg表分区信息
                */
                class IcebergTablePartition : public AbstractModel
                {
                public:
                    IcebergTablePartition();
                    ~IcebergTablePartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区信息名称
                     * @return Partition 分区信息名称
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置分区信息名称
                     * @param _partition 分区信息名称
                     * 
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取分区记录数
                     * @return Records 分区记录数
                     * 
                     */
                    int64_t GetRecords() const;

                    /**
                     * 设置分区记录数
                     * @param _records 分区记录数
                     * 
                     */
                    void SetRecords(const int64_t& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取分区数据文件数量
                     * @return DataFileSize 分区数据文件数量
                     * 
                     */
                    int64_t GetDataFileSize() const;

                    /**
                     * 设置分区数据文件数量
                     * @param _dataFileSize 分区数据文件数量
                     * 
                     */
                    void SetDataFileSize(const int64_t& _dataFileSize);

                    /**
                     * 判断参数 DataFileSize 是否已赋值
                     * @return DataFileSize 是否已赋值
                     * 
                     */
                    bool DataFileSizeHasBeenSet() const;

                    /**
                     * 获取分区数据文件存储量
                     * @return DataFileStorage 分区数据文件存储量
                     * 
                     */
                    int64_t GetDataFileStorage() const;

                    /**
                     * 设置分区数据文件存储量
                     * @param _dataFileStorage 分区数据文件存储量
                     * 
                     */
                    void SetDataFileStorage(const int64_t& _dataFileStorage);

                    /**
                     * 判断参数 DataFileStorage 是否已赋值
                     * @return DataFileStorage 是否已赋值
                     * 
                     */
                    bool DataFileStorageHasBeenSet() const;

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
                     * 获取分区更新时间
                     * @return UpdateTime 分区更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置分区更新时间
                     * @param _updateTime 分区更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取最后一次分区更新的快照ID
                     * @return LastUpdateSnapshotId 最后一次分区更新的快照ID
                     * 
                     */
                    std::string GetLastUpdateSnapshotId() const;

                    /**
                     * 设置最后一次分区更新的快照ID
                     * @param _lastUpdateSnapshotId 最后一次分区更新的快照ID
                     * 
                     */
                    void SetLastUpdateSnapshotId(const std::string& _lastUpdateSnapshotId);

                    /**
                     * 判断参数 LastUpdateSnapshotId 是否已赋值
                     * @return LastUpdateSnapshotId 是否已赋值
                     * 
                     */
                    bool LastUpdateSnapshotIdHasBeenSet() const;

                    /**
                     * 获取分区的location
                     * @return Location 分区的location
                     * 
                     */
                    LocationInfo GetLocation() const;

                    /**
                     * 设置分区的location
                     * @param _location 分区的location
                     * 
                     */
                    void SetLocation(const LocationInfo& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 分区信息名称
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 分区记录数
                     */
                    int64_t m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 分区数据文件数量
                     */
                    int64_t m_dataFileSize;
                    bool m_dataFileSizeHasBeenSet;

                    /**
                     * 分区数据文件存储量
                     */
                    int64_t m_dataFileStorage;
                    bool m_dataFileStorageHasBeenSet;

                    /**
                     * 分区创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分区更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最后一次分区更新的快照ID
                     */
                    std::string m_lastUpdateSnapshotId;
                    bool m_lastUpdateSnapshotIdHasBeenSet;

                    /**
                     * 分区的location
                     */
                    LocationInfo m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ICEBERGTABLEPARTITION_H_
