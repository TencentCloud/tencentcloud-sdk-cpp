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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VLTEMPLATEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VLTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/ImageSceneInfo.h>
#include <tencentcloud/iss/v20230517/model/EffectiveTime.h>
#include <tencentcloud/iss/v20230517/model/VideoSceneInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 视觉理解模板信息
                */
                class VLTemplateInfo : public AbstractModel
                {
                public:
                    VLTemplateInfo();
                    ~VLTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板ID</p>
                     * @return VLTemplateId <p>模板ID</p>
                     * 
                     */
                    std::string GetVLTemplateId() const;

                    /**
                     * 设置<p>模板ID</p>
                     * @param _vLTemplateId <p>模板ID</p>
                     * 
                     */
                    void SetVLTemplateId(const std::string& _vLTemplateId);

                    /**
                     * 判断参数 VLTemplateId 是否已赋值
                     * @return VLTemplateId 是否已赋值
                     * 
                     */
                    bool VLTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>AI 模型</p><p>枚举值：</p><ul><li>IVC-G： 视图默认大模型</li></ul>
                     * @return AIModel <p>AI 模型</p><p>枚举值：</p><ul><li>IVC-G： 视图默认大模型</li></ul>
                     * 
                     */
                    std::string GetAIModel() const;

                    /**
                     * 设置<p>AI 模型</p><p>枚举值：</p><ul><li>IVC-G： 视图默认大模型</li></ul>
                     * @param _aIModel <p>AI 模型</p><p>枚举值：</p><ul><li>IVC-G： 视图默认大模型</li></ul>
                     * 
                     */
                    void SetAIModel(const std::string& _aIModel);

                    /**
                     * 判断参数 AIModel 是否已赋值
                     * @return AIModel 是否已赋值
                     * 
                     */
                    bool AIModelHasBeenSet() const;

                    /**
                     * 获取<p>AI场景名称</p>
                     * @return Name <p>AI场景名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>AI场景名称</p>
                     * @param _name <p>AI场景名称</p>
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
                     * 获取<p>AI场景描述</p>
                     * @return Describe <p>AI场景描述</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>AI场景描述</p>
                     * @param _describe <p>AI场景描述</p>
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>提示词</p>
                     * @return Prompt <p>提示词</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>提示词</p>
                     * @param _prompt <p>提示词</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * @return AnalysisMode <p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 设置<p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * @param _analysisMode <p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * 
                     */
                    void SetAnalysisMode(const std::string& _analysisMode);

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                    /**
                     * 获取<p>图片场景配置</p>
                     * @return ImageConfig <p>图片场景配置</p>
                     * 
                     */
                    ImageSceneInfo GetImageConfig() const;

                    /**
                     * 设置<p>图片场景配置</p>
                     * @param _imageConfig <p>图片场景配置</p>
                     * 
                     */
                    void SetImageConfig(const ImageSceneInfo& _imageConfig);

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     * 
                     */
                    bool ImageConfigHasBeenSet() const;

                    /**
                     * 获取<p>生效时段列表</p>
                     * @return Times <p>生效时段列表</p>
                     * 
                     */
                    std::vector<EffectiveTime> GetTimes() const;

                    /**
                     * 设置<p>生效时段列表</p>
                     * @param _times <p>生效时段列表</p>
                     * 
                     */
                    void SetTimes(const std::vector<EffectiveTime>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>最近一次更新时间</p>
                     * @return UpdatedAt <p>最近一次更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>最近一次更新时间</p>
                     * @param _updatedAt <p>最近一次更新时间</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>是否关联到视觉理解计划</p>
                     * @return IsUsed <p>是否关联到视觉理解计划</p>
                     * 
                     */
                    bool GetIsUsed() const;

                    /**
                     * 设置<p>是否关联到视觉理解计划</p>
                     * @param _isUsed <p>是否关联到视觉理解计划</p>
                     * 
                     */
                    void SetIsUsed(const bool& _isUsed);

                    /**
                     * 判断参数 IsUsed 是否已赋值
                     * @return IsUsed 是否已赋值
                     * 
                     */
                    bool IsUsedHasBeenSet() const;

                    /**
                     * 获取<p>视频场景配置</p>
                     * @return VideoConfig <p>视频场景配置</p>
                     * 
                     */
                    VideoSceneInfo GetVideoConfig() const;

                    /**
                     * 设置<p>视频场景配置</p>
                     * @param _videoConfig <p>视频场景配置</p>
                     * 
                     */
                    void SetVideoConfig(const VideoSceneInfo& _videoConfig);

                    /**
                     * 判断参数 VideoConfig 是否已赋值
                     * @return VideoConfig 是否已赋值
                     * 
                     */
                    bool VideoConfigHasBeenSet() const;

                private:

                    /**
                     * <p>模板ID</p>
                     */
                    std::string m_vLTemplateId;
                    bool m_vLTemplateIdHasBeenSet;

                    /**
                     * <p>AI 模型</p><p>枚举值：</p><ul><li>IVC-G： 视图默认大模型</li></ul>
                     */
                    std::string m_aIModel;
                    bool m_aIModelHasBeenSet;

                    /**
                     * <p>AI场景名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>AI场景描述</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>提示词</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>图片场景配置</p>
                     */
                    ImageSceneInfo m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                    /**
                     * <p>生效时段列表</p>
                     */
                    std::vector<EffectiveTime> m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>最近一次更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>是否关联到视觉理解计划</p>
                     */
                    bool m_isUsed;
                    bool m_isUsedHasBeenSet;

                    /**
                     * <p>视频场景配置</p>
                     */
                    VideoSceneInfo m_videoConfig;
                    bool m_videoConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VLTEMPLATEINFO_H_
