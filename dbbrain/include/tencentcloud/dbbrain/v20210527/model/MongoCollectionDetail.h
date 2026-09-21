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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGOCOLLECTIONDETAIL_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGOCOLLECTIONDETAIL_H_

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
                * MongoDB 集合级空间使用明细，包含集合的存储、索引、碎片等各维度指标。
                */
                class MongoCollectionDetail : public AbstractModel
                {
                public:
                    MongoCollectionDetail();
                    ~MongoCollectionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集合命名空间，格式为 db.collection。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollStats <p>集合命名空间，格式为 db.collection。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollStats() const;

                    /**
                     * 设置<p>集合命名空间，格式为 db.collection。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collStats <p>集合命名空间，格式为 db.collection。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollStats(const std::string& _collStats);

                    /**
                     * 判断参数 CollStats 是否已赋值
                     * @return CollStats 是否已赋值
                     * 
                     */
                    bool CollStatsHasBeenSet() const;

                    /**
                     * 获取<p>集合逻辑大小（字节，未压缩）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectionSize <p>集合逻辑大小（字节，未压缩）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCollectionSize() const;

                    /**
                     * 设置<p>集合逻辑大小（字节，未压缩）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectionSize <p>集合逻辑大小（字节，未压缩）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectionSize(const int64_t& _collectionSize);

                    /**
                     * 判断参数 CollectionSize 是否已赋值
                     * @return CollectionSize 是否已赋值
                     * 
                     */
                    bool CollectionSizeHasBeenSet() const;

                    /**
                     * 获取<p>集合已分配但未使用的空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFree <p>集合已分配但未使用的空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataFree() const;

                    /**
                     * 设置<p>集合已分配但未使用的空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFree <p>集合已分配但未使用的空间（字节）。</p>
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
                     * 获取<p>空间利用率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpaceRatio <p>空间利用率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpaceRatio() const;

                    /**
                     * 设置<p>空间利用率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spaceRatio <p>空间利用率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpaceRatio(const std::string& _spaceRatio);

                    /**
                     * 判断参数 SpaceRatio 是否已赋值
                     * @return SpaceRatio 是否已赋值
                     * 
                     */
                    bool SpaceRatioHasBeenSet() const;

                    /**
                     * 获取<p>碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FragRatio <p>碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFragRatio() const;

                    /**
                     * 设置<p>碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fragRatio <p>碎片率（百分比字符串）。</p>
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
                     * 获取<p>集合数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size <p>集合数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>集合数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size <p>集合数据大小（字节）。</p>
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
                     * 获取<p>所有索引占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalIndexSize <p>所有索引占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalIndexSize() const;

                    /**
                     * 设置<p>所有索引占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalIndexSize <p>所有索引占用大小（字节）。</p>
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
                     * 获取<p>平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgObjSize <p>平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvgObjSize() const;

                    /**
                     * 设置<p>平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avgObjSize <p>平均文档大小（字节）。</p>
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
                     * 获取<p>集合实际占用存储大小（字节，压缩后）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize <p>集合实际占用存储大小（字节，压缩后）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置<p>集合实际占用存储大小（字节，压缩后）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize <p>集合实际占用存储大小（字节，压缩后）。</p>
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
                     * 获取<p>文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count <p>文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count <p>文档数量。</p>
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
                     * 获取<p>压缩率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompressionRatio <p>压缩率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompressionRatio() const;

                    /**
                     * 设置<p>压缩率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compressionRatio <p>压缩率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompressionRatio(const std::string& _compressionRatio);

                    /**
                     * 判断参数 CompressionRatio 是否已赋值
                     * @return CompressionRatio 是否已赋值
                     * 
                     */
                    bool CompressionRatioHasBeenSet() const;

                    /**
                     * 获取<p>可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileReuseBytes <p>可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileReuseBytes() const;

                    /**
                     * 设置<p>可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileReuseBytes <p>可复用文件空间（字节）。</p>
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

                private:

                    /**
                     * <p>集合命名空间，格式为 db.collection。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collStats;
                    bool m_collStatsHasBeenSet;

                    /**
                     * <p>集合逻辑大小（字节，未压缩）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_collectionSize;
                    bool m_collectionSizeHasBeenSet;

                    /**
                     * <p>集合已分配但未使用的空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataFree;
                    bool m_dataFreeHasBeenSet;

                    /**
                     * <p>空间利用率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spaceRatio;
                    bool m_spaceRatioHasBeenSet;

                    /**
                     * <p>碎片率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fragRatio;
                    bool m_fragRatioHasBeenSet;

                    /**
                     * <p>集合数据大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>所有索引占用大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalIndexSize;
                    bool m_totalIndexSizeHasBeenSet;

                    /**
                     * <p>平均文档大小（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_avgObjSize;
                    bool m_avgObjSizeHasBeenSet;

                    /**
                     * <p>集合实际占用存储大小（字节，压缩后）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * <p>文档数量。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>压缩率（百分比字符串）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compressionRatio;
                    bool m_compressionRatioHasBeenSet;

                    /**
                     * <p>可复用文件空间（字节）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileReuseBytes;
                    bool m_fileReuseBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGOCOLLECTIONDETAIL_H_
