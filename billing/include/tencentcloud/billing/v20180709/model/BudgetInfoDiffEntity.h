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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETINFODIFFENTITY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETINFODIFFENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 记录预算项目相关字段的变更信息
                */
                class BudgetInfoDiffEntity : public AbstractModel
                {
                public:
                    BudgetInfoDiffEntity();
                    ~BudgetInfoDiffEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变更属性
                     * @return Property 变更属性
                     * 
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置变更属性
                     * @param _property 变更属性
                     * 
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     * 
                     */
                    bool PropertyHasBeenSet() const;

                    /**
                     * 获取变更前内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Before 变更前内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBefore() const;

                    /**
                     * 设置变更前内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _before 变更前内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBefore(const std::string& _before);

                    /**
                     * 判断参数 Before 是否已赋值
                     * @return Before 是否已赋值
                     * 
                     */
                    bool BeforeHasBeenSet() const;

                    /**
                     * 获取变更后内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return After 变更后内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAfter() const;

                    /**
                     * 设置变更后内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _after 变更后内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAfter(const std::string& _after);

                    /**
                     * 判断参数 After 是否已赋值
                     * @return After 是否已赋值
                     * 
                     */
                    bool AfterHasBeenSet() const;

                private:

                    /**
                     * 变更属性
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                    /**
                     * 变更前内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_before;
                    bool m_beforeHasBeenSet;

                    /**
                     * 变更后内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_after;
                    bool m_afterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETINFODIFFENTITY_H_
