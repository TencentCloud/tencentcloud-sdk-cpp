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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBSCHEMASPACEITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBSCHEMASPACEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * MongoDB 产品库级空间对象项，描述单个数据库的空间使用统计信息。
                */
                class MongoDBSchemaSpaceItem : public AbstractModel
                {
                public:
                    MongoDBSchemaSpaceItem();
                    ~MongoDBSchemaSpaceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Db <p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置<p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _db <p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取<p>数据采集时间戳（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>数据采集时间戳（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>数据采集时间戳（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>数据采集时间戳（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>磁盘占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SizeOnDisk <p>磁盘占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSizeOnDisk() const;

                    /**
                     * 设置<p>磁盘占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sizeOnDisk <p>磁盘占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSizeOnDisk(const int64_t& _sizeOnDisk);

                    /**
                     * 判断参数 SizeOnDisk 是否已赋值
                     * @return SizeOnDisk 是否已赋值
                     * 
                     */
                    bool SizeOnDiskHasBeenSet() const;

                    /**
                     * 获取<p>库级数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size <p>库级数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>库级数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size <p>库级数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>库级平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgObjSize <p>库级平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvgObjSize() const;

                    /**
                     * 设置<p>库级平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avgObjSize <p>库级平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvgObjSize(const int64_t& _avgObjSize);

                    /**
                     * 判断参数 AvgObjSize 是否已赋值
                     * @return AvgObjSize 是否已赋值
                     * 
                     */
                    bool AvgObjSizeHasBeenSet() const;

                    /**
                     * 获取<p>库级文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count <p>库级文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>库级文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count <p>库级文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>库级存储大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize <p>库级存储大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置<p>库级存储大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize <p>库级存储大小（字节）。</p>
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
                     * 获取<p>库级索引总大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalIndexSize <p>库级索引总大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalIndexSize() const;

                    /**
                     * 设置<p>库级索引总大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalIndexSize <p>库级索引总大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalIndexSize(const int64_t& _totalIndexSize);

                    /**
                     * 判断参数 TotalIndexSize 是否已赋值
                     * @return TotalIndexSize 是否已赋值
                     * 
                     */
                    bool TotalIndexSizeHasBeenSet() const;

                    /**
                     * 获取<p>库级已分配未使用空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFree <p>库级已分配未使用空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataFree() const;

                    /**
                     * 设置<p>库级已分配未使用空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFree <p>库级已分配未使用空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFree(const int64_t& _dataFree);

                    /**
                     * 判断参数 DataFree 是否已赋值
                     * @return DataFree 是否已赋值
                     * 
                     */
                    bool DataFreeHasBeenSet() const;

                    /**
                     * 获取<p>库级碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FragRatio <p>库级碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFragRatio() const;

                    /**
                     * 设置<p>库级碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fragRatio <p>库级碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFragRatio(const std::string& _fragRatio);

                    /**
                     * 判断参数 FragRatio 是否已赋值
                     * @return FragRatio 是否已赋值
                     * 
                     */
                    bool FragRatioHasBeenSet() const;

                    /**
                     * 获取<p>库级可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileReuseBytes <p>库级可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileReuseBytes() const;

                    /**
                     * 设置<p>库级可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileReuseBytes <p>库级可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileReuseBytes(const int64_t& _fileReuseBytes);

                    /**
                     * 判断参数 FileReuseBytes 是否已赋值
                     * @return FileReuseBytes 是否已赋值
                     * 
                     */
                    bool FileReuseBytesHasBeenSet() const;

                    /**
                     * 获取<p>库空间占比（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseRatio <p>库空间占比（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseRatio() const;

                    /**
                     * 设置<p>库空间占比（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseRatio <p>库空间占比（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseRatio(const std::string& _databaseRatio);

                    /**
                     * 判断参数 DatabaseRatio 是否已赋值
                     * @return DatabaseRatio 是否已赋值
                     * 
                     */
                    bool DatabaseRatioHasBeenSet() const;

                private:

                    /**
                     * <p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * <p>数据采集时间戳（毫秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>磁盘占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sizeOnDisk;
                    bool m_sizeOnDiskHasBeenSet;

                    /**
                     * <p>库级数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>库级平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_avgObjSize;
                    bool m_avgObjSizeHasBeenSet;

                    /**
                     * <p>库级文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>库级存储大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * <p>库级索引总大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalIndexSize;
                    bool m_totalIndexSizeHasBeenSet;

                    /**
                     * <p>库级已分配未使用空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataFree;
                    bool m_dataFreeHasBeenSet;

                    /**
                     * <p>库级碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fragRatio;
                    bool m_fragRatioHasBeenSet;

                    /**
                     * <p>库级可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileReuseBytes;
                    bool m_fileReuseBytesHasBeenSet;

                    /**
                     * <p>库空间占比（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseRatio;
                    bool m_databaseRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBSCHEMASPACEITEM_H_
