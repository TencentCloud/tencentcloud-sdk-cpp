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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGYSTATUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiEnvironmentStrategy.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API绑定策略列表
                */
                class ApiEnvironmentStrategyStatus : public AbstractModel
                {
                public:
                    ApiEnvironmentStrategyStatus();
                    ~ApiEnvironmentStrategyStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API绑定的限流策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount API绑定的限流策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置API绑定的限流策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount API绑定的限流策略数量。
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
                     * 获取API绑定的限流策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiEnvironmentStrategySet API绑定的限流策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiEnvironmentStrategy> GetApiEnvironmentStrategySet() const;

                    /**
                     * 设置API绑定的限流策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiEnvironmentStrategySet API绑定的限流策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiEnvironmentStrategySet(const std::vector<ApiEnvironmentStrategy>& _apiEnvironmentStrategySet);

                    /**
                     * 判断参数 ApiEnvironmentStrategySet 是否已赋值
                     * @return ApiEnvironmentStrategySet 是否已赋值
                     * 
                     */
                    bool ApiEnvironmentStrategySetHasBeenSet() const;

                private:

                    /**
                     * API绑定的限流策略数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * API绑定的限流策略列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiEnvironmentStrategy> m_apiEnvironmentStrategySet;
                    bool m_apiEnvironmentStrategySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGYSTATUS_H_
