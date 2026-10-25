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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBSPACEOBJECTITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBSPACEOBJECTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MongoDBTableSpaceItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * MongoDB 产品表空间数据对象。对应 V1 底层返回的顶层包装结构，包含集合级空间明细数组 SpaceSchemas 与外层采集时间戳 Timestamp。
                */
                class MongodbSpaceObjectItem : public AbstractModel
                {
                public:
                    MongodbSpaceObjectItem();
                    ~MongodbSpaceObjectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集合级空间明细数组。每项含顶层标识字段（AppId/InstanceId/Db/Timestamp/SizeOnDisk）与嵌套 Collection 明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpaceSchemas <p>集合级空间明细数组。每项含顶层标识字段（AppId/InstanceId/Db/Timestamp/SizeOnDisk）与嵌套 Collection 明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MongoDBTableSpaceItem> GetSpaceSchemas() const;

                    /**
                     * 设置<p>集合级空间明细数组。每项含顶层标识字段（AppId/InstanceId/Db/Timestamp/SizeOnDisk）与嵌套 Collection 明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spaceSchemas <p>集合级空间明细数组。每项含顶层标识字段（AppId/InstanceId/Db/Timestamp/SizeOnDisk）与嵌套 Collection 明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpaceSchemas(const std::vector<MongoDBTableSpaceItem>& _spaceSchemas);

                    /**
                     * 判断参数 SpaceSchemas 是否已赋值
                     * @return SpaceSchemas 是否已赋值
                     * 
                     */
                    bool SpaceSchemasHasBeenSet() const;

                    /**
                     * 获取<p>数据采集时间戳（秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>数据采集时间戳（秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>数据采集时间戳（秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp <p>数据采集时间戳（秒）。</p>
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

                private:

                    /**
                     * <p>集合级空间明细数组。每项含顶层标识字段（AppId/InstanceId/Db/Timestamp/SizeOnDisk）与嵌套 Collection 明细。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MongoDBTableSpaceItem> m_spaceSchemas;
                    bool m_spaceSchemasHasBeenSet;

                    /**
                     * <p>数据采集时间戳（秒）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBSPACEOBJECTITEM_H_
