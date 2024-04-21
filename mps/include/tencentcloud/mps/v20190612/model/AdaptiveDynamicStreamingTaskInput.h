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
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/AddOnSubtitle.h>
#include <tencentcloud/mps/v20190612/model/DrmInfo.h>


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
                     * 获取转自适应码流模板 ID。
                     * @return Definition 转自适应码流模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流模板 ID。
                     * @param _definition 转自适应码流模板 ID。
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
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @param _watermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
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
                     * 获取转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
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
                     * 获取转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     * @return OutputObjectPath 转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     * @param _outputObjectPath 转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
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
                     * 获取转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`。
                     * @return SubStreamObjectName 转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`。
                     * 
                     */
                    std::string GetSubStreamObjectName() const;

                    /**
                     * 设置转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`。
                     * @param _subStreamObjectName 转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`。
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
                     * 获取转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`。
                     * @return SegmentObjectName 转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`。
                     * 
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`。
                     * @param _segmentObjectName 转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`。
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
                     * 获取要插入的字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddOnSubtitles 要插入的字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AddOnSubtitle> GetAddOnSubtitles() const;

                    /**
                     * 设置要插入的字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addOnSubtitles 要插入的字幕文件。
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
                     * 获取Drm信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DrmInfo Drm信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DrmInfo GetDrmInfo() const;

                    /**
                     * 设置Drm信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drmInfo Drm信息。
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
                     * 获取自适应转码模板类型：
Common：音视频类型
PureAudio：纯音频类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefinitionType 自适应转码模板类型：
Common：音视频类型
PureAudio：纯音频类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefinitionType() const;

                    /**
                     * 设置自适应转码模板类型：
Common：音视频类型
PureAudio：纯音频类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _definitionType 自适应转码模板类型：
Common：音视频类型
PureAudio：纯音频类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefinitionType(const std::string& _definitionType);

                    /**
                     * 判断参数 DefinitionType 是否已赋值
                     * @return DefinitionType 是否已赋值
                     * 
                     */
                    bool DefinitionTypeHasBeenSet() const;

                private:

                    /**
                     * 转自适应码流模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：{inputName}_adaptiveDynamicStreaming_{definition}.{format}。
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * 转自适应码流后，子流文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`。
                     */
                    std::string m_subStreamObjectName;
                    bool m_subStreamObjectNameHasBeenSet;

                    /**
                     * 转自适应码流（仅 HLS）后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`。
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * 要插入的字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AddOnSubtitle> m_addOnSubtitles;
                    bool m_addOnSubtitlesHasBeenSet;

                    /**
                     * Drm信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DrmInfo m_drmInfo;
                    bool m_drmInfoHasBeenSet;

                    /**
                     * 自适应转码模板类型：
Common：音视频类型
PureAudio：纯音频类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_definitionType;
                    bool m_definitionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
