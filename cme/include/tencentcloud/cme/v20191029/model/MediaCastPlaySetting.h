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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPLAYSETTING_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPLAYSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 播放控制参数。
                */
                class MediaCastPlaySetting : public AbstractModel
                {
                public:
                    MediaCastPlaySetting();
                    ~MediaCastPlaySetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取循环播放次数。LoopCount 和 EndTime 同时只能有一个生效。默认循环播放次数为一次。如果同时设置了 LoopCount 和 EndTime 参数，优先使用 LoopCount 参数。
                     * @return LoopCount 循环播放次数。LoopCount 和 EndTime 同时只能有一个生效。默认循环播放次数为一次。如果同时设置了 LoopCount 和 EndTime 参数，优先使用 LoopCount 参数。
                     * 
                     */
                    int64_t GetLoopCount() const;

                    /**
                     * 设置循环播放次数。LoopCount 和 EndTime 同时只能有一个生效。默认循环播放次数为一次。如果同时设置了 LoopCount 和 EndTime 参数，优先使用 LoopCount 参数。
                     * @param _loopCount 循环播放次数。LoopCount 和 EndTime 同时只能有一个生效。默认循环播放次数为一次。如果同时设置了 LoopCount 和 EndTime 参数，优先使用 LoopCount 参数。
                     * 
                     */
                    void SetLoopCount(const int64_t& _loopCount);

                    /**
                     * 判断参数 LoopCount 是否已赋值
                     * @return LoopCount 是否已赋值
                     * 
                     */
                    bool LoopCountHasBeenSet() const;

                    /**
                     * 获取结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return EndTime 结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _endTime 结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取自动启动时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return AutoStartTime 自动启动时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetAutoStartTime() const;

                    /**
                     * 设置自动启动时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _autoStartTime 自动启动时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetAutoStartTime(const std::string& _autoStartTime);

                    /**
                     * 判断参数 AutoStartTime 是否已赋值
                     * @return AutoStartTime 是否已赋值
                     * 
                     */
                    bool AutoStartTimeHasBeenSet() const;

                private:

                    /**
                     * 循环播放次数。LoopCount 和 EndTime 同时只能有一个生效。默认循环播放次数为一次。如果同时设置了 LoopCount 和 EndTime 参数，优先使用 LoopCount 参数。
                     */
                    int64_t m_loopCount;
                    bool m_loopCountHasBeenSet;

                    /**
                     * 结束时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 自动启动时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_autoStartTime;
                    bool m_autoStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPLAYSETTING_H_
