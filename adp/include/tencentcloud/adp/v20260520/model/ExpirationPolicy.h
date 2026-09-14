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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONPOLICY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/EffectivePeriod.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 过期策略（有效时间与超过有效时间后的行为）
                */
                class ExpirationPolicy : public AbstractModel
                {
                public:
                    ExpirationPolicy();
                    ~ExpirationPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>有效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectivePeriod <p>有效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EffectivePeriod GetEffectivePeriod() const;

                    /**
                     * 设置<p>有效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effectivePeriod <p>有效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEffectivePeriod(const EffectivePeriod& _effectivePeriod);

                    /**
                     * 判断参数 EffectivePeriod 是否已赋值
                     * @return EffectivePeriod 是否已赋值
                     * 
                     */
                    bool EffectivePeriodHasBeenSet() const;

                    /**
                     * 获取<p>超过有效时间后的行为：1=NOT_RETRIEVABLE 不可被检索，2=RETRIEVABLE 仍可被检索；永久有效时无意义<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>未指定（服务端按默认处理）</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>不可被检索（到期下架）</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>仍可被检索（到期不下架，仅标记时效范围）</td></tr></tbody></table></p>
                     * @return ExpireBehavior <p>超过有效时间后的行为：1=NOT_RETRIEVABLE 不可被检索，2=RETRIEVABLE 仍可被检索；永久有效时无意义<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>未指定（服务端按默认处理）</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>不可被检索（到期下架）</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>仍可被检索（到期不下架，仅标记时效范围）</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetExpireBehavior() const;

                    /**
                     * 设置<p>超过有效时间后的行为：1=NOT_RETRIEVABLE 不可被检索，2=RETRIEVABLE 仍可被检索；永久有效时无意义<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>未指定（服务端按默认处理）</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>不可被检索（到期下架）</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>仍可被检索（到期不下架，仅标记时效范围）</td></tr></tbody></table></p>
                     * @param _expireBehavior <p>超过有效时间后的行为：1=NOT_RETRIEVABLE 不可被检索，2=RETRIEVABLE 仍可被检索；永久有效时无意义<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>未指定（服务端按默认处理）</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>不可被检索（到期下架）</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>仍可被检索（到期不下架，仅标记时效范围）</td></tr></tbody></table></p>
                     * 
                     */
                    void SetExpireBehavior(const int64_t& _expireBehavior);

                    /**
                     * 判断参数 ExpireBehavior 是否已赋值
                     * @return ExpireBehavior 是否已赋值
                     * 
                     */
                    bool ExpireBehaviorHasBeenSet() const;

                private:

                    /**
                     * <p>有效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EffectivePeriod m_effectivePeriod;
                    bool m_effectivePeriodHasBeenSet;

                    /**
                     * <p>超过有效时间后的行为：1=NOT_RETRIEVABLE 不可被检索，2=RETRIEVABLE 仍可被检索；永久有效时无意义<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>未指定（服务端按默认处理）</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>不可被检索（到期下架）</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>仍可被检索（到期不下架，仅标记时效范围）</td></tr></tbody></table></p>
                     */
                    int64_t m_expireBehavior;
                    bool m_expireBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONPOLICY_H_
