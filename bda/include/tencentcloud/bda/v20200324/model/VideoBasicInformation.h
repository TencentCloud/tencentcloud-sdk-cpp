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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_VIDEOBASICINFORMATION_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_VIDEOBASICINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 视频基础信息
                */
                class VideoBasicInformation : public AbstractModel
                {
                public:
                    VideoBasicInformation();
                    ~VideoBasicInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频宽度
                     * @return FrameWidth 视频宽度
                     * 
                     */
                    int64_t GetFrameWidth() const;

                    /**
                     * 设置视频宽度
                     * @param _frameWidth 视频宽度
                     * 
                     */
                    void SetFrameWidth(const int64_t& _frameWidth);

                    /**
                     * 判断参数 FrameWidth 是否已赋值
                     * @return FrameWidth 是否已赋值
                     * 
                     */
                    bool FrameWidthHasBeenSet() const;

                    /**
                     * 获取视频高度
                     * @return FrameHeight 视频高度
                     * 
                     */
                    int64_t GetFrameHeight() const;

                    /**
                     * 设置视频高度
                     * @param _frameHeight 视频高度
                     * 
                     */
                    void SetFrameHeight(const int64_t& _frameHeight);

                    /**
                     * 判断参数 FrameHeight 是否已赋值
                     * @return FrameHeight 是否已赋值
                     * 
                     */
                    bool FrameHeightHasBeenSet() const;

                    /**
                     * 获取视频帧速率(FPS)
                     * @return FramesPerSecond 视频帧速率(FPS)
                     * 
                     */
                    int64_t GetFramesPerSecond() const;

                    /**
                     * 设置视频帧速率(FPS)
                     * @param _framesPerSecond 视频帧速率(FPS)
                     * 
                     */
                    void SetFramesPerSecond(const int64_t& _framesPerSecond);

                    /**
                     * 判断参数 FramesPerSecond 是否已赋值
                     * @return FramesPerSecond 是否已赋值
                     * 
                     */
                    bool FramesPerSecondHasBeenSet() const;

                    /**
                     * 获取视频时长
                     * @return Duration 视频时长
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置视频时长
                     * @param _duration 视频时长
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取视频帧数
                     * @return TotalFrames 视频帧数
                     * 
                     */
                    int64_t GetTotalFrames() const;

                    /**
                     * 设置视频帧数
                     * @param _totalFrames 视频帧数
                     * 
                     */
                    void SetTotalFrames(const int64_t& _totalFrames);

                    /**
                     * 判断参数 TotalFrames 是否已赋值
                     * @return TotalFrames 是否已赋值
                     * 
                     */
                    bool TotalFramesHasBeenSet() const;

                private:

                    /**
                     * 视频宽度
                     */
                    int64_t m_frameWidth;
                    bool m_frameWidthHasBeenSet;

                    /**
                     * 视频高度
                     */
                    int64_t m_frameHeight;
                    bool m_frameHeightHasBeenSet;

                    /**
                     * 视频帧速率(FPS)
                     */
                    int64_t m_framesPerSecond;
                    bool m_framesPerSecondHasBeenSet;

                    /**
                     * 视频时长
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 视频帧数
                     */
                    int64_t m_totalFrames;
                    bool m_totalFramesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_VIDEOBASICINFORMATION_H_
