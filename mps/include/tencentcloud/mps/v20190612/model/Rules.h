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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RULES_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RuleConditionItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 任务判断条件
                */
                class Rules : public AbstractModel
                {
                public:
                    Rules();
                    ~Rules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取判断条件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 判断条件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置判断条件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 判断条件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取判断条件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 判断条件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleConditionItem> GetConditions() const;

                    /**
                     * 设置判断条件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions 判断条件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditions(const std::vector<RuleConditionItem>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取条件列表的链接符号，取值如下：

- &&：逻辑与
- ||：逻辑或
                     * @return Linker 条件列表的链接符号，取值如下：

- &&：逻辑与
- ||：逻辑或
                     * 
                     */
                    std::string GetLinker() const;

                    /**
                     * 设置条件列表的链接符号，取值如下：

- &&：逻辑与
- ||：逻辑或
                     * @param _linker 条件列表的链接符号，取值如下：

- &&：逻辑与
- ||：逻辑或
                     * 
                     */
                    void SetLinker(const std::string& _linker);

                    /**
                     * 判断参数 Linker 是否已赋值
                     * @return Linker 是否已赋值
                     * 
                     */
                    bool LinkerHasBeenSet() const;

                    /**
                     * 获取满足判断条件执行节点索引；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RearDriveIndexs 满足判断条件执行节点索引；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetRearDriveIndexs() const;

                    /**
                     * 设置满足判断条件执行节点索引；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rearDriveIndexs 满足判断条件执行节点索引；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRearDriveIndexs(const std::vector<int64_t>& _rearDriveIndexs);

                    /**
                     * 判断参数 RearDriveIndexs 是否已赋值
                     * @return RearDriveIndexs 是否已赋值
                     * 
                     */
                    bool RearDriveIndexsHasBeenSet() const;

                private:

                    /**
                     * 判断条件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 判断条件配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleConditionItem> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 条件列表的链接符号，取值如下：

- &&：逻辑与
- ||：逻辑或
                     */
                    std::string m_linker;
                    bool m_linkerHasBeenSet;

                    /**
                     * 满足判断条件执行节点索引；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_rearDriveIndexs;
                    bool m_rearDriveIndexsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RULES_H_
