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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTSUMMARYINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTSUMMARYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Identity.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同摘要信息
                */
                class ContractSummaryInfo : public AbstractModel
                {
                public:
                    ContractSummaryInfo();
                    ~ContractSummaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段 key
                     * @return Key 字段 key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置字段 key
                     * @param _key 字段 key
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
                     * 获取字段值
                     * @return Value 字段值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置字段值
                     * @param _value 字段值
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
                     * 获取主体信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Identity 主体信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Identity GetIdentity() const;

                    /**
                     * 设置主体信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identity 主体信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentity(const Identity& _identity);

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     * 
                     */
                    bool IdentityHasBeenSet() const;

                private:

                    /**
                     * 字段 key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 字段值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 主体信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Identity m_identity;
                    bool m_identityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTSUMMARYINFO_H_
