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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCYCLECONFIGFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCYCLECONFIGFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 水印周期配置。
                */
                class WatermarkCycleConfigForUpdate : public AbstractModel
                {
                public:
                    WatermarkCycleConfigForUpdate();
                    ~WatermarkCycleConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印在视频里第一次出现的播放时间点，单位：秒。
                     * @return StartTime 水印在视频里第一次出现的播放时间点，单位：秒。
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置水印在视频里第一次出现的播放时间点，单位：秒。
                     * @param _startTime 水印在视频里第一次出现的播放时间点，单位：秒。
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取在一个水印周期内，水印显示的持续时间，单位：秒。
                     * @return DisplayDuration 在一个水印周期内，水印显示的持续时间，单位：秒。
                     * 
                     */
                    double GetDisplayDuration() const;

                    /**
                     * 设置在一个水印周期内，水印显示的持续时间，单位：秒。
                     * @param _displayDuration 在一个水印周期内，水印显示的持续时间，单位：秒。
                     * 
                     */
                    void SetDisplayDuration(const double& _displayDuration);

                    /**
                     * 判断参数 DisplayDuration 是否已赋值
                     * @return DisplayDuration 是否已赋值
                     * 
                     */
                    bool DisplayDurationHasBeenSet() const;

                    /**
                     * 获取一个水印周期的持续时间，单位：秒。
填 0 表示水印只持续一个水印周期（即在整个视频里只显示 DisplayDuration 秒）。
                     * @return CycleDuration 一个水印周期的持续时间，单位：秒。
填 0 表示水印只持续一个水印周期（即在整个视频里只显示 DisplayDuration 秒）。
                     * 
                     */
                    double GetCycleDuration() const;

                    /**
                     * 设置一个水印周期的持续时间，单位：秒。
填 0 表示水印只持续一个水印周期（即在整个视频里只显示 DisplayDuration 秒）。
                     * @param _cycleDuration 一个水印周期的持续时间，单位：秒。
填 0 表示水印只持续一个水印周期（即在整个视频里只显示 DisplayDuration 秒）。
                     * 
                     */
                    void SetCycleDuration(const double& _cycleDuration);

                    /**
                     * 判断参数 CycleDuration 是否已赋值
                     * @return CycleDuration 是否已赋值
                     * 
                     */
                    bool CycleDurationHasBeenSet() const;

                private:

                    /**
                     * 水印在视频里第一次出现的播放时间点，单位：秒。
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 在一个水印周期内，水印显示的持续时间，单位：秒。
                     */
                    double m_displayDuration;
                    bool m_displayDurationHasBeenSet;

                    /**
                     * 一个水印周期的持续时间，单位：秒。
填 0 表示水印只持续一个水印周期（即在整个视频里只显示 DisplayDuration 秒）。
                     */
                    double m_cycleDuration;
                    bool m_cycleDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCYCLECONFIGFORUPDATE_H_
