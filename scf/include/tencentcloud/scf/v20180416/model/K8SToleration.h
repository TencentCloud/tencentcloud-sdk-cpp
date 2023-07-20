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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_K8STOLERATION_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_K8STOLERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Kubernetes污点容忍，使用时请注意您的Kubernetes版本所支持的字段情况。
可参考 https://kubernetes.io/zh-cn/docs/concepts/scheduling-eviction/taint-and-toleration/
                */
                class K8SToleration : public AbstractModel
                {
                public:
                    K8SToleration();
                    ~K8SToleration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配的污点名
                     * @return Key 匹配的污点名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置匹配的污点名
                     * @param _key 匹配的污点名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取匹配方式，默认值为: Equal
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 匹配方式，默认值为: Equal
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置匹配方式，默认值为: Equal
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 匹配方式，默认值为: Equal
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Effect 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effect 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEffect(const std::string& _effect);

                    /**
                     * 判断参数 Effect 是否已赋值
                     * @return Effect 是否已赋值
                     * 
                     */
                    bool EffectHasBeenSet() const;

                    /**
                     * 获取匹配的污点值，当Operator为Equal时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 匹配的污点值，当Operator为Equal时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置匹配的污点值，当Operator为Equal时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 匹配的污点值，当Operator为Equal时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取当污点不被容忍时，Pod还能在节点上运行多久
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TolerationSeconds 当污点不被容忍时，Pod还能在节点上运行多久
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTolerationSeconds() const;

                    /**
                     * 设置当污点不被容忍时，Pod还能在节点上运行多久
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tolerationSeconds 当污点不被容忍时，Pod还能在节点上运行多久
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTolerationSeconds(const uint64_t& _tolerationSeconds);

                    /**
                     * 判断参数 TolerationSeconds 是否已赋值
                     * @return TolerationSeconds 是否已赋值
                     * 
                     */
                    bool TolerationSecondsHasBeenSet() const;

                private:

                    /**
                     * 匹配的污点名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 匹配方式，默认值为: Equal
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * 匹配的污点值，当Operator为Equal时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 当污点不被容忍时，Pod还能在节点上运行多久
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tolerationSeconds;
                    bool m_tolerationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_K8STOLERATION_H_
