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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_USAGETIMEPOINT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_USAGETIMEPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 用量趋势点
                */
                class UsageTimePoint : public AbstractModel
                {
                public:
                    UsageTimePoint();
                    ~UsageTimePoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间 YYYY-MM-DD HH:00:00</p>
                     * @return Time <p>时间 YYYY-MM-DD HH:00:00</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>时间 YYYY-MM-DD HH:00:00</p>
                     * @param _time <p>时间 YYYY-MM-DD HH:00:00</p>
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>上报量</p>
                     * @return ReportVolume <p>上报量</p>
                     * 
                     */
                    int64_t GetReportVolume() const;

                    /**
                     * 设置<p>上报量</p>
                     * @param _reportVolume <p>上报量</p>
                     * 
                     */
                    void SetReportVolume(const int64_t& _reportVolume);

                    /**
                     * 判断参数 ReportVolume 是否已赋值
                     * @return ReportVolume 是否已赋值
                     * 
                     */
                    bool ReportVolumeHasBeenSet() const;

                private:

                    /**
                     * <p>时间 YYYY-MM-DD HH:00:00</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>上报量</p>
                     */
                    int64_t m_reportVolume;
                    bool m_reportVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_USAGETIMEPOINT_H_
