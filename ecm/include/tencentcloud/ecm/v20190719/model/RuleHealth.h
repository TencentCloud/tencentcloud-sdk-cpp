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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RULEHEALTH_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RULEHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/TargetHealth.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 转发规则及健康状态列表
                */
                class RuleHealth : public AbstractModel
                {
                public:
                    RuleHealth();
                    ~RuleHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本规则上绑定的后端的健康检查状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Targets 本规则上绑定的后端的健康检查状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetHealth> GetTargets() const;

                    /**
                     * 设置本规则上绑定的后端的健康检查状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targets 本规则上绑定的后端的健康检查状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargets(const std::vector<TargetHealth>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * 本规则上绑定的后端的健康检查状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetHealth> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RULEHEALTH_H_
