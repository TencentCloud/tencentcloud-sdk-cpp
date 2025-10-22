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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MAXNEWSESSIONTRIGGERCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MAXNEWSESSIONTRIGGERCONFIG_H_

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
                * Bot 管理中校验的触发阈值。
                */
                class MaxNewSessionTriggerConfig : public AbstractModel
                {
                public:
                    MaxNewSessionTriggerConfig();
                    ~MaxNewSessionTriggerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * @return MaxNewSessionCountInterval 触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * 
                     */
                    std::string GetMaxNewSessionCountInterval() const;

                    /**
                     * 设置触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * @param _maxNewSessionCountInterval 触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * 
                     */
                    void SetMaxNewSessionCountInterval(const std::string& _maxNewSessionCountInterval);

                    /**
                     * 判断参数 MaxNewSessionCountInterval 是否已赋值
                     * @return MaxNewSessionCountInterval 是否已赋值
                     * 
                     */
                    bool MaxNewSessionCountIntervalHasBeenSet() const;

                    /**
                     * 获取触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * @return MaxNewSessionCountThreshold 触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * 
                     */
                    int64_t GetMaxNewSessionCountThreshold() const;

                    /**
                     * 设置触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * @param _maxNewSessionCountThreshold 触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * 
                     */
                    void SetMaxNewSessionCountThreshold(const int64_t& _maxNewSessionCountThreshold);

                    /**
                     * 判断参数 MaxNewSessionCountThreshold 是否已赋值
                     * @return MaxNewSessionCountThreshold 是否已赋值
                     * 
                     */
                    bool MaxNewSessionCountThresholdHasBeenSet() const;

                private:

                    /**
                     * 触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     */
                    std::string m_maxNewSessionCountInterval;
                    bool m_maxNewSessionCountIntervalHasBeenSet;

                    /**
                     * 触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     */
                    int64_t m_maxNewSessionCountThreshold;
                    bool m_maxNewSessionCountThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXNEWSESSIONTRIGGERCONFIG_H_
