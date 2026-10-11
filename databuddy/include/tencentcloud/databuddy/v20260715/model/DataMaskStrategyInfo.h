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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DATAMASKSTRATEGYINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DATAMASKSTRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/DataMaskGroup.h>
#include <tencentcloud/databuddy/v20260715/model/DataMaskLabelInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 创建脱敏策略时的策略信息
                */
                class DataMaskStrategyInfo : public AbstractModel
                {
                public:
                    DataMaskStrategyInfo();
                    ~DataMaskStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称，必填，长度 1~128 字符，同一项目下唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyName 策略名称，必填，长度 1~128 字符，同一项目下唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称，必填，长度 1~128 字符，同一项目下唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyName 策略名称，必填，长度 1~128 字符，同一项目下唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取用户组脱敏规则列表，必填，至少包含一条规则。每条规则描述某个用户组对应的脱敏方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 用户组脱敏规则列表，必填，至少包含一条规则。每条规则描述某个用户组对应的脱敏方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataMaskGroup> GetGroups() const;

                    /**
                     * 设置用户组脱敏规则列表，必填，至少包含一条规则。每条规则描述某个用户组对应的脱敏方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groups 用户组脱敏规则列表，必填，至少包含一条规则。每条规则描述某个用户组对应的脱敏方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroups(const std::vector<DataMaskGroup>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取策略类型，必填，直接透传给 DLC。合法值：MASK_SHOW_FIRST_4（保留前四个字符）、MASK_SHOW_LAST_4（保留后四个字符）、MASK_HASH（哈希脱敏）、MASK_DATE_SHOW_YEAR（日期脱敏保留年份）、MASK_NULL（置为 NULL）、MASK_DEFAULT（默认值脱敏）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyType 策略类型，必填，直接透传给 DLC。合法值：MASK_SHOW_FIRST_4（保留前四个字符）、MASK_SHOW_LAST_4（保留后四个字符）、MASK_HASH（哈希脱敏）、MASK_DATE_SHOW_YEAR（日期脱敏保留年份）、MASK_NULL（置为 NULL）、MASK_DEFAULT（默认值脱敏）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型，必填，直接透传给 DLC。合法值：MASK_SHOW_FIRST_4（保留前四个字符）、MASK_SHOW_LAST_4（保留后四个字符）、MASK_HASH（哈希脱敏）、MASK_DATE_SHOW_YEAR（日期脱敏保留年份）、MASK_NULL（置为 NULL）、MASK_DEFAULT（默认值脱敏）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyType 策略类型，必填，直接透传给 DLC。合法值：MASK_SHOW_FIRST_4（保留前四个字符）、MASK_SHOW_LAST_4（保留后四个字符）、MASK_HASH（哈希脱敏）、MASK_DATE_SHOW_YEAR（日期脱敏保留年份）、MASK_NULL（置为 NULL）、MASK_DEFAULT（默认值脱敏）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取策略描述，可选，最大 512 字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyDesc 策略描述，可选，最大 512 字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyDesc() const;

                    /**
                     * 设置策略描述，可选，最大 512 字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyDesc 策略描述，可选，最大 512 字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyDesc(const std::string& _strategyDesc);

                    /**
                     * 判断参数 StrategyDesc 是否已赋值
                     * @return StrategyDesc 是否已赋值
                     * 
                     */
                    bool StrategyDescHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return StrategyId 策略ID
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略ID
                     * @param _strategyId 策略ID
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取该脱敏策略当前绑定的敏感标签列表。使用场景：表详情弹窗回显“此策略关联了哪些敏感标签”，前端可 hover 展示。数据源：catalog-manager 域 meta_label_mask_policy_rel JOIN meta_biz_label，按 policy_id 反查。未关联任何敏感标签时为空数组。前置条件：仅当所在 ColumnInfo.DataMaskStrategyInfo 非空时才有查询意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 该脱敏策略当前绑定的敏感标签列表。使用场景：表详情弹窗回显“此策略关联了哪些敏感标签”，前端可 hover 展示。数据源：catalog-manager 域 meta_label_mask_policy_rel JOIN meta_biz_label，按 policy_id 反查。未关联任何敏感标签时为空数组。前置条件：仅当所在 ColumnInfo.DataMaskStrategyInfo 非空时才有查询意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataMaskLabelInfo> GetLabels() const;

                    /**
                     * 设置该脱敏策略当前绑定的敏感标签列表。使用场景：表详情弹窗回显“此策略关联了哪些敏感标签”，前端可 hover 展示。数据源：catalog-manager 域 meta_label_mask_policy_rel JOIN meta_biz_label，按 policy_id 反查。未关联任何敏感标签时为空数组。前置条件：仅当所在 ColumnInfo.DataMaskStrategyInfo 非空时才有查询意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 该脱敏策略当前绑定的敏感标签列表。使用场景：表详情弹窗回显“此策略关联了哪些敏感标签”，前端可 hover 展示。数据源：catalog-manager 域 meta_label_mask_policy_rel JOIN meta_biz_label，按 policy_id 反查。未关联任何敏感标签时为空数组。前置条件：仅当所在 ColumnInfo.DataMaskStrategyInfo 非空时才有查询意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<DataMaskLabelInfo>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 策略名称，必填，长度 1~128 字符，同一项目下唯一
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 用户组脱敏规则列表，必填，至少包含一条规则。每条规则描述某个用户组对应的脱敏方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataMaskGroup> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 策略类型，必填，直接透传给 DLC。合法值：MASK_SHOW_FIRST_4（保留前四个字符）、MASK_SHOW_LAST_4（保留后四个字符）、MASK_HASH（哈希脱敏）、MASK_DATE_SHOW_YEAR（日期脱敏保留年份）、MASK_NULL（置为 NULL）、MASK_DEFAULT（默认值脱敏）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 策略描述，可选，最大 512 字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyDesc;
                    bool m_strategyDescHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 该脱敏策略当前绑定的敏感标签列表。使用场景：表详情弹窗回显“此策略关联了哪些敏感标签”，前端可 hover 展示。数据源：catalog-manager 域 meta_label_mask_policy_rel JOIN meta_biz_label，按 policy_id 反查。未关联任何敏感标签时为空数组。前置条件：仅当所在 ColumnInfo.DataMaskStrategyInfo 非空时才有查询意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataMaskLabelInfo> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DATAMASKSTRATEGYINFO_H_
