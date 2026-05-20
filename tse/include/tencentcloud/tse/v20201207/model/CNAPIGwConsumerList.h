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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERLIST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CNAPIGwConsumer.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 消费者列表
                */
                class CNAPIGwConsumerList : public AbstractModel
                {
                public:
                    CNAPIGwConsumerList();
                    ~CNAPIGwConsumerList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取消费者列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Consumers 消费者列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CNAPIGwConsumer> GetConsumers() const;

                    /**
                     * 设置消费者列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumers 消费者列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumers(const std::vector<CNAPIGwConsumer>& _consumers);

                    /**
                     * 判断参数 Consumers 是否已赋值
                     * @return Consumers 是否已赋值
                     * 
                     */
                    bool ConsumersHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 消费者列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CNAPIGwConsumer> m_consumers;
                    bool m_consumersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERLIST_H_
