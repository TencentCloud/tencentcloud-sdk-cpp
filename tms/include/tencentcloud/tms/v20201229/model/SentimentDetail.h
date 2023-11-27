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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTDETAIL_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 情感分析明细
                */
                class SentimentDetail : public AbstractModel
                {
                public:
                    SentimentDetail();
                    ~SentimentDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Positive 正向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPositive() const;

                    /**
                     * 设置正向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _positive 正向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPositive(const int64_t& _positive);

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     * 
                     */
                    bool PositiveHasBeenSet() const;

                    /**
                     * 获取负向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Negative 负向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNegative() const;

                    /**
                     * 设置负向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _negative 负向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNegative(const int64_t& _negative);

                    /**
                     * 判断参数 Negative 是否已赋值
                     * @return Negative 是否已赋值
                     * 
                     */
                    bool NegativeHasBeenSet() const;

                private:

                    /**
                     * 正向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_positive;
                    bool m_positiveHasBeenSet;

                    /**
                     * 负向分数，取值范围0到100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_negative;
                    bool m_negativeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_SENTIMENTDETAIL_H_
