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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_MEDIAMODERATIONCONFIG_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_MEDIAMODERATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/FileOutput.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * 媒体审核配置
                */
                class MediaModerationConfig : public AbstractModel
                {
                public:
                    MediaModerationConfig();
                    ~MediaModerationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频截帧频率。默认一分钟
                     * @return AudioFrequency 音频截帧频率。默认一分钟
                     * 
                     */
                    int64_t GetAudioFrequency() const;

                    /**
                     * 设置音频截帧频率。默认一分钟
                     * @param _audioFrequency 音频截帧频率。默认一分钟
                     * 
                     */
                    void SetAudioFrequency(const int64_t& _audioFrequency);

                    /**
                     * 判断参数 AudioFrequency 是否已赋值
                     * @return AudioFrequency 是否已赋值
                     * 
                     */
                    bool AudioFrequencyHasBeenSet() const;

                    /**
                     * 获取图片取帧频率, 单位（秒/帧），默认 5， 可选 1 ～ 300
                     * @return ImageFrequency 图片取帧频率, 单位（秒/帧），默认 5， 可选 1 ～ 300
                     * 
                     */
                    int64_t GetImageFrequency() const;

                    /**
                     * 设置图片取帧频率, 单位（秒/帧），默认 5， 可选 1 ～ 300
                     * @param _imageFrequency 图片取帧频率, 单位（秒/帧），默认 5， 可选 1 ～ 300
                     * 
                     */
                    void SetImageFrequency(const int64_t& _imageFrequency);

                    /**
                     * 判断参数 ImageFrequency 是否已赋值
                     * @return ImageFrequency 是否已赋值
                     * 
                     */
                    bool ImageFrequencyHasBeenSet() const;

                    /**
                     * 获取异步回调地址。
                     * @return CallbackUrl 异步回调地址。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置异步回调地址。
                     * @param _callbackUrl 异步回调地址。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取临时文件存储位置
                     * @return SegmentOutput 临时文件存储位置
                     * 
                     */
                    FileOutput GetSegmentOutput() const;

                    /**
                     * 设置临时文件存储位置
                     * @param _segmentOutput 临时文件存储位置
                     * 
                     */
                    void SetSegmentOutput(const FileOutput& _segmentOutput);

                    /**
                     * 判断参数 SegmentOutput 是否已赋值
                     * @return SegmentOutput 是否已赋值
                     * 
                     */
                    bool SegmentOutputHasBeenSet() const;

                    /**
                     * 获取是否使用OCR，默认为true
                     * @return UseOCR 是否使用OCR，默认为true
                     * 
                     */
                    bool GetUseOCR() const;

                    /**
                     * 设置是否使用OCR，默认为true
                     * @param _useOCR 是否使用OCR，默认为true
                     * 
                     */
                    void SetUseOCR(const bool& _useOCR);

                    /**
                     * 判断参数 UseOCR 是否已赋值
                     * @return UseOCR 是否已赋值
                     * 
                     */
                    bool UseOCRHasBeenSet() const;

                    /**
                     * 获取是否使用音频。（音频场景下，该值永远为true）
                     * @return UseAudio 是否使用音频。（音频场景下，该值永远为true）
                     * 
                     */
                    bool GetUseAudio() const;

                    /**
                     * 设置是否使用音频。（音频场景下，该值永远为true）
                     * @param _useAudio 是否使用音频。（音频场景下，该值永远为true）
                     * 
                     */
                    void SetUseAudio(const bool& _useAudio);

                    /**
                     * 判断参数 UseAudio 是否已赋值
                     * @return UseAudio 是否已赋值
                     * 
                     */
                    bool UseAudioHasBeenSet() const;

                private:

                    /**
                     * 音频截帧频率。默认一分钟
                     */
                    int64_t m_audioFrequency;
                    bool m_audioFrequencyHasBeenSet;

                    /**
                     * 图片取帧频率, 单位（秒/帧），默认 5， 可选 1 ～ 300
                     */
                    int64_t m_imageFrequency;
                    bool m_imageFrequencyHasBeenSet;

                    /**
                     * 异步回调地址。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 临时文件存储位置
                     */
                    FileOutput m_segmentOutput;
                    bool m_segmentOutputHasBeenSet;

                    /**
                     * 是否使用OCR，默认为true
                     */
                    bool m_useOCR;
                    bool m_useOCRHasBeenSet;

                    /**
                     * 是否使用音频。（音频场景下，该值永远为true）
                     */
                    bool m_useAudio;
                    bool m_useAudioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_MEDIAMODERATIONCONFIG_H_
