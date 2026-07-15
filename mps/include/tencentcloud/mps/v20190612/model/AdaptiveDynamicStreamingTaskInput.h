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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/BlindWatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/AddOnSubtitle.h>
#include <tencentcloud/mps/v20190612/model/DrmInfo.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>
#include <tencentcloud/mps/v20190612/model/AddOnAudio.h>
#include <tencentcloud/mps/v20190612/model/AdaptiveStreamTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 对视频转自适应码流的输入参数类型
                */
                class AdaptiveDynamicStreamingTaskInput : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingTaskInput();
                    ~AdaptiveDynamicStreamingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转自适应码流模板 ID。</p>
                     * @return Definition <p>转自适应码流模板 ID。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>转自适应码流模板 ID。</p>
                     * @param _definition <p>转自适应码流模板 ID。</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * @return WatermarkSet <p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置<p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * @param _watermarkSet <p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取<p>数字水印参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlindWatermark <p>数字水印参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlindWatermarkInput GetBlindWatermark() const;

                    /**
                     * 设置<p>数字水印参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blindWatermark <p>数字水印参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlindWatermark(const BlindWatermarkInput& _blindWatermark);

                    /**
                     * 判断参数 BlindWatermark 是否已赋值
                     * @return BlindWatermark 是否已赋值
                     * 
                     */
                    bool BlindWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage <p>转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage <p>转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     * @return OutputObjectPath <p>转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     * @param _outputObjectPath <p>转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取<p>转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>。</p>
                     * @return SubStreamObjectName <p>转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>。</p>
                     * 
                     */
                    std::string GetSubStreamObjectName() const;

                    /**
                     * 设置<p>转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>。</p>
                     * @param _subStreamObjectName <p>转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>。</p>
                     * 
                     */
                    void SetSubStreamObjectName(const std::string& _subStreamObjectName);

                    /**
                     * 判断参数 SubStreamObjectName 是否已赋值
                     * @return SubStreamObjectName 是否已赋值
                     * 
                     */
                    bool SubStreamObjectNameHasBeenSet() const;

                    /**
                     * 获取<p>转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>。</p>
                     * @return SegmentObjectName <p>转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>。</p>
                     * 
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置<p>转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>。</p>
                     * @param _segmentObjectName <p>转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>。</p>
                     * 
                     */
                    void SetSegmentObjectName(const std::string& _segmentObjectName);

                    /**
                     * 判断参数 SegmentObjectName 是否已赋值
                     * @return SegmentObjectName 是否已赋值
                     * 
                     */
                    bool SegmentObjectNameHasBeenSet() const;

                    /**
                     * 获取<p>外挂字幕功能，指定要插入的字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddOnSubtitles <p>外挂字幕功能，指定要插入的字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AddOnSubtitle> GetAddOnSubtitles() const;

                    /**
                     * 设置<p>外挂字幕功能，指定要插入的字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addOnSubtitles <p>外挂字幕功能，指定要插入的字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddOnSubtitles(const std::vector<AddOnSubtitle>& _addOnSubtitles);

                    /**
                     * 判断参数 AddOnSubtitles 是否已赋值
                     * @return AddOnSubtitles 是否已赋值
                     * 
                     */
                    bool AddOnSubtitlesHasBeenSet() const;

                    /**
                     * 获取<p>Drm信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DrmInfo <p>Drm信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DrmInfo GetDrmInfo() const;

                    /**
                     * 设置<p>Drm信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drmInfo <p>Drm信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDrmInfo(const DrmInfo& _drmInfo);

                    /**
                     * 判断参数 DrmInfo 是否已赋值
                     * @return DrmInfo 是否已赋值
                     * 
                     */
                    bool DrmInfoHasBeenSet() const;

                    /**
                     * 获取<p>自适应转码模板类型：<br>Common：音视频类型<br>PureAudio：纯音频类型</p>
                     * @return DefinitionType <p>自适应转码模板类型：<br>Common：音视频类型<br>PureAudio：纯音频类型</p>
                     * 
                     */
                    std::string GetDefinitionType() const;

                    /**
                     * 设置<p>自适应转码模板类型：<br>Common：音视频类型<br>PureAudio：纯音频类型</p>
                     * @param _definitionType <p>自适应转码模板类型：<br>Common：音视频类型<br>PureAudio：纯音频类型</p>
                     * 
                     */
                    void SetDefinitionType(const std::string& _definitionType);

                    /**
                     * 判断参数 DefinitionType 是否已赋值
                     * @return DefinitionType 是否已赋值
                     * 
                     */
                    bool DefinitionTypeHasBeenSet() const;

                    /**
                     * 获取<p>硬字幕（压制字幕）功能，指定字幕来源、字体大小、位置等字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleTemplate <p>硬字幕（压制字幕）功能，指定字幕来源、字体大小、位置等字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubtitleTemplate GetSubtitleTemplate() const;

                    /**
                     * 设置<p>硬字幕（压制字幕）功能，指定字幕来源、字体大小、位置等字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleTemplate <p>硬字幕（压制字幕）功能，指定字幕来源、字体大小、位置等字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitleTemplate(const SubtitleTemplate& _subtitleTemplate);

                    /**
                     * 判断参数 SubtitleTemplate 是否已赋值
                     * @return SubtitleTemplate 是否已赋值
                     * 
                     */
                    bool SubtitleTemplateHasBeenSet() const;

                    /**
                     * 获取<p>转码参数扩展字段</p>
                     * @return StdExtInfo <p>转码参数扩展字段</p>
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置<p>转码参数扩展字段</p>
                     * @param _stdExtInfo <p>转码参数扩展字段</p>
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>指定pts时间的帧设为关键帧，并切片。单位毫秒（允许相对偏差&lt;=1ms）。当同时指定gop和切片时长时，会共同作用。注意需开启RawPts，保持帧率随源，并确保传入的pts时间在源中是有对应帧的。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyPTSList <p>指定pts时间的帧设为关键帧，并切片。单位毫秒（允许相对偏差&lt;=1ms）。当同时指定gop和切片时长时，会共同作用。注意需开启RawPts，保持帧率随源，并确保传入的pts时间在源中是有对应帧的。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetKeyPTSList() const;

                    /**
                     * 设置<p>指定pts时间的帧设为关键帧，并切片。单位毫秒（允许相对偏差&lt;=1ms）。当同时指定gop和切片时长时，会共同作用。注意需开启RawPts，保持帧率随源，并确保传入的pts时间在源中是有对应帧的。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyPTSList <p>指定pts时间的帧设为关键帧，并切片。单位毫秒（允许相对偏差&lt;=1ms）。当同时指定gop和切片时长时，会共同作用。注意需开启RawPts，保持帧率随源，并确保传入的pts时间在源中是有对应帧的。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyPTSList(const std::vector<int64_t>& _keyPTSList);

                    /**
                     * 判断参数 KeyPTSList 是否已赋值
                     * @return KeyPTSList 是否已赋值
                     * 
                     */
                    bool KeyPTSListHasBeenSet() const;

                    /**
                     * 获取<p>外挂音频功能，指定要插入的音频文件。</p>
                     * @return AddOnAudios <p>外挂音频功能，指定要插入的音频文件。</p>
                     * 
                     */
                    std::vector<AddOnAudio> GetAddOnAudios() const;

                    /**
                     * 设置<p>外挂音频功能，指定要插入的音频文件。</p>
                     * @param _addOnAudios <p>外挂音频功能，指定要插入的音频文件。</p>
                     * 
                     */
                    void SetAddOnAudios(const std::vector<AddOnAudio>& _addOnAudios);

                    /**
                     * 判断参数 AddOnAudios 是否已赋值
                     * @return AddOnAudios 是否已赋值
                     * 
                     */
                    bool AddOnAudiosHasBeenSet() const;

                    /**
                     * 获取<p>非空时直接替换模板的 StreamInfos 字段，字段格式与创建自适应模板时的 StreamInfos 完全一致</p>
                     * @return StdExtStreamInfos <p>非空时直接替换模板的 StreamInfos 字段，字段格式与创建自适应模板时的 StreamInfos 完全一致</p>
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStdExtStreamInfos() const;

                    /**
                     * 设置<p>非空时直接替换模板的 StreamInfos 字段，字段格式与创建自适应模板时的 StreamInfos 完全一致</p>
                     * @param _stdExtStreamInfos <p>非空时直接替换模板的 StreamInfos 字段，字段格式与创建自适应模板时的 StreamInfos 完全一致</p>
                     * 
                     */
                    void SetStdExtStreamInfos(const std::vector<AdaptiveStreamTemplate>& _stdExtStreamInfos);

                    /**
                     * 判断参数 StdExtStreamInfos 是否已赋值
                     * @return StdExtStreamInfos 是否已赋值
                     * 
                     */
                    bool StdExtStreamInfosHasBeenSet() const;

                private:

                    /**
                     * <p>转自适应码流模板 ID。</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * <p>数字水印参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlindWatermarkInput m_blindWatermark;
                    bool m_blindWatermarkHasBeenSet;

                    /**
                     * <p>转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>。</p>
                     */
                    std::string m_subStreamObjectName;
                    bool m_subStreamObjectNameHasBeenSet;

                    /**
                     * <p>转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>。</p>
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * <p>外挂字幕功能，指定要插入的字幕文件。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AddOnSubtitle> m_addOnSubtitles;
                    bool m_addOnSubtitlesHasBeenSet;

                    /**
                     * <p>Drm信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DrmInfo m_drmInfo;
                    bool m_drmInfoHasBeenSet;

                    /**
                     * <p>自适应转码模板类型：<br>Common：音视频类型<br>PureAudio：纯音频类型</p>
                     */
                    std::string m_definitionType;
                    bool m_definitionTypeHasBeenSet;

                    /**
                     * <p>硬字幕（压制字幕）功能，指定字幕来源、字体大小、位置等字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubtitleTemplate m_subtitleTemplate;
                    bool m_subtitleTemplateHasBeenSet;

                    /**
                     * <p>转码参数扩展字段</p>
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                    /**
                     * <p>指定pts时间的帧设为关键帧，并切片。单位毫秒（允许相对偏差&lt;=1ms）。当同时指定gop和切片时长时，会共同作用。注意需开启RawPts，保持帧率随源，并确保传入的pts时间在源中是有对应帧的。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_keyPTSList;
                    bool m_keyPTSListHasBeenSet;

                    /**
                     * <p>外挂音频功能，指定要插入的音频文件。</p>
                     */
                    std::vector<AddOnAudio> m_addOnAudios;
                    bool m_addOnAudiosHasBeenSet;

                    /**
                     * <p>非空时直接替换模板的 StreamInfos 字段，字段格式与创建自适应模板时的 StreamInfos 完全一致</p>
                     */
                    std::vector<AdaptiveStreamTemplate> m_stdExtStreamInfos;
                    bool m_stdExtStreamInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
