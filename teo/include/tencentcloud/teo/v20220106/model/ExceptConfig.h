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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_EXCEPTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_EXCEPTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ExceptUserRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 例外规则，用于配置需要跳过特定场景的规则
                */
                class ExceptConfig : public AbstractModel
                {
                public:
                    ExceptConfig();
                    ~ExceptConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开关。
1. on 开启
2. off 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 开关。
1. on 开启
2. off 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关。
1. on 开启
2. off 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch 开关。
1. on 开启
2. off 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取例外规则详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserRules 例外规则详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExceptUserRule> GetUserRules() const;

                    /**
                     * 设置例外规则详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserRules 例外规则详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserRules(const std::vector<ExceptUserRule>& _userRules);

                    /**
                     * 判断参数 UserRules 是否已赋值
                     * @return UserRules 是否已赋值
                     */
                    bool UserRulesHasBeenSet() const;

                private:

                    /**
                     * 开关。
1. on 开启
2. off 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 例外规则详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExceptUserRule> m_userRules;
                    bool m_userRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_EXCEPTCONFIG_H_
