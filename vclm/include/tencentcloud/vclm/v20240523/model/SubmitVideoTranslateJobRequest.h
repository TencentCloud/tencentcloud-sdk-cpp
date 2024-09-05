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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
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
                     * @return VideoUrl 视频地址URL。
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频地址URL。
                     * @param _videoUrl 视频地址URL。
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
                     * 获取源语言：zh, en
                     * @return SrcLang 源语言：zh, en
                     * 
                     */
                    std::string GetSrcLang() const;

                    /**
                     * 设置源语言：zh, en
                     * @param _srcLang 源语言：zh, en
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
                     * 获取目标语言：zh, en	
                     * @return DstLang 目标语言：zh, en	
                     * 
                     */
                    std::string GetDstLang() const;

                    /**
                     * 设置目标语言：zh, en	
                     * @param _dstLang 目标语言：zh, en	
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
                     * 获取当音频 URL 不为空时，默认以音频驱动视频任务口型
                     * @return AudioUrl 当音频 URL 不为空时，默认以音频驱动视频任务口型
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置当音频 URL 不为空时，默认以音频驱动视频任务口型
                     * @param _audioUrl 当音频 URL 不为空时，默认以音频驱动视频任务口型
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
                     * 获取音色 Id
                     * @return VoiceType 音色 Id
                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置音色 Id
                     * @param _voiceType 音色 Id
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
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 源语言：zh, en
                     */
                    std::string m_srcLang;
                    bool m_srcLangHasBeenSet;

                    /**
                     * 目标语言：zh, en	
                     */
                    std::string m_dstLang;
                    bool m_dstLangHasBeenSet;

                    /**
                     * 当音频 URL 不为空时，默认以音频驱动视频任务口型
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

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
                     * 音色 Id
                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOTRANSLATEJOBREQUEST_H_
