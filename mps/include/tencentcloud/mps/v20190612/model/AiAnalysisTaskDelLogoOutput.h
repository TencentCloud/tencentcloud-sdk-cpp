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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/SubtitlePosition.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能擦除结果信息
                */
                class AiAnalysisTaskDelLogoOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskDelLogoOutput();
                    ~AiAnalysisTaskDelLogoOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取擦除后文件的路径。
                     * @return Path 擦除后文件的路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置擦除后文件的路径。
                     * @param _path 擦除后文件的路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取擦除后文件的存储位置。
                     * @return OutputStorage 擦除后文件的存储位置。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置擦除后文件的存储位置。
                     * @param _outputStorage 擦除后文件的存储位置。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取基于画面提取的字幕文件路径。
                     * @return OriginSubtitlePath 基于画面提取的字幕文件路径。
                     * 
                     */
                    std::string GetOriginSubtitlePath() const;

                    /**
                     * 设置基于画面提取的字幕文件路径。
                     * @param _originSubtitlePath 基于画面提取的字幕文件路径。
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
                     * 获取基于画面提取的字幕翻译文件路径。
                     * @return TranslateSubtitlePath 基于画面提取的字幕翻译文件路径。
                     * 
                     */
                    std::string GetTranslateSubtitlePath() const;

                    /**
                     * 设置基于画面提取的字幕翻译文件路径。
                     * @param _translateSubtitlePath 基于画面提取的字幕翻译文件路径。
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
                     * 获取擦除的字幕位置。**注意**：仅对字幕提取且开启返回字幕位置时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitlePos 擦除的字幕位置。**注意**：仅对字幕提取且开启返回字幕位置时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubtitlePosition GetSubtitlePos() const;

                    /**
                     * 设置擦除的字幕位置。**注意**：仅对字幕提取且开启返回字幕位置时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitlePos 擦除的字幕位置。**注意**：仅对字幕提取且开启返回字幕位置时有效。
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
                     * 获取音色克隆后的视频文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceClonedVideo 音色克隆后的视频文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoiceClonedVideo() const;

                    /**
                     * 设置音色克隆后的视频文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceClonedVideo 音色克隆后的视频文件地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取音色克隆的标注文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceClonedMarkFile 音色克隆的标注文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoiceClonedMarkFile() const;

                    /**
                     * 设置音色克隆的标注文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceClonedMarkFile 音色克隆的标注文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoiceClonedMarkFile(const std::string& _voiceClonedMarkFile);

                    /**
                     * 判断参数 VoiceClonedMarkFile 是否已赋值
                     * @return VoiceClonedMarkFile 是否已赋值
                     * 
                     */
                    bool VoiceClonedMarkFileHasBeenSet() const;

                private:

                    /**
                     * 擦除后文件的路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 擦除后文件的存储位置。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 基于画面提取的字幕文件路径。
                     */
                    std::string m_originSubtitlePath;
                    bool m_originSubtitlePathHasBeenSet;

                    /**
                     * 基于画面提取的字幕翻译文件路径。
                     */
                    std::string m_translateSubtitlePath;
                    bool m_translateSubtitlePathHasBeenSet;

                    /**
                     * 擦除的字幕位置。**注意**：仅对字幕提取且开启返回字幕位置时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubtitlePosition m_subtitlePos;
                    bool m_subtitlePosHasBeenSet;

                    /**
                     * 音色克隆后的视频文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voiceClonedVideo;
                    bool m_voiceClonedVideoHasBeenSet;

                    /**
                     * 音色克隆的标注文件地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voiceClonedMarkFile;
                    bool m_voiceClonedMarkFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_
