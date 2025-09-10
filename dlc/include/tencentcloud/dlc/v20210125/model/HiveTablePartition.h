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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_HIVETABLEPARTITION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_HIVETABLEPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Hive表分区信息
                */
                class HiveTablePartition : public AbstractModel
                {
                public:
                    HiveTablePartition();
                    ~HiveTablePartition() = default;
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
                     * 获取分区schema更新时间
                     * @return ModifiedTime 分区schema更新时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置分区schema更新时间
                     * @param _modifiedTime 分区schema更新时间
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
                     * 获取最后一次分区更新的访问时间
                     * @return LastAccessTime 最后一次分区更新的访问时间
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置最后一次分区更新的访问时间
                     * @param _lastAccessTime 最后一次分区更新的访问时间
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

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
                     * 分区schema更新时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 最后一次分区更新的访问时间
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_HIVETABLEPARTITION_H_
