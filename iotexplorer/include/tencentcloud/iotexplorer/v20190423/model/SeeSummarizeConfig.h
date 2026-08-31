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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEESUMMARIZECONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEESUMMARIZECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 每日与每周总结配置
                */
                class SeeSummarizeConfig : public AbstractModel
                {
                public:
                    SeeSummarizeConfig();
                    ~SeeSummarizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启每日总结
                     * @return EnableDailySummary 是否开启每日总结
                     * 
                     */
                    bool GetEnableDailySummary() const;

                    /**
                     * 设置是否开启每日总结
                     * @param _enableDailySummary 是否开启每日总结
                     * 
                     */
                    void SetEnableDailySummary(const bool& _enableDailySummary);

                    /**
                     * 判断参数 EnableDailySummary 是否已赋值
                     * @return EnableDailySummary 是否已赋值
                     * 
                     */
                    bool EnableDailySummaryHasBeenSet() const;

                    /**
                     * 获取是否开启每周总结
                     * @return EnableWeeklySummary 是否开启每周总结
                     * 
                     */
                    bool GetEnableWeeklySummary() const;

                    /**
                     * 设置是否开启每周总结
                     * @param _enableWeeklySummary 是否开启每周总结
                     * 
                     */
                    void SetEnableWeeklySummary(const bool& _enableWeeklySummary);

                    /**
                     * 判断参数 EnableWeeklySummary 是否已赋值
                     * @return EnableWeeklySummary 是否已赋值
                     * 
                     */
                    bool EnableWeeklySummaryHasBeenSet() const;

                    /**
                     * 获取<p>生成总结的详细程度</p><p>枚举值：</p><ul><li>low： 精简</li><li>medium： 概要（默认值）</li></ul>
                     * @return SummaryVerbosity <p>生成总结的详细程度</p><p>枚举值：</p><ul><li>low： 精简</li><li>medium： 概要（默认值）</li></ul>
                     * 
                     */
                    std::string GetSummaryVerbosity() const;

                    /**
                     * 设置<p>生成总结的详细程度</p><p>枚举值：</p><ul><li>low： 精简</li><li>medium： 概要（默认值）</li></ul>
                     * @param _summaryVerbosity <p>生成总结的详细程度</p><p>枚举值：</p><ul><li>low： 精简</li><li>medium： 概要（默认值）</li></ul>
                     * 
                     */
                    void SetSummaryVerbosity(const std::string& _summaryVerbosity);

                    /**
                     * 判断参数 SummaryVerbosity 是否已赋值
                     * @return SummaryVerbosity 是否已赋值
                     * 
                     */
                    bool SummaryVerbosityHasBeenSet() const;

                private:

                    /**
                     * 是否开启每日总结
                     */
                    bool m_enableDailySummary;
                    bool m_enableDailySummaryHasBeenSet;

                    /**
                     * 是否开启每周总结
                     */
                    bool m_enableWeeklySummary;
                    bool m_enableWeeklySummaryHasBeenSet;

                    /**
                     * <p>生成总结的详细程度</p><p>枚举值：</p><ul><li>low： 精简</li><li>medium： 概要（默认值）</li></ul>
                     */
                    std::string m_summaryVerbosity;
                    bool m_summaryVerbosityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEESUMMARIZECONFIG_H_
