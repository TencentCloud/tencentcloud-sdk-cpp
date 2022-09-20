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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 例外规则的生效范围
                */
                class ExceptUserRuleScope : public AbstractModel
                {
                public:
                    ExceptUserRuleScope();
                    ~ExceptUserRuleScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生效的模块。当前仅支持waf：托管规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Modules 生效的模块。当前仅支持waf：托管规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetModules() const;

                    /**
                     * 设置生效的模块。当前仅支持waf：托管规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Modules 生效的模块。当前仅支持waf：托管规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModules(const std::vector<std::string>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     */
                    bool ModulesHasBeenSet() const;

                private:

                    /**
                     * 生效的模块。当前仅支持waf：托管规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_modules;
                    bool m_modulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
