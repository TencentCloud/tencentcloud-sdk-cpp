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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawAIDubbingParameter.h>
#include <tencentcloud/mps/v20190612/model/OverrideAIDubbingParameter.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/DstSubtitleInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI配音任务
                */
                class AIDubbingTaskInput : public AbstractModel
                {
                public:
                    AIDubbingTaskInput();
                    ~AIDubbingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI配音模板id。</p>
                     * @return Definition <p>AI配音模板id。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>AI配音模板id。</p>
                     * @param _definition <p>AI配音模板id。</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>AI配音自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定配音参数。</p>
                     * @return RawParameter <p>AI配音自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定配音参数。</p>
                     * 
                     */
                    RawAIDubbingParameter GetRawParameter() const;

                    /**
                     * 设置<p>AI配音自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定配音参数。</p>
                     * @param _rawParameter <p>AI配音自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定配音参数。</p>
                     * 
                     */
                    void SetRawParameter(const RawAIDubbingParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取<p>AI配音自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分配音参数时，将使用填写的参数覆盖AI配音模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定配音参数。</p>
                     * @return OverrideParameter <p>AI配音自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分配音参数时，将使用填写的参数覆盖AI配音模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定配音参数。</p>
                     * 
                     */
                    OverrideAIDubbingParameter GetOverrideParameter() const;

                    /**
                     * 设置<p>AI配音自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分配音参数时，将使用填写的参数覆盖AI配音模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定配音参数。</p>
                     * @param _overrideParameter <p>AI配音自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分配音参数时，将使用填写的参数覆盖AI配音模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定配音参数。</p>
                     * 
                     */
                    void SetOverrideParameter(const OverrideAIDubbingParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

                    /**
                     * 获取<p>文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
                     * @return OutputStorage <p>文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
                     * @param _outputStorage <p>文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
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
                     * 获取<p>外部源字幕文件信息。</p>
                     * @return SrcSubtitleInfo <p>外部源字幕文件信息。</p>
                     * 
                     */
                    MediaInputInfo GetSrcSubtitleInfo() const;

                    /**
                     * 设置<p>外部源字幕文件信息。</p>
                     * @param _srcSubtitleInfo <p>外部源字幕文件信息。</p>
                     * 
                     */
                    void SetSrcSubtitleInfo(const MediaInputInfo& _srcSubtitleInfo);

                    /**
                     * 判断参数 SrcSubtitleInfo 是否已赋值
                     * @return SrcSubtitleInfo 是否已赋值
                     * 
                     */
                    bool SrcSubtitleInfoHasBeenSet() const;

                    /**
                     * 获取<p>外部字幕文件信息，译文字幕。</p>
                     * @return DstSubtitleInfos <p>外部字幕文件信息，译文字幕。</p>
                     * 
                     */
                    std::vector<DstSubtitleInput> GetDstSubtitleInfos() const;

                    /**
                     * 设置<p>外部字幕文件信息，译文字幕。</p>
                     * @param _dstSubtitleInfos <p>外部字幕文件信息，译文字幕。</p>
                     * 
                     */
                    void SetDstSubtitleInfos(const std::vector<DstSubtitleInput>& _dstSubtitleInfos);

                    /**
                     * 判断参数 DstSubtitleInfos 是否已赋值
                     * @return DstSubtitleInfos 是否已赋值
                     * 
                     */
                    bool DstSubtitleInfosHasBeenSet() const;

                    /**
                     * 获取<p>文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li><p><strong>注意</strong>：目前不支持<code>BatchProcessMedia</code>接口。</p>
                     * @return OutputObjectPath <p>文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li><p><strong>注意</strong>：目前不支持<code>BatchProcessMedia</code>接口。</p>
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li><p><strong>注意</strong>：目前不支持<code>BatchProcessMedia</code>接口。</p>
                     * @param _outputObjectPath <p>文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li><p><strong>注意</strong>：目前不支持<code>BatchProcessMedia</code>接口。</p>
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
                     * 获取<p>AI配音扩展参数，序列化的 json 字符串。</p>
                     * @return ExtendedParameter <p>AI配音扩展参数，序列化的 json 字符串。</p>
                     * 
                     */
                    std::string GetExtendedParameter() const;

                    /**
                     * 设置<p>AI配音扩展参数，序列化的 json 字符串。</p>
                     * @param _extendedParameter <p>AI配音扩展参数，序列化的 json 字符串。</p>
                     * 
                     */
                    void SetExtendedParameter(const std::string& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                    /**
                     * 获取<p>关联剧集ID。<br>注意：配音模式为按角色智能配音时此值生效。</p>
                     * @return DramaId <p>关联剧集ID。<br>注意：配音模式为按角色智能配音时此值生效。</p>
                     * 
                     */
                    std::string GetDramaId() const;

                    /**
                     * 设置<p>关联剧集ID。<br>注意：配音模式为按角色智能配音时此值生效。</p>
                     * @param _dramaId <p>关联剧集ID。<br>注意：配音模式为按角色智能配音时此值生效。</p>
                     * 
                     */
                    void SetDramaId(const std::string& _dramaId);

                    /**
                     * 判断参数 DramaId 是否已赋值
                     * @return DramaId 是否已赋值
                     * 
                     */
                    bool DramaIdHasBeenSet() const;

                private:

                    /**
                     * <p>AI配音模板id。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>AI配音自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定配音参数。</p>
                     */
                    RawAIDubbingParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * <p>AI配音自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分配音参数时，将使用填写的参数覆盖AI配音模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定配音参数。</p>
                     */
                    OverrideAIDubbingParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * <p>文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>外部源字幕文件信息。</p>
                     */
                    MediaInputInfo m_srcSubtitleInfo;
                    bool m_srcSubtitleInfoHasBeenSet;

                    /**
                     * <p>外部字幕文件信息，译文字幕。</p>
                     */
                    std::vector<DstSubtitleInput> m_dstSubtitleInfos;
                    bool m_dstSubtitleInfosHasBeenSet;

                    /**
                     * <p>文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li><p><strong>注意</strong>：目前不支持<code>BatchProcessMedia</code>接口。</p>
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>AI配音扩展参数，序列化的 json 字符串。</p>
                     */
                    std::string m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                    /**
                     * <p>关联剧集ID。<br>注意：配音模式为按角色智能配音时此值生效。</p>
                     */
                    std::string m_dramaId;
                    bool m_dramaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKINPUT_H_
