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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/VideoTemplateInfo.h>
#include <tencentcloud/teo/v20220901/model/AudioTemplateInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateJustInTimeTranscodeTemplate请求参数结构体
                */
                class CreateJustInTimeTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateJustInTimeTranscodeTemplateRequest();
                    ~CreateJustInTimeTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取即时转码模板名称，长度限制：64 个字符。
                     * @return TemplateName 即时转码模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置即时转码模板名称，长度限制：64 个字符。
                     * @param _templateName 即时转码模板名称，长度限制：64 个字符。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取模板描述信息，长度限制：256 个字符。默认为空。
                     * @return Comment 模板描述信息，长度限制：256 个字符。默认为空。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制：256 个字符。默认为空。
                     * @param _comment 模板描述信息，长度限制：256 个字符。默认为空。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取启用视频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * @return VideoStreamSwitch 启用视频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * 
                     */
                    std::string GetVideoStreamSwitch() const;

                    /**
                     * 设置启用视频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * @param _videoStreamSwitch 启用视频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * 
                     */
                    void SetVideoStreamSwitch(const std::string& _videoStreamSwitch);

                    /**
                     * 判断参数 VideoStreamSwitch 是否已赋值
                     * @return VideoStreamSwitch 是否已赋值
                     * 
                     */
                    bool VideoStreamSwitchHasBeenSet() const;

                    /**
                     * 获取启用音频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * @return AudioStreamSwitch 启用音频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * 
                     */
                    std::string GetAudioStreamSwitch() const;

                    /**
                     * 设置启用音频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * @param _audioStreamSwitch 启用音频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     * 
                     */
                    void SetAudioStreamSwitch(const std::string& _audioStreamSwitch);

                    /**
                     * 判断参数 AudioStreamSwitch 是否已赋值
                     * @return AudioStreamSwitch 是否已赋值
                     * 
                     */
                    bool AudioStreamSwitchHasBeenSet() const;

                    /**
                     * 获取视频流配置参数，当 VideoStreamSwitch 为 on，该字段必填。
                     * @return VideoTemplate 视频流配置参数，当 VideoStreamSwitch 为 on，该字段必填。
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置视频流配置参数，当 VideoStreamSwitch 为 on，该字段必填。
                     * @param _videoTemplate 视频流配置参数，当 VideoStreamSwitch 为 on，该字段必填。
                     * 
                     */
                    void SetVideoTemplate(const VideoTemplateInfo& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     * 
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取音频流配置参数，当 AudioStreamSwitch 为 on，该字段必填。
                     * @return AudioTemplate 音频流配置参数，当 AudioStreamSwitch 为 on，该字段必填。
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置音频流配置参数，当 AudioStreamSwitch 为 on，该字段必填。
                     * @param _audioTemplate 音频流配置参数，当 AudioStreamSwitch 为 on，该字段必填。
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 即时转码模板名称，长度限制：64 个字符。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。默认为空。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 启用视频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     */
                    std::string m_videoStreamSwitch;
                    bool m_videoStreamSwitchHasBeenSet;

                    /**
                     * 启用音频流开关，取值：
<li>on：开启；</li>
<li>off：关闭。</li>默认值：on。
                     */
                    std::string m_audioStreamSwitch;
                    bool m_audioStreamSwitchHasBeenSet;

                    /**
                     * 视频流配置参数，当 VideoStreamSwitch 为 on，该字段必填。
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * 音频流配置参数，当 AudioStreamSwitch 为 on，该字段必填。
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
