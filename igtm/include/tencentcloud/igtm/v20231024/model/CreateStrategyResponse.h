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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_CREATESTRATEGYRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_CREATESTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * CreateStrategy返回参数结构体
                */
                class CreateStrategyResponse : public AbstractModel
                {
                public:
                    CreateStrategyResponse();
                    ~CreateStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新增策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 新增策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStrategyId() const;

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * 新增策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_CREATESTRATEGYRESPONSE_H_
