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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTSTRATEGY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTimeSpotCheck.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测策略信息。
                */
                class QualityInspectStrategy : public AbstractModel
                {
                public:
                    QualityInspectStrategy();
                    ~QualityInspectStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略类型。</p><p>枚举值：</p><ul><li>TimeSpotCheck： 根据时间的抽检策略。</li></ul>
                     * @return StrategyType <p>策略类型。</p><p>枚举值：</p><ul><li>TimeSpotCheck： 根据时间的抽检策略。</li></ul>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>策略类型。</p><p>枚举值：</p><ul><li>TimeSpotCheck： 根据时间的抽检策略。</li></ul>
                     * @param _strategyType <p>策略类型。</p><p>枚举值：</p><ul><li>TimeSpotCheck： 根据时间的抽检策略。</li></ul>
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
                     * 获取<p>根据时间的抽检策略参数，当 StrategyType 为 TimeSpotCheck 时有效。</p>
                     * @return TimeSpotCheck <p>根据时间的抽检策略参数，当 StrategyType 为 TimeSpotCheck 时有效。</p>
                     * 
                     */
                    QualityInspectTimeSpotCheck GetTimeSpotCheck() const;

                    /**
                     * 设置<p>根据时间的抽检策略参数，当 StrategyType 为 TimeSpotCheck 时有效。</p>
                     * @param _timeSpotCheck <p>根据时间的抽检策略参数，当 StrategyType 为 TimeSpotCheck 时有效。</p>
                     * 
                     */
                    void SetTimeSpotCheck(const QualityInspectTimeSpotCheck& _timeSpotCheck);

                    /**
                     * 判断参数 TimeSpotCheck 是否已赋值
                     * @return TimeSpotCheck 是否已赋值
                     * 
                     */
                    bool TimeSpotCheckHasBeenSet() const;

                private:

                    /**
                     * <p>策略类型。</p><p>枚举值：</p><ul><li>TimeSpotCheck： 根据时间的抽检策略。</li></ul>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>根据时间的抽检策略参数，当 StrategyType 为 TimeSpotCheck 时有效。</p>
                     */
                    QualityInspectTimeSpotCheck m_timeSpotCheck;
                    bool m_timeSpotCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTSTRATEGY_H_
