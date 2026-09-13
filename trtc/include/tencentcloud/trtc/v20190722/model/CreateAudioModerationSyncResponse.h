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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEAUDIOMODERATIONSYNCRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEAUDIOMODERATIONSYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/ModerationCheckDetail.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateAudioModerationSync返回参数结构体
                */
                class CreateAudioModerationSyncResponse : public AbstractModel
                {
                public:
                    CreateAudioModerationSyncResponse();
                    ~CreateAudioModerationSyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回传入的DataId</p>
                     * @return DataId <p>返回传入的DataId</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取<p>审核返回的任务id</p>
                     * @return TaskId <p>审核返回的任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>文件名</p>
                     * @return FileName <p>文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>1：语音。 2：图片。</p>
                     * @return MediaType <p>1：语音。 2：图片。</p>
                     * 
                     */
                    int64_t GetMediaType() const;

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取<p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     * @return Suggest <p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     * 
                     */
                    int64_t GetSuggest() const;

                    /**
                     * 判断参数 Suggest 是否已赋值
                     * @return Suggest 是否已赋值
                     * 
                     */
                    bool SuggestHasBeenSet() const;

                    /**
                     * 获取<p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
                     * @return Rate <p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
                     * 
                     */
                    int64_t GetRate() const;

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取<p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
                     * @return Label <p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>子标签</p>
                     * @return SubLabel <p>子标签</p>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取<p>音频链接地址</p>
                     * @return Audio <p>音频链接地址</p>
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取<p>审核识别音频文本</p>
                     * @return AudioText <p>审核识别音频文本</p>
                     * 
                     */
                    std::string GetAudioText() const;

                    /**
                     * 判断参数 AudioText 是否已赋值
                     * @return AudioText 是否已赋值
                     * 
                     */
                    bool AudioTextHasBeenSet() const;

                    /**
                     * 获取<p>音频时长，单位 ms</p>
                     * @return Duration <p>音频时长，单位 ms</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>审核明细</p>
                     * @return CheckDetail <p>审核明细</p>
                     * 
                     */
                    std::vector<ModerationCheckDetail> GetCheckDetail() const;

                    /**
                     * 判断参数 CheckDetail 是否已赋值
                     * @return CheckDetail 是否已赋值
                     * 
                     */
                    bool CheckDetailHasBeenSet() const;

                private:

                    /**
                     * <p>返回传入的DataId</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>审核返回的任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>1：语音。 2：图片。</p>
                     */
                    int64_t m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     */
                    int64_t m_suggest;
                    bool m_suggestHasBeenSet;

                    /**
                     * <p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
                     */
                    int64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * <p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>子标签</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>音频链接地址</p>
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * <p>审核识别音频文本</p>
                     */
                    std::string m_audioText;
                    bool m_audioTextHasBeenSet;

                    /**
                     * <p>音频时长，单位 ms</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>审核明细</p>
                     */
                    std::vector<ModerationCheckDetail> m_checkDetail;
                    bool m_checkDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEAUDIOMODERATIONSYNCRESPONSE_H_
