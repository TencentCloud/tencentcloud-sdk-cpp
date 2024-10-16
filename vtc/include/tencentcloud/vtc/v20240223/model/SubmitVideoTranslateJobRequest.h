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

#ifndef TENCENTCLOUD_VTC_V20240223_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_
#define TENCENTCLOUD_VTC_V20240223_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vtc
    {
        namespace V20240223
        {
            namespace Model
            {
                /**
                * SubmitVideoTranslateJob请求参数结构体
                */
                class SubmitVideoTranslateJobRequest : public AbstractModel
                {
                public:
                    SubmitVideoTranslateJobRequest();
                    ~SubmitVideoTranslateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【10-300】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【540~1920】 之间。
                     * @return VideoUrl 视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【10-300】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【540~1920】 之间。
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【10-300】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【540~1920】 之间。
                     * @param _videoUrl 视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【10-300】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【540~1920】 之间。
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取源语言：zh(中文), en(英文)
                     * @return SrcLang 源语言：zh(中文), en(英文)
                     * 
                     */
                    std::string GetSrcLang() const;

                    /**
                     * 设置源语言：zh(中文), en(英文)
                     * @param _srcLang 源语言：zh(中文), en(英文)
                     * 
                     */
                    void SetSrcLang(const std::string& _srcLang);

                    /**
                     * 判断参数 SrcLang 是否已赋值
                     * @return SrcLang 是否已赋值
                     * 
                     */
                    bool SrcLangHasBeenSet() const;

                    /**
                     * 获取目标语种：
zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
示例值：ar(阿拉伯语)
                     * @return DstLang 目标语种：
zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
示例值：ar(阿拉伯语)
                     * 
                     */
                    std::string GetDstLang() const;

                    /**
                     * 设置目标语种：
zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
示例值：ar(阿拉伯语)
                     * @param _dstLang 目标语种：
zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
示例值：ar(阿拉伯语)
                     * 
                     */
                    void SetDstLang(const std::string& _dstLang);

                    /**
                     * 判断参数 DstLang 是否已赋值
                     * @return DstLang 是否已赋值
                     * 
                     */
                    bool DstLangHasBeenSet() const;

                    /**
                     * 获取当音频 URL 不为空时，默认以音频驱动视频任务口型。
格式要求：支持 mp3、m4a、acc、wav 格式。
时长要求：【10~300】秒
大小要求：不超过 100M。
示例值：http://xxx/audio.mp3
                     * @return AudioUrl 当音频 URL 不为空时，默认以音频驱动视频任务口型。
格式要求：支持 mp3、m4a、acc、wav 格式。
时长要求：【10~300】秒
大小要求：不超过 100M。
示例值：http://xxx/audio.mp3
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置当音频 URL 不为空时，默认以音频驱动视频任务口型。
格式要求：支持 mp3、m4a、acc、wav 格式。
时长要求：【10~300】秒
大小要求：不超过 100M。
示例值：http://xxx/audio.mp3
                     * @param _audioUrl 当音频 URL 不为空时，默认以音频驱动视频任务口型。
格式要求：支持 mp3、m4a、acc、wav 格式。
时长要求：【10~300】秒
大小要求：不超过 100M。
示例值：http://xxx/audio.mp3
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * @return RemoveVocal 是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * 
                     */
                    int64_t GetRemoveVocal() const;

                    /**
                     * 设置是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * @param _removeVocal 是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     * 
                     */
                    void SetRemoveVocal(const int64_t& _removeVocal);

                    /**
                     * 判断参数 RemoveVocal 是否已赋值
                     * @return RemoveVocal 是否已赋值
                     * 
                     */
                    bool RemoveVocalHasBeenSet() const;

                    /**
                     * 获取是否需要确认翻译结果0：不需要，1：需要
                     * @return Confirm 是否需要确认翻译结果0：不需要，1：需要
                     * 
                     */
                    int64_t GetConfirm() const;

                    /**
                     * 设置是否需要确认翻译结果0：不需要，1：需要
                     * @param _confirm 是否需要确认翻译结果0：不需要，1：需要
                     * 
                     */
                    void SetConfirm(const int64_t& _confirm);

                    /**
                     * 判断参数 Confirm 是否已赋值
                     * @return Confirm 是否已赋值
                     * 
                     */
                    bool ConfirmHasBeenSet() const;

                    /**
                     * 获取是否开启口型驱动，0：不开启，1：开启。默认开启。
                     * @return LipSync 是否开启口型驱动，0：不开启，1：开启。默认开启。
                     * 
                     */
                    int64_t GetLipSync() const;

                    /**
                     * 设置是否开启口型驱动，0：不开启，1：开启。默认开启。
                     * @param _lipSync 是否开启口型驱动，0：不开启，1：开启。默认开启。
                     * 
                     */
                    void SetLipSync(const int64_t& _lipSync);

                    /**
                     * 判断参数 LipSync 是否已赋值
                     * @return LipSync 是否已赋值
                     * 
                     */
                    bool LipSyncHasBeenSet() const;

                    /**
                     * 获取音色种别：一种音色种别对应一种不同区域的音色
1）目标语种为小语种(非zh,en)时，该项为必填
2）目标语种为zh,en时，该项为非必填，若填入，则对应填入的音色

具体音色包含请见“支持音色种别列表”
                     * @return VoiceType 音色种别：一种音色种别对应一种不同区域的音色
1）目标语种为小语种(非zh,en)时，该项为必填
2）目标语种为zh,en时，该项为非必填，若填入，则对应填入的音色

具体音色包含请见“支持音色种别列表”
                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置音色种别：一种音色种别对应一种不同区域的音色
1）目标语种为小语种(非zh,en)时，该项为必填
2）目标语种为zh,en时，该项为非必填，若填入，则对应填入的音色

具体音色包含请见“支持音色种别列表”
                     * @param _voiceType 音色种别：一种音色种别对应一种不同区域的音色
1）目标语种为小语种(非zh,en)时，该项为必填
2）目标语种为zh,en时，该项为非必填，若填入，则对应填入的音色

具体音色包含请见“支持音色种别列表”
                     * 
                     */
                    void SetVoiceType(const std::string& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                private:

                    /**
                     * 视频地址URL。
格式要求：支持 mp4、mov 。
时长要求：【10-300】秒。
fps 要求：【15-60】fps
分辨率要求：单边像素要求在 【540~1920】 之间。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 源语言：zh(中文), en(英文)
                     */
                    std::string m_srcLang;
                    bool m_srcLangHasBeenSet;

                    /**
                     * 目标语种：
zh(简体中文)、en(英语)、ar(阿拉伯语)、de(德语)、es(西班牙语)、fr(法语)、id(印尼语)、it(意大利语)、ja(日语)、ko(韩语)、ms(马来语)、pt(葡萄牙语)、ru(俄语)、th(泰语)、tr(土耳其语)、vi(越南语)
示例值：ar(阿拉伯语)
                     */
                    std::string m_dstLang;
                    bool m_dstLangHasBeenSet;

                    /**
                     * 当音频 URL 不为空时，默认以音频驱动视频任务口型。
格式要求：支持 mp3、m4a、acc、wav 格式。
时长要求：【10~300】秒
大小要求：不超过 100M。
示例值：http://xxx/audio.mp3
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * 是否需要去除VideoUrl或AudioUrl中背景音，取值范围：0-不需要，1-需要，默认0 。
                     */
                    int64_t m_removeVocal;
                    bool m_removeVocalHasBeenSet;

                    /**
                     * 是否需要确认翻译结果0：不需要，1：需要
                     */
                    int64_t m_confirm;
                    bool m_confirmHasBeenSet;

                    /**
                     * 是否开启口型驱动，0：不开启，1：开启。默认开启。
                     */
                    int64_t m_lipSync;
                    bool m_lipSyncHasBeenSet;

                    /**
                     * 音色种别：一种音色种别对应一种不同区域的音色
1）目标语种为小语种(非zh,en)时，该项为必填
2）目标语种为zh,en时，该项为非必填，若填入，则对应填入的音色

具体音色包含请见“支持音色种别列表”
                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VTC_V20240223_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_
