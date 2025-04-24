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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENLIMIT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * AuthToken 限流信息
                */
                class AuthTokenLimit : public AbstractModel
                {
                public:
                    AuthTokenLimit();
                    ~AuthTokenLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取限频策略：PerMinute 每分钟限频；PerDay 每日限频
                     * @return Strategy 限频策略：PerMinute 每分钟限频；PerDay 每日限频
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置限频策略：PerMinute 每分钟限频；PerDay 每日限频
                     * @param _strategy 限频策略：PerMinute 每分钟限频；PerDay 每日限频
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取上限值
                     * @return Max 上限值
                     * 
                     */
                    uint64_t GetMax() const;

                    /**
                     * 设置上限值
                     * @param _max 上限值
                     * 
                     */
                    void SetMax(const uint64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * 限频策略：PerMinute 每分钟限频；PerDay 每日限频
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 上限值
                     */
                    uint64_t m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENLIMIT_H_
