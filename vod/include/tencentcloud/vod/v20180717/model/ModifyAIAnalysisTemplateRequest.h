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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIANALYSISTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIANALYSISTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ClassificationConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TagConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/CoverConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/FrameTagConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/HighlightsConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyAIAnalysisTemplate请求参数结构体
                */
                class ModifyAIAnalysisTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAIAnalysisTemplateRequest();
                    ~ModifyAIAnalysisTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取音视频内容分析模板唯一标识。
                     * @return Definition 音视频内容分析模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置音视频内容分析模板唯一标识。
                     * @param _definition 音视频内容分析模板唯一标识。
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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
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
                     * 获取音视频内容分析模板名称，长度限制：64 个字符。
                     * @return Name 音视频内容分析模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置音视频内容分析模板名称，长度限制：64 个字符。
                     * @param _name 音视频内容分析模板名称，长度限制：64 个字符。
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
                     * 获取音视频内容分析模板描述信息，长度限制：256 个字符。
                     * @return Comment 音视频内容分析模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置音视频内容分析模板描述信息，长度限制：256 个字符。
                     * @param _comment 音视频内容分析模板描述信息，长度限制：256 个字符。
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
                     * 获取智能分类任务控制参数。
                     * @return ClassificationConfigure 智能分类任务控制参数。
                     * 
                     */
                    ClassificationConfigureInfoForUpdate GetClassificationConfigure() const;

                    /**
                     * 设置智能分类任务控制参数。
                     * @param _classificationConfigure 智能分类任务控制参数。
                     * 
                     */
                    void SetClassificationConfigure(const ClassificationConfigureInfoForUpdate& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     * 
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取智能标签任务控制参数。
                     * @return TagConfigure 智能标签任务控制参数。
                     * 
                     */
                    TagConfigureInfoForUpdate GetTagConfigure() const;

                    /**
                     * 设置智能标签任务控制参数。
                     * @param _tagConfigure 智能标签任务控制参数。
                     * 
                     */
                    void SetTagConfigure(const TagConfigureInfoForUpdate& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     * 
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取智能封面任务控制参数。
                     * @return CoverConfigure 智能封面任务控制参数。
                     * 
                     */
                    CoverConfigureInfoForUpdate GetCoverConfigure() const;

                    /**
                     * 设置智能封面任务控制参数。
                     * @param _coverConfigure 智能封面任务控制参数。
                     * 
                     */
                    void SetCoverConfigure(const CoverConfigureInfoForUpdate& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     * 
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取智能按帧标签任务控制参数。
                     * @return FrameTagConfigure 智能按帧标签任务控制参数。
                     * 
                     */
                    FrameTagConfigureInfoForUpdate GetFrameTagConfigure() const;

                    /**
                     * 设置智能按帧标签任务控制参数。
                     * @param _frameTagConfigure 智能按帧标签任务控制参数。
                     * 
                     */
                    void SetFrameTagConfigure(const FrameTagConfigureInfoForUpdate& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     * 
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                    /**
                     * 获取智能精彩集锦任务控制参数。
                     * @return HighlightConfigure 智能精彩集锦任务控制参数。
                     * 
                     */
                    HighlightsConfigureInfoForUpdate GetHighlightConfigure() const;

                    /**
                     * 设置智能精彩集锦任务控制参数。
                     * @param _highlightConfigure 智能精彩集锦任务控制参数。
                     * 
                     */
                    void SetHighlightConfigure(const HighlightsConfigureInfoForUpdate& _highlightConfigure);

                    /**
                     * 判断参数 HighlightConfigure 是否已赋值
                     * @return HighlightConfigure 是否已赋值
                     * 
                     */
                    bool HighlightConfigureHasBeenSet() const;

                private:

                    /**
                     * 音视频内容分析模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 音视频内容分析模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 音视频内容分析模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 智能分类任务控制参数。
                     */
                    ClassificationConfigureInfoForUpdate m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * 智能标签任务控制参数。
                     */
                    TagConfigureInfoForUpdate m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * 智能封面任务控制参数。
                     */
                    CoverConfigureInfoForUpdate m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * 智能按帧标签任务控制参数。
                     */
                    FrameTagConfigureInfoForUpdate m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * 智能精彩集锦任务控制参数。
                     */
                    HighlightsConfigureInfoForUpdate m_highlightConfigure;
                    bool m_highlightConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIANALYSISTEMPLATEREQUEST_H_
