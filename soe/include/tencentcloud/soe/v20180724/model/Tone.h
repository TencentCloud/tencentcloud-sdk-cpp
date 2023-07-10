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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_TONE_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_TONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 中文声调检测结果
                */
                class Tone : public AbstractModel
                {
                public:
                    Tone();
                    ~Tone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测结果是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Valid 检测结果是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetValid() const;

                    /**
                     * 设置检测结果是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valid 检测结果是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValid(const bool& _valid);

                    /**
                     * 判断参数 Valid 是否已赋值
                     * @return Valid 是否已赋值
                     * 
                     */
                    bool ValidHasBeenSet() const;

                    /**
                     * 获取文本标准声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefTone 文本标准声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRefTone() const;

                    /**
                     * 设置文本标准声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refTone 文本标准声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefTone(const int64_t& _refTone);

                    /**
                     * 判断参数 RefTone 是否已赋值
                     * @return RefTone 是否已赋值
                     * 
                     */
                    bool RefToneHasBeenSet() const;

                    /**
                     * 获取实际发音声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HypothesisTone 实际发音声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHypothesisTone() const;

                    /**
                     * 设置实际发音声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hypothesisTone 实际发音声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHypothesisTone(const int64_t& _hypothesisTone);

                    /**
                     * 判断参数 HypothesisTone 是否已赋值
                     * @return HypothesisTone 是否已赋值
                     * 
                     */
                    bool HypothesisToneHasBeenSet() const;

                private:

                    /**
                     * 检测结果是否有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_valid;
                    bool m_validHasBeenSet;

                    /**
                     * 文本标准声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_refTone;
                    bool m_refToneHasBeenSet;

                    /**
                     * 实际发音声调，数值范围[-1,1,2,3,4]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hypothesisTone;
                    bool m_hypothesisToneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_TONE_H_
