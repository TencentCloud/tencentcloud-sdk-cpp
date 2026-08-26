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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERQUOTAINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERQUOTAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 订单配额信息
                */
                class OrderQuotaInfo : public AbstractModel
                {
                public:
                    OrderQuotaInfo();
                    ~OrderQuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配额键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaKey 配额键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuotaKey() const;

                    /**
                     * 设置配额键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaKey 配额键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaKey(const std::string& _quotaKey);

                    /**
                     * 判断参数 QuotaKey 是否已赋值
                     * @return QuotaKey 是否已赋值
                     * 
                     */
                    bool QuotaKeyHasBeenSet() const;

                    /**
                     * 获取配额总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaNum 配额总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuotaNum() const;

                    /**
                     * 设置配额总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaNum 配额总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaNum(const int64_t& _quotaNum);

                    /**
                     * 判断参数 QuotaNum 是否已赋值
                     * @return QuotaNum 是否已赋值
                     * 
                     */
                    bool QuotaNumHasBeenSet() const;

                    /**
                     * 获取配额已使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaUsed 配额已使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuotaUsed() const;

                    /**
                     * 设置配额已使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaUsed 配额已使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaUsed(const int64_t& _quotaUsed);

                    /**
                     * 判断参数 QuotaUsed 是否已赋值
                     * @return QuotaUsed 是否已赋值
                     * 
                     */
                    bool QuotaUsedHasBeenSet() const;

                private:

                    /**
                     * 配额键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quotaKey;
                    bool m_quotaKeyHasBeenSet;

                    /**
                     * 配额总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quotaNum;
                    bool m_quotaNumHasBeenSet;

                    /**
                     * 配额已使用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quotaUsed;
                    bool m_quotaUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERQUOTAINFO_H_
