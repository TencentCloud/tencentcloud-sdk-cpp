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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLSTRATEGY_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TimeSpotCheck.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体质检检测策略。
                */
                class QualityControlStrategy : public AbstractModel
                {
                public:
                    QualityControlStrategy();
                    ~QualityControlStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略类型。取值：
- TimeSpotCheck
                     * @return StrategyType 策略类型。取值：
- TimeSpotCheck
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型。取值：
- TimeSpotCheck
                     * @param _strategyType 策略类型。取值：
- TimeSpotCheck
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
                     * 获取根据时间的抽检策略。
                     * @return TimeSpotCheck 根据时间的抽检策略。
                     * 
                     */
                    TimeSpotCheck GetTimeSpotCheck() const;

                    /**
                     * 设置根据时间的抽检策略。
                     * @param _timeSpotCheck 根据时间的抽检策略。
                     * 
                     */
                    void SetTimeSpotCheck(const TimeSpotCheck& _timeSpotCheck);

                    /**
                     * 判断参数 TimeSpotCheck 是否已赋值
                     * @return TimeSpotCheck 是否已赋值
                     * 
                     */
                    bool TimeSpotCheckHasBeenSet() const;

                private:

                    /**
                     * 策略类型。取值：
- TimeSpotCheck
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 根据时间的抽检策略。
                     */
                    TimeSpotCheck m_timeSpotCheck;
                    bool m_timeSpotCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLSTRATEGY_H_
