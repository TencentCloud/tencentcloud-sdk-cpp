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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LIMITRULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LIMITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/RuleFilter.h>
#include <tencentcloud/tse/v20201207/model/KeyValue.h>
#include <tencentcloud/tse/v20201207/model/QpsThreshold.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 参数限流的规则
                */
                class LimitRule : public AbstractModel
                {
                public:
                    LimitRule();
                    ~LimitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filters 请求匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleFilter> GetFilters() const;

                    /**
                     * 设置请求匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filters 请求匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilters(const std::vector<RuleFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取参数限流依据组合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitBy 参数限流依据组合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValue> GetLimitBy() const;

                    /**
                     * 设置参数限流依据组合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitBy 参数限流依据组合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitBy(const std::vector<KeyValue>& _limitBy);

                    /**
                     * 判断参数 LimitBy 是否已赋值
                     * @return LimitBy 是否已赋值
                     * 
                     */
                    bool LimitByHasBeenSet() const;

                    /**
                     * 获取限流阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QpsThresholds 限流阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QpsThreshold> GetQpsThresholds() const;

                    /**
                     * 设置限流阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qpsThresholds 限流阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQpsThresholds(const std::vector<QpsThreshold>& _qpsThresholds);

                    /**
                     * 判断参数 QpsThresholds 是否已赋值
                     * @return QpsThresholds 是否已赋值
                     * 
                     */
                    bool QpsThresholdsHasBeenSet() const;

                private:

                    /**
                     * 请求匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 参数限流依据组合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValue> m_limitBy;
                    bool m_limitByHasBeenSet;

                    /**
                     * 限流阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QpsThreshold> m_qpsThresholds;
                    bool m_qpsThresholdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LIMITRULE_H_
