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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEHISTORY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEHISTORY_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则操作记录业务
                */
                class RuleHistory : public AbstractModel
                {
                public:
                    RuleHistory();
                    ~RuleHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取变更时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlterTime 变更时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlterTime() const;

                    /**
                     * 设置变更时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlterTime 变更时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlterTime(const std::string& _alterTime);

                    /**
                     * 判断参数 AlterTime 是否已赋值
                     * @return AlterTime 是否已赋值
                     */
                    bool AlterTimeHasBeenSet() const;

                    /**
                     * 获取变更内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlterContent 变更内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlterContent() const;

                    /**
                     * 设置变更内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlterContent 变更内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlterContent(const std::string& _alterContent);

                    /**
                     * 判断参数 AlterContent 是否已赋值
                     * @return AlterContent 是否已赋值
                     */
                    bool AlterContentHasBeenSet() const;

                    /**
                     * 获取操作账号UId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUserId 操作账号UId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOperatorUserId() const;

                    /**
                     * 设置操作账号UId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperatorUserId 操作账号UId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperatorUserId(const uint64_t& _operatorUserId);

                    /**
                     * 判断参数 OperatorUserId 是否已赋值
                     * @return OperatorUserId 是否已赋值
                     */
                    bool OperatorUserIdHasBeenSet() const;

                    /**
                     * 获取操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorName 操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperatorName 操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     */
                    bool OperatorNameHasBeenSet() const;

                private:

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 变更时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alterTime;
                    bool m_alterTimeHasBeenSet;

                    /**
                     * 变更内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alterContent;
                    bool m_alterContentHasBeenSet;

                    /**
                     * 操作账号UId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operatorUserId;
                    bool m_operatorUserIdHasBeenSet;

                    /**
                     * 操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEHISTORY_H_
