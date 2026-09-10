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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SubtitlePosition.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI配音结果信息
                */
                class AIDubbingTaskOutput : public AbstractModel
                {
                public:
                    AIDubbingTaskOutput();
                    ~AIDubbingTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>基于画面提取的字幕文件路径。</p>
                     * @return OriginSubtitlePath <p>基于画面提取的字幕文件路径。</p>
                     * 
                     */
                    std::string GetOriginSubtitlePath() const;

                    /**
                     * 设置<p>基于画面提取的字幕文件路径。</p>
                     * @param _originSubtitlePath <p>基于画面提取的字幕文件路径。</p>
                     * 
                     */
                    void SetOriginSubtitlePath(const std::string& _originSubtitlePath);

                    /**
                     * 判断参数 OriginSubtitlePath 是否已赋值
                     * @return OriginSubtitlePath 是否已赋值
                     * 
                     */
                    bool OriginSubtitlePathHasBeenSet() const;

                    /**
                     * 获取<p>基于画面提取的字幕翻译文件路径。</p>
                     * @return TranslateSubtitlePath <p>基于画面提取的字幕翻译文件路径。</p>
                     * 
                     */
                    std::string GetTranslateSubtitlePath() const;

                    /**
                     * 设置<p>基于画面提取的字幕翻译文件路径。</p>
                     * @param _translateSubtitlePath <p>基于画面提取的字幕翻译文件路径。</p>
                     * 
                     */
                    void SetTranslateSubtitlePath(const std::string& _translateSubtitlePath);

                    /**
                     * 判断参数 TranslateSubtitlePath 是否已赋值
                     * @return TranslateSubtitlePath 是否已赋值
                     * 
                     */
                    bool TranslateSubtitlePathHasBeenSet() const;

                    /**
                     * 获取<p>音色克隆后的视频文件地址</p>
                     * @return VoiceClonedVideo <p>音色克隆后的视频文件地址</p>
                     * 
                     */
                    std::string GetVoiceClonedVideo() const;

                    /**
                     * 设置<p>音色克隆后的视频文件地址</p>
                     * @param _voiceClonedVideo <p>音色克隆后的视频文件地址</p>
                     * 
                     */
                    void SetVoiceClonedVideo(const std::string& _voiceClonedVideo);

                    /**
                     * 判断参数 VoiceClonedVideo 是否已赋值
                     * @return VoiceClonedVideo 是否已赋值
                     * 
                     */
                    bool VoiceClonedVideoHasBeenSet() const;

                    /**
                     * 获取<p>音色克隆的标注文件地址</p>
                     * @return VoiceClonedMarkFile <p>音色克隆的标注文件地址</p>
                     * 
                     */
                    std::string GetVoiceClonedMarkFile() const;

                    /**
                     * 设置<p>音色克隆的标注文件地址</p>
                     * @param _voiceClonedMarkFile <p>音色克隆的标注文件地址</p>
                     * 
                     */
                    void SetVoiceClonedMarkFile(const std::string& _voiceClonedMarkFile);

                    /**
                     * 判断参数 VoiceClonedMarkFile 是否已赋值
                     * @return VoiceClonedMarkFile 是否已赋值
                     * 
                     */
                    bool VoiceClonedMarkFileHasBeenSet() const;

                    /**
                     * 获取<p>视频输出路径。</p>
                     * @return VideoPath <p>视频输出路径。</p>
                     * 
                     */
                    std::string GetVideoPath() const;

                    /**
                     * 设置<p>视频输出路径。</p>
                     * @param _videoPath <p>视频输出路径。</p>
                     * 
                     */
                    void SetVideoPath(const std::string& _videoPath);

                    /**
                     * 判断参数 VideoPath 是否已赋值
                     * @return VideoPath 是否已赋值
                     * 
                     */
                    bool VideoPathHasBeenSet() const;

                    /**
                     * 获取<p>基于画面提取的字幕文件FileId。</p>
                     * @return OriginSubtitleFileId <p>基于画面提取的字幕文件FileId。</p>
                     * 
                     */
                    std::string GetOriginSubtitleFileId() const;

                    /**
                     * 设置<p>基于画面提取的字幕文件FileId。</p>
                     * @param _originSubtitleFileId <p>基于画面提取的字幕文件FileId。</p>
                     * 
                     */
                    void SetOriginSubtitleFileId(const std::string& _originSubtitleFileId);

                    /**
                     * 判断参数 OriginSubtitleFileId 是否已赋值
                     * @return OriginSubtitleFileId 是否已赋值
                     * 
                     */
                    bool OriginSubtitleFileIdHasBeenSet() const;

                    /**
                     * 获取<p>基于画面提取的字幕翻译文件FileId    。</p>
                     * @return TranslateSubtitleFileId <p>基于画面提取的字幕翻译文件FileId    。</p>
                     * 
                     */
                    std::string GetTranslateSubtitleFileId() const;

                    /**
                     * 设置<p>基于画面提取的字幕翻译文件FileId    。</p>
                     * @param _translateSubtitleFileId <p>基于画面提取的字幕翻译文件FileId    。</p>
                     * 
                     */
                    void SetTranslateSubtitleFileId(const std::string& _translateSubtitleFileId);

                    /**
                     * 判断参数 TranslateSubtitleFileId 是否已赋值
                     * @return TranslateSubtitleFileId 是否已赋值
                     * 
                     */
                    bool TranslateSubtitleFileIdHasBeenSet() const;

                    /**
                     * 获取<p>标记文件路径。</p>
                     * @return SpeakerPath <p>标记文件路径。</p>
                     * 
                     */
                    std::string GetSpeakerPath() const;

                    /**
                     * 设置<p>标记文件路径。</p>
                     * @param _speakerPath <p>标记文件路径。</p>
                     * 
                     */
                    void SetSpeakerPath(const std::string& _speakerPath);

                    /**
                     * 判断参数 SpeakerPath 是否已赋值
                     * @return SpeakerPath 是否已赋值
                     * 
                     */
                    bool SpeakerPathHasBeenSet() const;

                    /**
                     * 获取<p>标记文件Fileid。</p>
                     * @return SpeakerFileId <p>标记文件Fileid。</p>
                     * 
                     */
                    std::string GetSpeakerFileId() const;

                    /**
                     * 设置<p>标记文件Fileid。</p>
                     * @param _speakerFileId <p>标记文件Fileid。</p>
                     * 
                     */
                    void SetSpeakerFileId(const std::string& _speakerFileId);

                    /**
                     * 判断参数 SpeakerFileId 是否已赋值
                     * @return SpeakerFileId 是否已赋值
                     * 
                     */
                    bool SpeakerFileIdHasBeenSet() const;

                    /**
                     * 获取<p>擦除视频输出FileId。</p>
                     * @return EraseVideoFileId <p>擦除视频输出FileId。</p>
                     * 
                     */
                    std::string GetEraseVideoFileId() const;

                    /**
                     * 设置<p>擦除视频输出FileId。</p>
                     * @param _eraseVideoFileId <p>擦除视频输出FileId。</p>
                     * 
                     */
                    void SetEraseVideoFileId(const std::string& _eraseVideoFileId);

                    /**
                     * 判断参数 EraseVideoFileId 是否已赋值
                     * @return EraseVideoFileId 是否已赋值
                     * 
                     */
                    bool EraseVideoFileIdHasBeenSet() const;

                    /**
                     * 获取<p>擦除视频输出路径。</p>
                     * @return EraseVideoPath <p>擦除视频输出路径。</p>
                     * 
                     */
                    std::string GetEraseVideoPath() const;

                    /**
                     * 设置<p>擦除视频输出路径。</p>
                     * @param _eraseVideoPath <p>擦除视频输出路径。</p>
                     * 
                     */
                    void SetEraseVideoPath(const std::string& _eraseVideoPath);

                    /**
                     * 判断参数 EraseVideoPath 是否已赋值
                     * @return EraseVideoPath 是否已赋值
                     * 
                     */
                    bool EraseVideoPathHasBeenSet() const;

                    /**
                     * 获取<p>译文配音音频文件路径。</p>
                     * @return DstAudioPath <p>译文配音音频文件路径。</p>
                     * 
                     */
                    std::string GetDstAudioPath() const;

                    /**
                     * 设置<p>译文配音音频文件路径。</p>
                     * @param _dstAudioPath <p>译文配音音频文件路径。</p>
                     * 
                     */
                    void SetDstAudioPath(const std::string& _dstAudioPath);

                    /**
                     * 判断参数 DstAudioPath 是否已赋值
                     * @return DstAudioPath 是否已赋值
                     * 
                     */
                    bool DstAudioPathHasBeenSet() const;

                    /**
                     * 获取<p>译文配音音频文件FileId。</p>
                     * @return DstAudioFileId <p>译文配音音频文件FileId。</p>
                     * 
                     */
                    std::string GetDstAudioFileId() const;

                    /**
                     * 设置<p>译文配音音频文件FileId。</p>
                     * @param _dstAudioFileId <p>译文配音音频文件FileId。</p>
                     * 
                     */
                    void SetDstAudioFileId(const std::string& _dstAudioFileId);

                    /**
                     * 判断参数 DstAudioFileId 是否已赋值
                     * @return DstAudioFileId 是否已赋值
                     * 
                     */
                    bool DstAudioFileIdHasBeenSet() const;

                    /**
                     * 获取<p>音色克隆编辑信息</p><p>用于音色克隆二次修改的编辑信息</p>
                     * @return DubbingEditInfoUrl <p>音色克隆编辑信息</p><p>用于音色克隆二次修改的编辑信息</p>
                     * 
                     */
                    std::string GetDubbingEditInfoUrl() const;

                    /**
                     * 设置<p>音色克隆编辑信息</p><p>用于音色克隆二次修改的编辑信息</p>
                     * @param _dubbingEditInfoUrl <p>音色克隆编辑信息</p><p>用于音色克隆二次修改的编辑信息</p>
                     * 
                     */
                    void SetDubbingEditInfoUrl(const std::string& _dubbingEditInfoUrl);

                    /**
                     * 判断参数 DubbingEditInfoUrl 是否已赋值
                     * @return DubbingEditInfoUrl 是否已赋值
                     * 
                     */
                    bool DubbingEditInfoUrlHasBeenSet() const;

                    /**
                     * 获取<p>擦除的字幕位置。<strong>注意</strong>：仅对字幕提取且开启返回字幕位置时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitlePos <p>擦除的字幕位置。<strong>注意</strong>：仅对字幕提取且开启返回字幕位置时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubtitlePosition GetSubtitlePos() const;

                    /**
                     * 设置<p>擦除的字幕位置。<strong>注意</strong>：仅对字幕提取且开启返回字幕位置时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitlePos <p>擦除的字幕位置。<strong>注意</strong>：仅对字幕提取且开启返回字幕位置时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitlePos(const SubtitlePosition& _subtitlePos);

                    /**
                     * 判断参数 SubtitlePos 是否已赋值
                     * @return SubtitlePos 是否已赋值
                     * 
                     */
                    bool SubtitlePosHasBeenSet() const;

                    /**
                     * 获取<p>AI配音任务输出文件的存储位置。</p>
                     * @return OutputStorage <p>AI配音任务输出文件的存储位置。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>AI配音任务输出文件的存储位置。</p>
                     * @param _outputStorage <p>AI配音任务输出文件的存储位置。</p>
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * <p>基于画面提取的字幕文件路径。</p>
                     */
                    std::string m_originSubtitlePath;
                    bool m_originSubtitlePathHasBeenSet;

                    /**
                     * <p>基于画面提取的字幕翻译文件路径。</p>
                     */
                    std::string m_translateSubtitlePath;
                    bool m_translateSubtitlePathHasBeenSet;

                    /**
                     * <p>音色克隆后的视频文件地址</p>
                     */
                    std::string m_voiceClonedVideo;
                    bool m_voiceClonedVideoHasBeenSet;

                    /**
                     * <p>音色克隆的标注文件地址</p>
                     */
                    std::string m_voiceClonedMarkFile;
                    bool m_voiceClonedMarkFileHasBeenSet;

                    /**
                     * <p>视频输出路径。</p>
                     */
                    std::string m_videoPath;
                    bool m_videoPathHasBeenSet;

                    /**
                     * <p>基于画面提取的字幕文件FileId。</p>
                     */
                    std::string m_originSubtitleFileId;
                    bool m_originSubtitleFileIdHasBeenSet;

                    /**
                     * <p>基于画面提取的字幕翻译文件FileId    。</p>
                     */
                    std::string m_translateSubtitleFileId;
                    bool m_translateSubtitleFileIdHasBeenSet;

                    /**
                     * <p>标记文件路径。</p>
                     */
                    std::string m_speakerPath;
                    bool m_speakerPathHasBeenSet;

                    /**
                     * <p>标记文件Fileid。</p>
                     */
                    std::string m_speakerFileId;
                    bool m_speakerFileIdHasBeenSet;

                    /**
                     * <p>擦除视频输出FileId。</p>
                     */
                    std::string m_eraseVideoFileId;
                    bool m_eraseVideoFileIdHasBeenSet;

                    /**
                     * <p>擦除视频输出路径。</p>
                     */
                    std::string m_eraseVideoPath;
                    bool m_eraseVideoPathHasBeenSet;

                    /**
                     * <p>译文配音音频文件路径。</p>
                     */
                    std::string m_dstAudioPath;
                    bool m_dstAudioPathHasBeenSet;

                    /**
                     * <p>译文配音音频文件FileId。</p>
                     */
                    std::string m_dstAudioFileId;
                    bool m_dstAudioFileIdHasBeenSet;

                    /**
                     * <p>音色克隆编辑信息</p><p>用于音色克隆二次修改的编辑信息</p>
                     */
                    std::string m_dubbingEditInfoUrl;
                    bool m_dubbingEditInfoUrlHasBeenSet;

                    /**
                     * <p>擦除的字幕位置。<strong>注意</strong>：仅对字幕提取且开启返回字幕位置时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubtitlePosition m_subtitlePos;
                    bool m_subtitlePosHasBeenSet;

                    /**
                     * <p>AI配音任务输出文件的存储位置。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKOUTPUT_H_
