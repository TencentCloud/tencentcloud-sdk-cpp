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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 实时音视频用量在某一时间段的统计信息。
                */
                class TrtcUsage : public AbstractModel
                {
                public:
                    TrtcUsage();
                    ~TrtcUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间点，格式为YYYY-MM-DD HH:mm:ss。多天查询时，HH:mm:ss为00:00:00。
                     * @return TimeKey 时间点，格式为YYYY-MM-DD HH:mm:ss。多天查询时，HH:mm:ss为00:00:00。
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置时间点，格式为YYYY-MM-DD HH:mm:ss。多天查询时，HH:mm:ss为00:00:00。
                     * @param _timeKey 时间点，格式为YYYY-MM-DD HH:mm:ss。多天查询时，HH:mm:ss为00:00:00。
                     * 
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     * 
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取时间点时间戳
                     * @return TimeStampKey 时间点时间戳
                     * 
                     */
                    uint64_t GetTimeStampKey() const;

                    /**
                     * 设置时间点时间戳
                     * @param _timeStampKey 时间点时间戳
                     * 
                     */
                    void SetTimeStampKey(const uint64_t& _timeStampKey);

                    /**
                     * 判断参数 TimeStampKey 是否已赋值
                     * @return TimeStampKey 是否已赋值
                     * 
                     */
                    bool TimeStampKeyHasBeenSet() const;

                    /**
                     * 获取用量数组。每个数值含义与UsageKey对应。单位:分钟。
                     * @return UsageValue 用量数组。每个数值含义与UsageKey对应。单位:分钟。
                     * 
                     */
                    std::vector<double> GetUsageValue() const;

                    /**
                     * 设置用量数组。每个数值含义与UsageKey对应。单位:分钟。
                     * @param _usageValue 用量数组。每个数值含义与UsageKey对应。单位:分钟。
                     * 
                     */
                    void SetUsageValue(const std::vector<double>& _usageValue);

                    /**
                     * 判断参数 UsageValue 是否已赋值
                     * @return UsageValue 是否已赋值
                     * 
                     */
                    bool UsageValueHasBeenSet() const;

                private:

                    /**
                     * 时间点，格式为YYYY-MM-DD HH:mm:ss。多天查询时，HH:mm:ss为00:00:00。
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 时间点时间戳
                     */
                    uint64_t m_timeStampKey;
                    bool m_timeStampKeyHasBeenSet;

                    /**
                     * 用量数组。每个数值含义与UsageKey对应。单位:分钟。
                     */
                    std::vector<double> m_usageValue;
                    bool m_usageValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCUSAGE_H_
