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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBTABLESPACEITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBTABLESPACEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MongoCollectionDetail.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * MongoDB 产品表级（集合级）空间对象项，描述单个集合的空间使用统计信息。
                */
                class MongoDBTableSpaceItem : public AbstractModel
                {
                public:
                    MongoDBTableSpaceItem();
                    ~MongoDBTableSpaceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用 Id（AppId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>应用 Id（AppId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用 Id（AppId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>应用 Id（AppId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>实例 Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例 Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例 Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取<p>集合级空间使用明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Collection <p>集合级空间使用明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MongoCollectionDetail GetCollection() const;

                    /**
                     * 设置<p>集合级空间使用明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collection <p>集合级空间使用明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollection(const MongoCollectionDetail& _collection);

                    /**
                     * 判断参数 Collection 是否已赋值
                     * @return Collection 是否已赋值
                     * 
                     */
                    bool CollectionHasBeenSet() const;

                private:

                    /**
                     * <p>应用 Id（AppId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>实例 Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                     * <p>集合级空间使用明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongoCollectionDetail m_collection;
                    bool m_collectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBTABLESPACEITEM_H_
