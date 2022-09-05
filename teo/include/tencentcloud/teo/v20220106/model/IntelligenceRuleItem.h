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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_INTELLIGENCERULEITEM_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_INTELLIGENCERULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Bot智能分析规则详情
                */
                class IntelligenceRuleItem : public AbstractModel
                {
                public:
                    IntelligenceRuleItem();
                    ~IntelligenceRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能分析标签。
1. evil_bot 恶意
2. suspect_bot 疑似恶意
3. good_bot 好的
4. normal 正常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 智能分析标签。
1. evil_bot 恶意
2. suspect_bot 疑似恶意
3. good_bot 好的
4. normal 正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置智能分析标签。
1. evil_bot 恶意
2. suspect_bot 疑似恶意
3. good_bot 好的
4. normal 正常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Label 智能分析标签。
1. evil_bot 恶意
2. suspect_bot 疑似恶意
3. good_bot 好的
4. normal 正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取触发智能分析标签对应的处置方式。
1. drop 拦截
2. trans 放行
3. monitor 监控
4. alg Javascript挑战
5. captcha 数字验证码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 触发智能分析标签对应的处置方式。
1. drop 拦截
2. trans 放行
3. monitor 监控
4. alg Javascript挑战
5. captcha 数字验证码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置触发智能分析标签对应的处置方式。
1. drop 拦截
2. trans 放行
3. monitor 监控
4. alg Javascript挑战
5. captcha 数字验证码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action 触发智能分析标签对应的处置方式。
1. drop 拦截
2. trans 放行
3. monitor 监控
4. alg Javascript挑战
5. captcha 数字验证码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 智能分析标签。
1. evil_bot 恶意
2. suspect_bot 疑似恶意
3. good_bot 好的
4. normal 正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 触发智能分析标签对应的处置方式。
1. drop 拦截
2. trans 放行
3. monitor 监控
4. alg Javascript挑战
5. captcha 数字验证码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_INTELLIGENCERULEITEM_H_
