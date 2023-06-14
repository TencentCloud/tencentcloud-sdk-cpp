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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_SHOWINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_SHOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/AudioInfo.h>
#include <tencentcloud/ivld/v20210903/model/TextInfo.h>
#include <tencentcloud/ivld/v20210903/model/ClassifiedPersonInfo.h>
#include <tencentcloud/ivld/v20210903/model/MultiLevelTag.h>
#include <tencentcloud/ivld/v20210903/model/UnknownPerson.h>
#include <tencentcloud/ivld/v20210903/model/MultiLevelPersonInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 视频结构化结果
                */
                class ShowInfo : public AbstractModel
                {
                public:
                    ShowInfo();
                    ~ShowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节目日期(只在新闻有效)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 节目日期(只在新闻有效)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置节目日期(只在新闻有效)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date 节目日期(只在新闻有效)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取台标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Logo 台标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置台标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logo 台标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取节目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Column 节目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumn() const;

                    /**
                     * 设置节目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _column 节目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumn(const std::string& _column);

                    /**
                     * 判断参数 Column 是否已赋值
                     * @return Column 是否已赋值
                     * 
                     */
                    bool ColumnHasBeenSet() const;

                    /**
                     * 获取来源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 来源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 来源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取节目封面
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverImageURL 节目封面
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCoverImageURL() const;

                    /**
                     * 设置节目封面
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverImageURL 节目封面
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverImageURL(const std::string& _coverImageURL);

                    /**
                     * 判断参数 CoverImageURL 是否已赋值
                     * @return CoverImageURL 是否已赋值
                     * 
                     */
                    bool CoverImageURLHasBeenSet() const;

                    /**
                     * 获取节目内容概要列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SummarySet 节目内容概要列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSummarySet() const;

                    /**
                     * 设置节目内容概要列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _summarySet 节目内容概要列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSummarySet(const std::vector<std::string>& _summarySet);

                    /**
                     * 判断参数 SummarySet 是否已赋值
                     * @return SummarySet 是否已赋值
                     * 
                     */
                    bool SummarySetHasBeenSet() const;

                    /**
                     * 获取节目片段标题列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TitleSet 节目片段标题列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTitleSet() const;

                    /**
                     * 设置节目片段标题列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _titleSet 节目片段标题列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitleSet(const std::vector<std::string>& _titleSet);

                    /**
                     * 判断参数 TitleSet 是否已赋值
                     * @return TitleSet 是否已赋值
                     * 
                     */
                    bool TitleSetHasBeenSet() const;

                    /**
                     * 获取音频识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioInfoSet 音频识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AudioInfo> GetAudioInfoSet() const;

                    /**
                     * 设置音频识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioInfoSet 音频识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioInfoSet(const std::vector<AudioInfo>& _audioInfoSet);

                    /**
                     * 判断参数 AudioInfoSet 是否已赋值
                     * @return AudioInfoSet 是否已赋值
                     * 
                     */
                    bool AudioInfoSetHasBeenSet() const;

                    /**
                     * 获取可视文字识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextInfoSet 可视文字识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TextInfo> GetTextInfoSet() const;

                    /**
                     * 设置可视文字识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textInfoSet 可视文字识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextInfoSet(const std::vector<TextInfo>& _textInfoSet);

                    /**
                     * 判断参数 TextInfoSet 是否已赋值
                     * @return TextInfoSet 是否已赋值
                     * 
                     */
                    bool TextInfoSetHasBeenSet() const;

                    /**
                     * 获取已分类人物信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassifiedPersonInfoSet 已分类人物信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClassifiedPersonInfo> GetClassifiedPersonInfoSet() const;

                    /**
                     * 设置已分类人物信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classifiedPersonInfoSet 已分类人物信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassifiedPersonInfoSet(const std::vector<ClassifiedPersonInfo>& _classifiedPersonInfoSet);

                    /**
                     * 判断参数 ClassifiedPersonInfoSet 是否已赋值
                     * @return ClassifiedPersonInfoSet 是否已赋值
                     * 
                     */
                    bool ClassifiedPersonInfoSetHasBeenSet() const;

                    /**
                     * 获取文本标签列表，包含标签内容和出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextTagSet 文本标签列表，包含标签内容和出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiLevelTag GetTextTagSet() const;

                    /**
                     * 设置文本标签列表，包含标签内容和出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textTagSet 文本标签列表，包含标签内容和出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextTagSet(const MultiLevelTag& _textTagSet);

                    /**
                     * 判断参数 TextTagSet 是否已赋值
                     * @return TextTagSet 是否已赋值
                     * 
                     */
                    bool TextTagSetHasBeenSet() const;

                    /**
                     * 获取帧标签列表，包括人物信息，场景信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameTagSet 帧标签列表，包括人物信息，场景信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiLevelTag GetFrameTagSet() const;

                    /**
                     * 设置帧标签列表，包括人物信息，场景信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameTagSet 帧标签列表，包括人物信息，场景信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameTagSet(const MultiLevelTag& _frameTagSet);

                    /**
                     * 判断参数 FrameTagSet 是否已赋值
                     * @return FrameTagSet 是否已赋值
                     * 
                     */
                    bool FrameTagSetHasBeenSet() const;

                    /**
                     * 获取视频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebMediaURL 视频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebMediaURL() const;

                    /**
                     * 设置视频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webMediaURL 视频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebMediaURL(const std::string& _webMediaURL);

                    /**
                     * 判断参数 WebMediaURL 是否已赋值
                     * @return WebMediaURL 是否已赋值
                     * 
                     */
                    bool WebMediaURLHasBeenSet() const;

                    /**
                     * 获取媒资分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaClassifierSet 媒资分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMediaClassifierSet() const;

                    /**
                     * 设置媒资分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaClassifierSet 媒资分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaClassifierSet(const std::vector<std::string>& _mediaClassifierSet);

                    /**
                     * 判断参数 MediaClassifierSet 是否已赋值
                     * @return MediaClassifierSet 是否已赋值
                     * 
                     */
                    bool MediaClassifierSetHasBeenSet() const;

                    /**
                     * 获取概要标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SummaryTagSet 概要标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSummaryTagSet() const;

                    /**
                     * 设置概要标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _summaryTagSet 概要标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSummaryTagSet(const std::vector<std::string>& _summaryTagSet);

                    /**
                     * 判断参数 SummaryTagSet 是否已赋值
                     * @return SummaryTagSet 是否已赋值
                     * 
                     */
                    bool SummaryTagSetHasBeenSet() const;

                    /**
                     * 获取未知人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnknownPersonSet 未知人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UnknownPerson> GetUnknownPersonSet() const;

                    /**
                     * 设置未知人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unknownPersonSet 未知人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnknownPersonSet(const std::vector<UnknownPerson>& _unknownPersonSet);

                    /**
                     * 判断参数 UnknownPersonSet 是否已赋值
                     * @return UnknownPersonSet 是否已赋值
                     * 
                     */
                    bool UnknownPersonSetHasBeenSet() const;

                    /**
                     * 获取树状已分类人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiLevelPersonInfoSet 树状已分类人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiLevelPersonInfo> GetMultiLevelPersonInfoSet() const;

                    /**
                     * 设置树状已分类人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiLevelPersonInfoSet 树状已分类人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiLevelPersonInfoSet(const std::vector<MultiLevelPersonInfo>& _multiLevelPersonInfoSet);

                    /**
                     * 判断参数 MultiLevelPersonInfoSet 是否已赋值
                     * @return MultiLevelPersonInfoSet 是否已赋值
                     * 
                     */
                    bool MultiLevelPersonInfoSetHasBeenSet() const;

                private:

                    /**
                     * 节目日期(只在新闻有效)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 台标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 节目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_column;
                    bool m_columnHasBeenSet;

                    /**
                     * 来源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 节目封面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coverImageURL;
                    bool m_coverImageURLHasBeenSet;

                    /**
                     * 节目内容概要列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_summarySet;
                    bool m_summarySetHasBeenSet;

                    /**
                     * 节目片段标题列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_titleSet;
                    bool m_titleSetHasBeenSet;

                    /**
                     * 音频识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioInfo> m_audioInfoSet;
                    bool m_audioInfoSetHasBeenSet;

                    /**
                     * 可视文字识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TextInfo> m_textInfoSet;
                    bool m_textInfoSetHasBeenSet;

                    /**
                     * 已分类人物信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClassifiedPersonInfo> m_classifiedPersonInfoSet;
                    bool m_classifiedPersonInfoSetHasBeenSet;

                    /**
                     * 文本标签列表，包含标签内容和出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiLevelTag m_textTagSet;
                    bool m_textTagSetHasBeenSet;

                    /**
                     * 帧标签列表，包括人物信息，场景信息等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiLevelTag m_frameTagSet;
                    bool m_frameTagSetHasBeenSet;

                    /**
                     * 视频下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webMediaURL;
                    bool m_webMediaURLHasBeenSet;

                    /**
                     * 媒资分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_mediaClassifierSet;
                    bool m_mediaClassifierSetHasBeenSet;

                    /**
                     * 概要标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_summaryTagSet;
                    bool m_summaryTagSetHasBeenSet;

                    /**
                     * 未知人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UnknownPerson> m_unknownPersonSet;
                    bool m_unknownPersonSetHasBeenSet;

                    /**
                     * 树状已分类人物信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiLevelPersonInfo> m_multiLevelPersonInfoSet;
                    bool m_multiLevelPersonInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_SHOWINFO_H_
