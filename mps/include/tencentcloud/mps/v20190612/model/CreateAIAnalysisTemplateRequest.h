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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ClassificationConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TagConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/CoverConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/FrameTagConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAIAnalysisTemplate请求参数结构体
                */
                class CreateAIAnalysisTemplateRequest : public AbstractModel
                {
                public:
                    CreateAIAnalysisTemplateRequest();
                    ~CreateAIAnalysisTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频内容分析模板名称，长度限制：64 个字符。
                     * @return Name 视频内容分析模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置视频内容分析模板名称，长度限制：64 个字符。
                     * @param _name 视频内容分析模板名称，长度限制：64 个字符。
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
                     * 获取视频内容分析模板描述信息，长度限制：256 个字符。
                     * @return Comment 视频内容分析模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置视频内容分析模板描述信息，长度限制：256 个字符。
                     * @param _comment 视频内容分析模板描述信息，长度限制：256 个字符。
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
                    ClassificationConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置智能分类任务控制参数。
                     * @param _classificationConfigure 智能分类任务控制参数。
                     * 
                     */
                    void SetClassificationConfigure(const ClassificationConfigureInfo& _classificationConfigure);

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
                    TagConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置智能标签任务控制参数。
                     * @param _tagConfigure 智能标签任务控制参数。
                     * 
                     */
                    void SetTagConfigure(const TagConfigureInfo& _tagConfigure);

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
                    CoverConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置智能封面任务控制参数。
                     * @param _coverConfigure 智能封面任务控制参数。
                     * 
                     */
                    void SetCoverConfigure(const CoverConfigureInfo& _coverConfigure);

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
                    FrameTagConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置智能按帧标签任务控制参数。
                     * @param _frameTagConfigure 智能按帧标签任务控制参数。
                     * 
                     */
                    void SetFrameTagConfigure(const FrameTagConfigureInfo& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     * 
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                private:

                    /**
                     * 视频内容分析模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 视频内容分析模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 智能分类任务控制参数。
                     */
                    ClassificationConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * 智能标签任务控制参数。
                     */
                    TagConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * 智能封面任务控制参数。
                     */
                    CoverConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * 智能按帧标签任务控制参数。
                     */
                    FrameTagConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIANALYSISTEMPLATEREQUEST_H_
