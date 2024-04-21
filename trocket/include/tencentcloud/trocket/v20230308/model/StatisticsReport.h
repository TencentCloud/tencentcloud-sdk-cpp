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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_STATISTICSREPORT_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_STATISTICSREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/PacketStatistics.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * MQTT客户端数据流量统计
                */
                class StatisticsReport : public AbstractModel
                {
                public:
                    StatisticsReport();
                    ~StatisticsReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bytes 字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBytes() const;

                    /**
                     * 设置字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bytes 字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBytes(const int64_t& _bytes);

                    /**
                     * 判断参数 Bytes 是否已赋值
                     * @return Bytes 是否已赋值
                     * 
                     */
                    bool BytesHasBeenSet() const;

                    /**
                     * 获取监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PacketStatistics> GetItems() const;

                    /**
                     * 设置监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<PacketStatistics>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 字节数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bytes;
                    bool m_bytesHasBeenSet;

                    /**
                     * 监控指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PacketStatistics> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_STATISTICSREPORT_H_
