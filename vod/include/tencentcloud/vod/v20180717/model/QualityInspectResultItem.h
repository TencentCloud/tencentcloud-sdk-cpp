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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测异常结果信息。
                */
                class QualityInspectResultItem : public AbstractModel
                {
                public:
                    QualityInspectResultItem();
                    ~QualityInspectResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>异常类型，取值范围：</p><li>Jitter：抖动；</li><li>Blur：模糊；</li><li>LowLighting：低光照；</li><li>HighLighting：过曝；</li><li>CrashScreen：花屏；</li><li>BlackWhiteEdge：黑白边；</li><li>SolidColorScreen：纯色屏；</li><li>Noise：噪点；</li><li>Mosaic：马赛克；</li><li>QRCode：二维码；</li><li>AppletCode：小程序码；</li><li>BarCode：条形码；</li><li>LowVoice：低音；</li><li>HighVoice：爆音；</li><li>NoVoice：静音；</li><li>LowEvaluation：无参考打分低于阈值。</li><li> LowColorfulness：色彩丰富度信息。</li><li> AudioVideoAsync：音画不同步。</li><li> AudioSubtitleAsync：音频与字幕不同步。</li><li> VideoAesthetic：视频美学评分低。</li><li> AudioDiscontinuity：音频不连续。</li><li> AudioVolume：音量信息。</li><li> AudioLoudnessJitter：音量变化剧烈。</li><li> BackgroundMusic：存在背景音乐。</li><li> AudioEvaluation：低音质。</li><li> AudioNoise：噪声。</li><li> AudioSpeechQuality：语音清晰度低。</li><li> AudioReverb：混响程度高。</li><li> AudioHighLoudness：响度失真。</li>
                     * @return Type <p>异常类型，取值范围：</p><li>Jitter：抖动；</li><li>Blur：模糊；</li><li>LowLighting：低光照；</li><li>HighLighting：过曝；</li><li>CrashScreen：花屏；</li><li>BlackWhiteEdge：黑白边；</li><li>SolidColorScreen：纯色屏；</li><li>Noise：噪点；</li><li>Mosaic：马赛克；</li><li>QRCode：二维码；</li><li>AppletCode：小程序码；</li><li>BarCode：条形码；</li><li>LowVoice：低音；</li><li>HighVoice：爆音；</li><li>NoVoice：静音；</li><li>LowEvaluation：无参考打分低于阈值。</li><li> LowColorfulness：色彩丰富度信息。</li><li> AudioVideoAsync：音画不同步。</li><li> AudioSubtitleAsync：音频与字幕不同步。</li><li> VideoAesthetic：视频美学评分低。</li><li> AudioDiscontinuity：音频不连续。</li><li> AudioVolume：音量信息。</li><li> AudioLoudnessJitter：音量变化剧烈。</li><li> BackgroundMusic：存在背景音乐。</li><li> AudioEvaluation：低音质。</li><li> AudioNoise：噪声。</li><li> AudioSpeechQuality：语音清晰度低。</li><li> AudioReverb：混响程度高。</li><li> AudioHighLoudness：响度失真。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>异常类型，取值范围：</p><li>Jitter：抖动；</li><li>Blur：模糊；</li><li>LowLighting：低光照；</li><li>HighLighting：过曝；</li><li>CrashScreen：花屏；</li><li>BlackWhiteEdge：黑白边；</li><li>SolidColorScreen：纯色屏；</li><li>Noise：噪点；</li><li>Mosaic：马赛克；</li><li>QRCode：二维码；</li><li>AppletCode：小程序码；</li><li>BarCode：条形码；</li><li>LowVoice：低音；</li><li>HighVoice：爆音；</li><li>NoVoice：静音；</li><li>LowEvaluation：无参考打分低于阈值。</li><li> LowColorfulness：色彩丰富度信息。</li><li> AudioVideoAsync：音画不同步。</li><li> AudioSubtitleAsync：音频与字幕不同步。</li><li> VideoAesthetic：视频美学评分低。</li><li> AudioDiscontinuity：音频不连续。</li><li> AudioVolume：音量信息。</li><li> AudioLoudnessJitter：音量变化剧烈。</li><li> BackgroundMusic：存在背景音乐。</li><li> AudioEvaluation：低音质。</li><li> AudioNoise：噪声。</li><li> AudioSpeechQuality：语音清晰度低。</li><li> AudioReverb：混响程度高。</li><li> AudioHighLoudness：响度失真。</li>
                     * @param _type <p>异常类型，取值范围：</p><li>Jitter：抖动；</li><li>Blur：模糊；</li><li>LowLighting：低光照；</li><li>HighLighting：过曝；</li><li>CrashScreen：花屏；</li><li>BlackWhiteEdge：黑白边；</li><li>SolidColorScreen：纯色屏；</li><li>Noise：噪点；</li><li>Mosaic：马赛克；</li><li>QRCode：二维码；</li><li>AppletCode：小程序码；</li><li>BarCode：条形码；</li><li>LowVoice：低音；</li><li>HighVoice：爆音；</li><li>NoVoice：静音；</li><li>LowEvaluation：无参考打分低于阈值。</li><li> LowColorfulness：色彩丰富度信息。</li><li> AudioVideoAsync：音画不同步。</li><li> AudioSubtitleAsync：音频与字幕不同步。</li><li> VideoAesthetic：视频美学评分低。</li><li> AudioDiscontinuity：音频不连续。</li><li> AudioVolume：音量信息。</li><li> AudioLoudnessJitter：音量变化剧烈。</li><li> BackgroundMusic：存在背景音乐。</li><li> AudioEvaluation：低音质。</li><li> AudioNoise：噪声。</li><li> AudioSpeechQuality：语音清晰度低。</li><li> AudioReverb：混响程度高。</li><li> AudioHighLoudness：响度失真。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>异常片段列表。<br><font color="red">注意：</font> 该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。</p>
                     * @return SegmentSet <p>异常片段列表。<br><font color="red">注意：</font> 该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。</p>
                     * 
                     */
                    std::vector<QualityInspectItem> GetSegmentSet() const;

                    /**
                     * 设置<p>异常片段列表。<br><font color="red">注意：</font> 该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。</p>
                     * @param _segmentSet <p>异常片段列表。<br><font color="red">注意：</font> 该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。</p>
                     * 
                     */
                    void SetSegmentSet(const std::vector<QualityInspectItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取<p>异常片段列表文件 URL。文件 内容 为  JSON，数据结构与 SegmentSet 字段一致。（文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。</p>
                     * @return SegmentSetFileUrl <p>异常片段列表文件 URL。文件 内容 为  JSON，数据结构与 SegmentSet 字段一致。（文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。</p>
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置<p>异常片段列表文件 URL。文件 内容 为  JSON，数据结构与 SegmentSet 字段一致。（文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。</p>
                     * @param _segmentSetFileUrl <p>异常片段列表文件 URL。文件 内容 为  JSON，数据结构与 SegmentSet 字段一致。（文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。</p>
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取<p>异常片段列表文件 URL 失效时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return SegmentSetFileUrlExpireTime <p>异常片段列表文件 URL 失效时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置<p>异常片段列表文件 URL 失效时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _segmentSetFileUrlExpireTime <p>异常片段列表文件 URL 失效时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>异常类型，取值范围：</p><li>Jitter：抖动；</li><li>Blur：模糊；</li><li>LowLighting：低光照；</li><li>HighLighting：过曝；</li><li>CrashScreen：花屏；</li><li>BlackWhiteEdge：黑白边；</li><li>SolidColorScreen：纯色屏；</li><li>Noise：噪点；</li><li>Mosaic：马赛克；</li><li>QRCode：二维码；</li><li>AppletCode：小程序码；</li><li>BarCode：条形码；</li><li>LowVoice：低音；</li><li>HighVoice：爆音；</li><li>NoVoice：静音；</li><li>LowEvaluation：无参考打分低于阈值。</li><li> LowColorfulness：色彩丰富度信息。</li><li> AudioVideoAsync：音画不同步。</li><li> AudioSubtitleAsync：音频与字幕不同步。</li><li> VideoAesthetic：视频美学评分低。</li><li> AudioDiscontinuity：音频不连续。</li><li> AudioVolume：音量信息。</li><li> AudioLoudnessJitter：音量变化剧烈。</li><li> BackgroundMusic：存在背景音乐。</li><li> AudioEvaluation：低音质。</li><li> AudioNoise：噪声。</li><li> AudioSpeechQuality：语音清晰度低。</li><li> AudioReverb：混响程度高。</li><li> AudioHighLoudness：响度失真。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>异常片段列表。<br><font color="red">注意：</font> 该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。</p>
                     */
                    std::vector<QualityInspectItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * <p>异常片段列表文件 URL。文件 内容 为  JSON，数据结构与 SegmentSet 字段一致。（文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。</p>
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * <p>异常片段列表文件 URL 失效时间，使用  <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_
