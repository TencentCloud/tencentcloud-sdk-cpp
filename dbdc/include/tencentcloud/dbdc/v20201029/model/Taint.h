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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_TAINT_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_TAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 集群节点 taint 信息。
                */
                class Taint : public AbstractModel
                {
                public:
                    Taint();
                    ~Taint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Taint 的键，格式对齐 K8s 原生约束（prefix DNS 子域 ≤ 253 字符，name ≤ 63 字符），不可使用系统保留前缀</p>
                     * @return Key <p>Taint 的键，格式对齐 K8s 原生约束（prefix DNS 子域 ≤ 253 字符，name ≤ 63 字符），不可使用系统保留前缀</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Taint 的键，格式对齐 K8s 原生约束（prefix DNS 子域 ≤ 253 字符，name ≤ 63 字符），不可使用系统保留前缀</p>
                     * @param _key <p>Taint 的键，格式对齐 K8s 原生约束（prefix DNS 子域 ≤ 253 字符，name ≤ 63 字符），不可使用系统保留前缀</p>
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
                     * 获取<p>污点效果</p><p>枚举值：</p><ul><li>NoSchedule： 不允许新 Pod 调度到该节点（已运行 Pod 不受影响）</li><li>PreferNoSchedule： 尽量不调度，无法满足时仍可调度</li><li>NoExecute： 不允许调度，且会驱逐已在节点上运行的不容忍该 Taint 的 Pod</li></ul>
                     * @return Effect <p>污点效果</p><p>枚举值：</p><ul><li>NoSchedule： 不允许新 Pod 调度到该节点（已运行 Pod 不受影响）</li><li>PreferNoSchedule： 尽量不调度，无法满足时仍可调度</li><li>NoExecute： 不允许调度，且会驱逐已在节点上运行的不容忍该 Taint 的 Pod</li></ul>
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置<p>污点效果</p><p>枚举值：</p><ul><li>NoSchedule： 不允许新 Pod 调度到该节点（已运行 Pod 不受影响）</li><li>PreferNoSchedule： 尽量不调度，无法满足时仍可调度</li><li>NoExecute： 不允许调度，且会驱逐已在节点上运行的不容忍该 Taint 的 Pod</li></ul>
                     * @param _effect <p>污点效果</p><p>枚举值：</p><ul><li>NoSchedule： 不允许新 Pod 调度到该节点（已运行 Pod 不受影响）</li><li>PreferNoSchedule： 尽量不调度，无法满足时仍可调度</li><li>NoExecute： 不允许调度，且会驱逐已在节点上运行的不容忍该 Taint 的 Pod</li></ul>
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
                     * 获取<p>Taint 的值，≤ 63 字符，可为空</p>
                     * @return Value <p>Taint 的值，≤ 63 字符，可为空</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Taint 的值，≤ 63 字符，可为空</p>
                     * @param _value <p>Taint 的值，≤ 63 字符，可为空</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>Taint 的键，格式对齐 K8s 原生约束（prefix DNS 子域 ≤ 253 字符，name ≤ 63 字符），不可使用系统保留前缀</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>污点效果</p><p>枚举值：</p><ul><li>NoSchedule： 不允许新 Pod 调度到该节点（已运行 Pod 不受影响）</li><li>PreferNoSchedule： 尽量不调度，无法满足时仍可调度</li><li>NoExecute： 不允许调度，且会驱逐已在节点上运行的不容忍该 Taint 的 Pod</li></ul>
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * <p>Taint 的值，≤ 63 字符，可为空</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_TAINT_H_
