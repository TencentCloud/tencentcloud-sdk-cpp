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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 即时转码模板详情。
                */
                class JustInTimeTranscodeTemplate : public AbstractModel
                {
                public:
                    JustInTimeTranscodeTemplate();
                    ~JustInTimeTranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取即时转码模板唯一标识。
                     * @return TemplateId 即时转码模板唯一标识。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置即时转码模板唯一标识。
                     * @param _templateId 即时转码模板唯一标识。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取转码模板名称。
                     * @return TemplateName 转码模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置转码模板名称。
                     * @param _templateName 转码模板名称。
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
                     * 获取模板描述信息。
                     * @return Comment 模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息。
                     * @param _comment 模板描述信息。
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
                     * 获取模板类型，取值：<li>preset：系统预置模板；</li><li>custom：用户自定义模板。</li>
                     * @return Type 模板类型，取值：<li>preset：系统预置模板；</li><li>custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值：<li>preset：系统预置模板；</li><li>custom：用户自定义模板。</li>
                     * @param _type 模板类型，取值：<li>preset：系统预置模板；</li><li>custom：用户自定义模板。</li>
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
                     * 获取启用视频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     * @return VideoStreamSwitch 启用视频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetVideoStreamSwitch() const;

                    /**
                     * 设置启用视频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _videoStreamSwitch 启用视频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
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
                     * 获取启用音频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     * @return AudioStreamSwitch 启用音频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetAudioStreamSwitch() const;

                    /**
                     * 设置启用音频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _audioStreamSwitch 启用音频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
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
                     * 获取视频流配置参数，仅当 VideoStreamSwitch 为 on，该字段有效。
                     * @return VideoTemplate 视频流配置参数，仅当 VideoStreamSwitch 为 on，该字段有效。
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置视频流配置参数，仅当 VideoStreamSwitch 为 on，该字段有效。
                     * @param _videoTemplate 视频流配置参数，仅当 VideoStreamSwitch 为 on，该字段有效。
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
                     * 获取音频流配置参数，仅当 AudioStreamSwitch 为 on，该字段有效。
                     * @return AudioTemplate 音频流配置参数，仅当 AudioStreamSwitch 为 on，该字段有效。
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置音频流配置参数，仅当 AudioStreamSwitch 为 on，该字段有效。
                     * @param _audioTemplate 音频流配置参数，仅当 AudioStreamSwitch 为 on，该字段有效。
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 即时转码模板唯一标识。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 转码模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 模板类型，取值：<li>preset：系统预置模板；</li><li>custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 启用视频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_videoStreamSwitch;
                    bool m_videoStreamSwitchHasBeenSet;

                    /**
                     * 启用音频流开关，取值：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_audioStreamSwitch;
                    bool m_audioStreamSwitchHasBeenSet;

                    /**
                     * 视频流配置参数，仅当 VideoStreamSwitch 为 on，该字段有效。
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * 音频流配置参数，仅当 AudioStreamSwitch 为 on，该字段有效。
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
