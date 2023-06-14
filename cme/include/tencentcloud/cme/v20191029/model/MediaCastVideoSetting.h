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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTVIDEOSETTING_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTVIDEOSETTING_H_

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
                * 点播转直播视频配置
                */
                class MediaCastVideoSetting : public AbstractModel
                {
                public:
                    MediaCastVideoSetting();
                    ~MediaCastVideoSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频宽度，单位：px，默认值为1280。
                     * @return Width 视频宽度，单位：px，默认值为1280。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频宽度，单位：px，默认值为1280。
                     * @param _width 视频宽度，单位：px，默认值为1280。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取视频高度，单位：px，默认值为720。支持的视频分辨率最大为1920*1080。
                     * @return Height 视频高度，单位：px，默认值为720。支持的视频分辨率最大为1920*1080。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频高度，单位：px，默认值为720。支持的视频分辨率最大为1920*1080。
                     * @param _height 视频高度，单位：px，默认值为720。支持的视频分辨率最大为1920*1080。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取视频码率，单位：kbps，默认值为2500。最大值为10000 kbps。
                     * @return Bitrate 视频码率，单位：kbps，默认值为2500。最大值为10000 kbps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频码率，单位：kbps，默认值为2500。最大值为10000 kbps。
                     * @param _bitrate 视频码率，单位：kbps，默认值为2500。最大值为10000 kbps。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取视频帧率，单位：Hz，默认值为25。最大值为60。
                     * @return FrameRate 视频帧率，单位：Hz，默认值为25。最大值为60。
                     * 
                     */
                    double GetFrameRate() const;

                    /**
                     * 设置视频帧率，单位：Hz，默认值为25。最大值为60。
                     * @param _frameRate 视频帧率，单位：Hz，默认值为25。最大值为60。
                     * 
                     */
                    void SetFrameRate(const double& _frameRate);

                    /**
                     * 判断参数 FrameRate 是否已赋值
                     * @return FrameRate 是否已赋值
                     * 
                     */
                    bool FrameRateHasBeenSet() const;

                private:

                    /**
                     * 视频宽度，单位：px，默认值为1280。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频高度，单位：px，默认值为720。支持的视频分辨率最大为1920*1080。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频码率，单位：kbps，默认值为2500。最大值为10000 kbps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频帧率，单位：Hz，默认值为25。最大值为60。
                     */
                    double m_frameRate;
                    bool m_frameRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTVIDEOSETTING_H_
