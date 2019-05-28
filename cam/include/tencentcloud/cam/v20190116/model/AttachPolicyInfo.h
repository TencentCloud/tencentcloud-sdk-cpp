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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 关联策略信息
                */
                class AttachPolicyInfo : public AbstractModel
                {
                public:
                    AttachPolicyInfo();
                    ~AttachPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略id
                     * @return PolicyId 策略id
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略id
                     * @param PolicyId 策略id
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateMode(const uint64_t& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyType 取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyType 取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                private:

                    /**
                     * 策略id
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 创建来源，1 通过控制台创建, 2 通过策略语法创建。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 取值为user和QCS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_
