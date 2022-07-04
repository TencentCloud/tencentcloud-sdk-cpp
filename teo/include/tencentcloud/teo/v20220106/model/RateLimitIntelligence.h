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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITINTELLIGENCE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITINTELLIGENCE_H_

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
                * 智能客户端过滤
                */
                class RateLimitIntelligence : public AbstractModel
                {
                public:
                    RateLimitIntelligence();
                    ~RateLimitIntelligence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取功能开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 功能开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置功能开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch 功能开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取执行动作 monitor(观察), alg(挑战)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 执行动作 monitor(观察), alg(挑战)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作 monitor(观察), alg(挑战)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action 执行动作 monitor(观察), alg(挑战)
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
                     * 功能开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 执行动作 monitor(观察), alg(挑战)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITINTELLIGENCE_H_
