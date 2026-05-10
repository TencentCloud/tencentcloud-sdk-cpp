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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATEFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATEFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAIAnalysisConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS智能分析模板输入
                */
                class MPSAIAnalysisTemplateForUpdate : public AbstractModel
                {
                public:
                    MPSAIAnalysisTemplateForUpdate();
                    ~MPSAIAnalysisTemplateForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频内容分析模板唯一标识。</p>
                     * @return Definition <p>视频内容分析模板唯一标识。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>视频内容分析模板唯一标识。</p>
                     * @param _definition <p>视频内容分析模板唯一标识。</p>
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
                     * 获取<p>视频内容分析模板名称，长度限制：64 个字符。</p>
                     * @return Name <p>视频内容分析模板名称，长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>视频内容分析模板名称，长度限制：64 个字符。</p>
                     * @param _name <p>视频内容分析模板名称，长度限制：64 个字符。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析模板描述信息，长度限制：256 个字符。</p>
                     * @return Comment <p>视频内容分析模板描述信息，长度限制：256 个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>视频内容分析模板描述信息，长度限制：256 个字符。</p>
                     * @param _comment <p>视频内容分析模板描述信息，长度限制：256 个字符。</p>
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
                     * 获取<p>智能分类任务控制参数。</p>
                     * @return ClassificationConfigure <p>智能分类任务控制参数。</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置<p>智能分类任务控制参数。</p>
                     * @param _classificationConfigure <p>智能分类任务控制参数。</p>
                     * 
                     */
                    void SetClassificationConfigure(const MPSAIAnalysisConfigureInfo& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     * 
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取<p>智能标签任务控制参数。</p>
                     * @return TagConfigure <p>智能标签任务控制参数。</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置<p>智能标签任务控制参数。</p>
                     * @param _tagConfigure <p>智能标签任务控制参数。</p>
                     * 
                     */
                    void SetTagConfigure(const MPSAIAnalysisConfigureInfo& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     * 
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取<p>智能封面任务控制参数。</p>
                     * @return CoverConfigure <p>智能封面任务控制参数。</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置<p>智能封面任务控制参数。</p>
                     * @param _coverConfigure <p>智能封面任务控制参数。</p>
                     * 
                     */
                    void SetCoverConfigure(const MPSAIAnalysisConfigureInfo& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     * 
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取<p>智能按帧标签任务控制参数。</p>
                     * @return FrameTagConfigure <p>智能按帧标签任务控制参数。</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置<p>智能按帧标签任务控制参数。</p>
                     * @param _frameTagConfigure <p>智能按帧标签任务控制参数。</p>
                     * 
                     */
                    void SetFrameTagConfigure(const MPSAIAnalysisConfigureInfo& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     * 
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                    /**
                     * 获取<p>智能拆条任务控制参数。</p>
                     * @return SplitConfigure <p>智能拆条任务控制参数。</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetSplitConfigure() const;

                    /**
                     * 设置<p>智能拆条任务控制参数。</p>
                     * @param _splitConfigure <p>智能拆条任务控制参数。</p>
                     * 
                     */
                    void SetSplitConfigure(const MPSAIAnalysisConfigureInfo& _splitConfigure);

                    /**
                     * 判断参数 SplitConfigure 是否已赋值
                     * @return SplitConfigure 是否已赋值
                     * 
                     */
                    bool SplitConfigureHasBeenSet() const;

                    /**
                     * 获取<p>智能集锦任务控制参数。</p>
                     * @return HighlightConfigure <p>智能集锦任务控制参数。</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetHighlightConfigure() const;

                    /**
                     * 设置<p>智能集锦任务控制参数。</p>
                     * @param _highlightConfigure <p>智能集锦任务控制参数。</p>
                     * 
                     */
                    void SetHighlightConfigure(const MPSAIAnalysisConfigureInfo& _highlightConfigure);

                    /**
                     * 判断参数 HighlightConfigure 是否已赋值
                     * @return HighlightConfigure 是否已赋值
                     * 
                     */
                    bool HighlightConfigureHasBeenSet() const;

                    /**
                     * 获取<p>智能片头片尾任务控制参数。</p>
                     * @return OpeningAndEndingConfigure <p>智能片头片尾任务控制参数。</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetOpeningAndEndingConfigure() const;

                    /**
                     * 设置<p>智能片头片尾任务控制参数。</p>
                     * @param _openingAndEndingConfigure <p>智能片头片尾任务控制参数。</p>
                     * 
                     */
                    void SetOpeningAndEndingConfigure(const MPSAIAnalysisConfigureInfo& _openingAndEndingConfigure);

                    /**
                     * 判断参数 OpeningAndEndingConfigure 是否已赋值
                     * @return OpeningAndEndingConfigure 是否已赋值
                     * 
                     */
                    bool OpeningAndEndingConfigureHasBeenSet() const;

                private:

                    /**
                     * <p>视频内容分析模板唯一标识。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>视频内容分析模板名称，长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>视频内容分析模板描述信息，长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>智能分类任务控制参数。</p>
                     */
                    MPSAIAnalysisConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * <p>智能标签任务控制参数。</p>
                     */
                    MPSAIAnalysisConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * <p>智能封面任务控制参数。</p>
                     */
                    MPSAIAnalysisConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * <p>智能按帧标签任务控制参数。</p>
                     */
                    MPSAIAnalysisConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * <p>智能拆条任务控制参数。</p>
                     */
                    MPSAIAnalysisConfigureInfo m_splitConfigure;
                    bool m_splitConfigureHasBeenSet;

                    /**
                     * <p>智能集锦任务控制参数。</p>
                     */
                    MPSAIAnalysisConfigureInfo m_highlightConfigure;
                    bool m_highlightConfigureHasBeenSet;

                    /**
                     * <p>智能片头片尾任务控制参数。</p>
                     */
                    MPSAIAnalysisConfigureInfo m_openingAndEndingConfigure;
                    bool m_openingAndEndingConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATEFORUPDATE_H_
