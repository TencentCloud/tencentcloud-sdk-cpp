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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_RULESCOPEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_RULESCOPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 规则生效范围信息
                */
                class RuleScopeInfo : public AbstractModel
                {
                public:
                    RuleScopeInfo();
                    ~RuleScopeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NAT边界防火墙：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope NAT边界防火墙：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置NAT边界防火墙：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scope NAT边界防火墙：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScopeDesc 生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScopeDesc() const;

                    /**
                     * 设置生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scopeDesc 生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScopeDesc(const std::string& _scopeDesc);

                    /**
                     * 判断参数 ScopeDesc 是否已赋值
                     * @return ScopeDesc 是否已赋值
                     * 
                     */
                    bool ScopeDescHasBeenSet() const;

                private:

                    /**
                     * NAT边界防火墙：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 生效范围描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scopeDesc;
                    bool m_scopeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_RULESCOPEINFO_H_
