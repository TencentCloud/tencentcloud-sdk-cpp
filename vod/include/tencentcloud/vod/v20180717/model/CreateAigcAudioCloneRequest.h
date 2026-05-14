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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioCloneInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcAudioClone请求参数结构体
                */
                class CreateAigcAudioCloneRequest : public AbstractModel
                {
                public:
                    CreateAigcAudioCloneRequest();
                    ~CreateAigcAudioCloneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>原音频文件（需要确保可访问） 模型将以此参数中传入的音频音色为示例对音色进行复刻。  </p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应不低于 10 秒，最长应不超过 5 分钟； 注3：上传的音频文件大小需不超过20mb； 注4：音频内容免涉版权，否则会被下架或销毁。</p>
                     * @return AudioFileInfo <p>原音频文件（需要确保可访问） 模型将以此参数中传入的音频音色为示例对音色进行复刻。  </p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应不低于 10 秒，最长应不超过 5 分钟； 注3：上传的音频文件大小需不超过20mb； 注4：音频内容免涉版权，否则会被下架或销毁。</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetAudioFileInfo() const;

                    /**
                     * 设置<p>原音频文件（需要确保可访问） 模型将以此参数中传入的音频音色为示例对音色进行复刻。  </p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应不低于 10 秒，最长应不超过 5 分钟； 注3：上传的音频文件大小需不超过20mb； 注4：音频内容免涉版权，否则会被下架或销毁。</p>
                     * @param _audioFileInfo <p>原音频文件（需要确保可访问） 模型将以此参数中传入的音频音色为示例对音色进行复刻。  </p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应不低于 10 秒，最长应不超过 5 分钟； 注3：上传的音频文件大小需不超过20mb； 注4：音频内容免涉版权，否则会被下架或销毁。</p>
                     * 
                     */
                    void SetAudioFileInfo(const AigcAudioCloneInputFileInfo& _audioFileInfo);

                    /**
                     * 判断参数 AudioFileInfo 是否已赋值
                     * @return AudioFileInfo 是否已赋值
                     * 
                     */
                    bool AudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>自定义的声音ID，示例：&quot;vidu01&quot;。</p><p>入参限制：</p><ul><li>自定义的 voice_id 长度范围[8,256];</li><li>首字符必须为英文字母;</li><li>允许数字、字母、横线、下划线;</li><li>末位字符不可为 -、_</li><li>voice_id 不可与已有 id 重复，否则会报错.</li></ul>
                     * @return VoiceId <p>自定义的声音ID，示例：&quot;vidu01&quot;。</p><p>入参限制：</p><ul><li>自定义的 voice_id 长度范围[8,256];</li><li>首字符必须为英文字母;</li><li>允许数字、字母、横线、下划线;</li><li>末位字符不可为 -、_</li><li>voice_id 不可与已有 id 重复，否则会报错.</li></ul>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>自定义的声音ID，示例：&quot;vidu01&quot;。</p><p>入参限制：</p><ul><li>自定义的 voice_id 长度范围[8,256];</li><li>首字符必须为英文字母;</li><li>允许数字、字母、横线、下划线;</li><li>末位字符不可为 -、_</li><li>voice_id 不可与已有 id 重复，否则会报错.</li></ul>
                     * @param _voiceId <p>自定义的声音ID，示例：&quot;vidu01&quot;。</p><p>入参限制：</p><ul><li>自定义的 voice_id 长度范围[8,256];</li><li>首字符必须为英文字母;</li><li>允许数字、字母、横线、下划线;</li><li>末位字符不可为 -、_</li><li>voice_id 不可与已有 id 重复，否则会报错.</li></ul>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>复刻试听参数。</p><p>参数格式：限制 1000 字符以内，模型将使用复刻后的音色朗读本段文本内容，并返回试听音频链接。 注：试听将根据字符数正常收取语音合成费用。</p>
                     * @return Text <p>复刻试听参数。</p><p>参数格式：限制 1000 字符以内，模型将使用复刻后的音色朗读本段文本内容，并返回试听音频链接。 注：试听将根据字符数正常收取语音合成费用。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>复刻试听参数。</p><p>参数格式：限制 1000 字符以内，模型将使用复刻后的音色朗读本段文本内容，并返回试听音频链接。 注：试听将根据字符数正常收取语音合成费用。</p>
                     * @param _text <p>复刻试听参数。</p><p>参数格式：限制 1000 字符以内，模型将使用复刻后的音色朗读本段文本内容，并返回试听音频链接。 注：试听将根据字符数正常收取语音合成费用。</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>音色复刻示例音频。提供本参数将有助于增强语音合成的音色相似度和稳定性，若使用本参数，需同时上传一小段示例音频。</p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应小于 8 秒； 注3：上传的音频文件大小需不超过20mb。</p>
                     * @return PromptAudioFileInfo <p>音色复刻示例音频。提供本参数将有助于增强语音合成的音色相似度和稳定性，若使用本参数，需同时上传一小段示例音频。</p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应小于 8 秒； 注3：上传的音频文件大小需不超过20mb。</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetPromptAudioFileInfo() const;

                    /**
                     * 设置<p>音色复刻示例音频。提供本参数将有助于增强语音合成的音色相似度和稳定性，若使用本参数，需同时上传一小段示例音频。</p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应小于 8 秒； 注3：上传的音频文件大小需不超过20mb。</p>
                     * @param _promptAudioFileInfo <p>音色复刻示例音频。提供本参数将有助于增强语音合成的音色相似度和稳定性，若使用本参数，需同时上传一小段示例音频。</p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应小于 8 秒； 注3：上传的音频文件大小需不超过20mb。</p>
                     * 
                     */
                    void SetPromptAudioFileInfo(const AigcAudioCloneInputFileInfo& _promptAudioFileInfo);

                    /**
                     * 判断参数 PromptAudioFileInfo 是否已赋值
                     * @return PromptAudioFileInfo 是否已赋值
                     * 
                     */
                    bool PromptAudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>示例音频对应的文本内容 需确保和音频内容一致，句末需有标点符号做结尾。</p>
                     * @return PromptText <p>示例音频对应的文本内容 需确保和音频内容一致，句末需有标点符号做结尾。</p>
                     * 
                     */
                    std::string GetPromptText() const;

                    /**
                     * 设置<p>示例音频对应的文本内容 需确保和音频内容一致，句末需有标点符号做结尾。</p>
                     * @param _promptText <p>示例音频对应的文本内容 需确保和音频内容一致，句末需有标点符号做结尾。</p>
                     * 
                     */
                    void SetPromptText(const std::string& _promptText);

                    /**
                     * 判断参数 PromptText 是否已赋值
                     * @return PromptText 是否已赋值
                     * 
                     */
                    bool PromptTextHasBeenSet() const;

                    /**
                     * 获取<p>透传参数。  入参限制：不做任何处理，仅数据传输 注：最多 1048576个字符</p>
                     * @return Payload <p>透传参数。  入参限制：不做任何处理，仅数据传输 注：最多 1048576个字符</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>透传参数。  入参限制：不做任何处理，仅数据传输 注：最多 1048576个字符</p>
                     * @param _payload <p>透传参数。  入参限制：不做任何处理，仅数据传输 注：最多 1048576个字符</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @return TasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @param _tasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，特殊用途时使用。</p>
                     * @return ExtInfo <p>保留字段，特殊用途时使用。</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>保留字段，特殊用途时使用。</p>
                     * @param _extInfo <p>保留字段，特殊用途时使用。</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>原音频文件（需要确保可访问） 模型将以此参数中传入的音频音色为示例对音色进行复刻。  </p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应不低于 10 秒，最长应不超过 5 分钟； 注3：上传的音频文件大小需不超过20mb； 注4：音频内容免涉版权，否则会被下架或销毁。</p>
                     */
                    AigcAudioCloneInputFileInfo m_audioFileInfo;
                    bool m_audioFileInfoHasBeenSet;

                    /**
                     * <p>自定义的声音ID，示例：&quot;vidu01&quot;。</p><p>入参限制：</p><ul><li>自定义的 voice_id 长度范围[8,256];</li><li>首字符必须为英文字母;</li><li>允许数字、字母、横线、下划线;</li><li>末位字符不可为 -、_</li><li>voice_id 不可与已有 id 重复，否则会报错.</li></ul>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>复刻试听参数。</p><p>参数格式：限制 1000 字符以内，模型将使用复刻后的音色朗读本段文本内容，并返回试听音频链接。 注：试听将根据字符数正常收取语音合成费用。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>音色复刻示例音频。提供本参数将有助于增强语音合成的音色相似度和稳定性，若使用本参数，需同时上传一小段示例音频。</p><p>入参限制：注1：音频仅支持格式：mp3、m4a、wav； 注2：上传的音频文件的时长最少应小于 8 秒； 注3：上传的音频文件大小需不超过20mb。</p>
                     */
                    AigcAudioCloneInputFileInfo m_promptAudioFileInfo;
                    bool m_promptAudioFileInfoHasBeenSet;

                    /**
                     * <p>示例音频对应的文本内容 需确保和音频内容一致，句末需有标点符号做结尾。</p>
                     */
                    std::string m_promptText;
                    bool m_promptTextHasBeenSet;

                    /**
                     * <p>透传参数。  入参限制：不做任何处理，仅数据传输 注：最多 1048576个字符</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEREQUEST_H_
