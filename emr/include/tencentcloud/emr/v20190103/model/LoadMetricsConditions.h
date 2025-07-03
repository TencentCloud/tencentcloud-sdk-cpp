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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITIONS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoadMetricsCondition.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 负载指标
                */
                class LoadMetricsConditions : public AbstractModel
                {
                public:
                    LoadMetricsConditions();
                    ~LoadMetricsConditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发规则条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadMetrics 触发规则条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LoadMetricsCondition> GetLoadMetrics() const;

                    /**
                     * 设置触发规则条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadMetrics 触发规则条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadMetrics(const std::vector<LoadMetricsCondition>& _loadMetrics);

                    /**
                     * 判断参数 LoadMetrics 是否已赋值
                     * @return LoadMetrics 是否已赋值
                     * 
                     */
                    bool LoadMetricsHasBeenSet() const;

                    /**
                     * 获取0:所有条件满足
1：满足任意一个
                     * @return Match 0:所有条件满足
1：满足任意一个
                     * 
                     */
                    int64_t GetMatch() const;

                    /**
                     * 设置0:所有条件满足
1：满足任意一个
                     * @param _match 0:所有条件满足
1：满足任意一个
                     * 
                     */
                    void SetMatch(const int64_t& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                private:

                    /**
                     * 触发规则条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LoadMetricsCondition> m_loadMetrics;
                    bool m_loadMetricsHasBeenSet;

                    /**
                     * 0:所有条件满足
1：满足任意一个
                     */
                    int64_t m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITIONS_H_
