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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEQUOTACONFIGRESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEQUOTACONFIGRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 实例 / topic 维度限流策略
                */
                class InstanceQuotaConfigResp : public AbstractModel
                {
                public:
                    InstanceQuotaConfigResp();
                    ~InstanceQuotaConfigResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生产限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaProducerByteRate 生产限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuotaProducerByteRate() const;

                    /**
                     * 设置生产限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaProducerByteRate 生产限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaProducerByteRate(const int64_t& _quotaProducerByteRate);

                    /**
                     * 判断参数 QuotaProducerByteRate 是否已赋值
                     * @return QuotaProducerByteRate 是否已赋值
                     * 
                     */
                    bool QuotaProducerByteRateHasBeenSet() const;

                    /**
                     * 获取消费限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaConsumerByteRate 消费限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuotaConsumerByteRate() const;

                    /**
                     * 设置消费限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaConsumerByteRate 消费限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaConsumerByteRate(const int64_t& _quotaConsumerByteRate);

                    /**
                     * 判断参数 QuotaConsumerByteRate 是否已赋值
                     * @return QuotaConsumerByteRate 是否已赋值
                     * 
                     */
                    bool QuotaConsumerByteRateHasBeenSet() const;

                private:

                    /**
                     * 生产限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quotaProducerByteRate;
                    bool m_quotaProducerByteRateHasBeenSet;

                    /**
                     * 消费限流大小，单位 MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quotaConsumerByteRate;
                    bool m_quotaConsumerByteRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEQUOTACONFIGRESP_H_
