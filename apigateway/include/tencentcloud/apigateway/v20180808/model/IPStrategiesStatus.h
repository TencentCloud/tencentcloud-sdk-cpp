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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGIESSTATUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGIESSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/IPStrategy.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 策略列表
                */
                class IPStrategiesStatus : public AbstractModel
                {
                public:
                    IPStrategiesStatus();
                    ~IPStrategiesStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategySet 策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IPStrategy> GetStrategySet() const;

                    /**
                     * 设置策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategySet 策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategySet(const std::vector<IPStrategy>& _strategySet);

                    /**
                     * 判断参数 StrategySet 是否已赋值
                     * @return StrategySet 是否已赋值
                     * 
                     */
                    bool StrategySetHasBeenSet() const;

                private:

                    /**
                     * 策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IPStrategy> m_strategySet;
                    bool m_strategySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGIESSTATUS_H_
