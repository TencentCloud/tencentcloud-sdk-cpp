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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPTABLE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupTableInnerInfo.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupSchedulerInfo.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表绑定规则组信息
                */
                class RuleGroupTable : public AbstractModel
                {
                public:
                    RuleGroupTable();
                    ~RuleGroupTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInfo 表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleGroupTableInnerInfo GetTableInfo() const;

                    /**
                     * 设置表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableInfo 表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableInfo(const RuleGroupTableInnerInfo& _tableInfo);

                    /**
                     * 判断参数 TableInfo 是否已赋值
                     * @return TableInfo 是否已赋值
                     * 
                     */
                    bool TableInfoHasBeenSet() const;

                    /**
                     * 获取规则组调度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroups 规则组调度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleGroupSchedulerInfo> GetRuleGroups() const;

                    /**
                     * 设置规则组调度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroups 规则组调度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroups(const std::vector<RuleGroupSchedulerInfo>& _ruleGroups);

                    /**
                     * 判断参数 RuleGroups 是否已赋值
                     * @return RuleGroups 是否已赋值
                     * 
                     */
                    bool RuleGroupsHasBeenSet() const;

                    /**
                     * 获取订阅者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subscriptions 订阅者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleGroupSubscribe> GetSubscriptions() const;

                    /**
                     * 设置订阅者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscriptions 订阅者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscriptions(const std::vector<RuleGroupSubscribe>& _subscriptions);

                    /**
                     * 判断参数 Subscriptions 是否已赋值
                     * @return Subscriptions 是否已赋值
                     * 
                     */
                    bool SubscriptionsHasBeenSet() const;

                private:

                    /**
                     * 表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupTableInnerInfo m_tableInfo;
                    bool m_tableInfoHasBeenSet;

                    /**
                     * 规则组调度信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleGroupSchedulerInfo> m_ruleGroups;
                    bool m_ruleGroupsHasBeenSet;

                    /**
                     * 订阅者信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleGroupSubscribe> m_subscriptions;
                    bool m_subscriptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPTABLE_H_
