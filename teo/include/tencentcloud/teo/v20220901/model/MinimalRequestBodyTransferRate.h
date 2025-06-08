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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MINIMALREQUESTBODYTRANSFERRATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MINIMALREQUESTBODYTRANSFERRATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 正文传输最小速率阈值的具体配置。
                */
                class MinimalRequestBodyTransferRate : public AbstractModel
                {
                public:
                    MinimalRequestBodyTransferRate();
                    ~MinimalRequestBodyTransferRate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正文传输最小速率阈值，单位仅支持bps。
                     * @return MinimalAvgTransferRateThreshold 正文传输最小速率阈值，单位仅支持bps。
                     * 
                     */
                    std::string GetMinimalAvgTransferRateThreshold() const;

                    /**
                     * 设置正文传输最小速率阈值，单位仅支持bps。
                     * @param _minimalAvgTransferRateThreshold 正文传输最小速率阈值，单位仅支持bps。
                     * 
                     */
                    void SetMinimalAvgTransferRateThreshold(const std::string& _minimalAvgTransferRateThreshold);

                    /**
                     * 判断参数 MinimalAvgTransferRateThreshold 是否已赋值
                     * @return MinimalAvgTransferRateThreshold 是否已赋值
                     * 
                     */
                    bool MinimalAvgTransferRateThresholdHasBeenSet() const;

                    /**
                     * 获取正文传输最小速率统计时间范围，取值有：<li>10s：10秒；</li><li>30s：30秒；</li><li>60s：60秒；</li><li>120s：120秒。</li> 
                     * @return CountingPeriod 正文传输最小速率统计时间范围，取值有：<li>10s：10秒；</li><li>30s：30秒；</li><li>60s：60秒；</li><li>120s：120秒。</li> 
                     * 
                     */
                    std::string GetCountingPeriod() const;

                    /**
                     * 设置正文传输最小速率统计时间范围，取值有：<li>10s：10秒；</li><li>30s：30秒；</li><li>60s：60秒；</li><li>120s：120秒。</li> 
                     * @param _countingPeriod 正文传输最小速率统计时间范围，取值有：<li>10s：10秒；</li><li>30s：30秒；</li><li>60s：60秒；</li><li>120s：120秒。</li> 
                     * 
                     */
                    void SetCountingPeriod(const std::string& _countingPeriod);

                    /**
                     * 判断参数 CountingPeriod 是否已赋值
                     * @return CountingPeriod 是否已赋值
                     * 
                     */
                    bool CountingPeriodHasBeenSet() const;

                    /**
                     * 获取正文传输最小速率阈值是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @return Enabled 正文传输最小速率阈值是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置正文传输最小速率阈值是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _enabled 正文传输最小速率阈值是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 正文传输最小速率阈值，单位仅支持bps。
                     */
                    std::string m_minimalAvgTransferRateThreshold;
                    bool m_minimalAvgTransferRateThresholdHasBeenSet;

                    /**
                     * 正文传输最小速率统计时间范围，取值有：<li>10s：10秒；</li><li>30s：30秒；</li><li>60s：60秒；</li><li>120s：120秒。</li> 
                     */
                    std::string m_countingPeriod;
                    bool m_countingPeriodHasBeenSet;

                    /**
                     * 正文传输最小速率阈值是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MINIMALREQUESTBODYTRANSFERRATE_H_
