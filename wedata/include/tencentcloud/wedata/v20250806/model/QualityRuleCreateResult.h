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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULECREATERESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULECREATERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 批量创建规则时的单条数据创建结果
                */
                class QualityRuleCreateResult : public AbstractModel
                {
                public:
                    QualityRuleCreateResult();
                    ~QualityRuleCreateResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msg 操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取操作结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Success 操作结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置操作结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _success 操作结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId 规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取本地表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupTableId 本地表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleGroupTableId() const;

                    /**
                     * 设置本地表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupTableId 本地表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupTableId(const int64_t& _ruleGroupTableId);

                    /**
                     * 判断参数 RuleGroupTableId 是否已赋值
                     * @return RuleGroupTableId 是否已赋值
                     * 
                     */
                    bool RuleGroupTableIdHasBeenSet() const;

                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 操作结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 规则名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 本地表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleGroupTableId;
                    bool m_ruleGroupTableIdHasBeenSet;

                    /**
                     * 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULECREATERESULT_H_
