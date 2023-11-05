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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOGS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/ConsumerLog.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 消费信息
                */
                class ConsumerLogs : public AbstractModel
                {
                public:
                    ConsumerLogs();
                    ~ConsumerLogs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 记录数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置记录数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 记录数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取消费日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerLogSets 消费日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConsumerLog> GetConsumerLogSets() const;

                    /**
                     * 设置消费日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerLogSets 消费日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerLogSets(const std::vector<ConsumerLog>& _consumerLogSets);

                    /**
                     * 判断参数 ConsumerLogSets 是否已赋值
                     * @return ConsumerLogSets 是否已赋值
                     * 
                     */
                    bool ConsumerLogSetsHasBeenSet() const;

                private:

                    /**
                     * 记录数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 消费日志。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConsumerLog> m_consumerLogSets;
                    bool m_consumerLogSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOGS_H_
