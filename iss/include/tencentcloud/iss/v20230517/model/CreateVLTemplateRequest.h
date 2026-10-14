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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/EffectiveTime.h>
#include <tencentcloud/iss/v20230517/model/ImageSceneInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * CreateVLTemplate请求参数结构体
                */
                class CreateVLTemplateRequest : public AbstractModel
                {
                public:
                    CreateVLTemplateRequest();
                    ~CreateVLTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>AI 模型</p><p>枚举值：</p><ul><li>ivc-vl-1.0： 视图大模型</li></ul>
                     * @return AIModel <p>AI 模型</p><p>枚举值：</p><ul><li>ivc-vl-1.0： 视图大模型</li></ul>
                     * 
                     */
                    std::string GetAIModel() const;

                    /**
                     * 设置<p>AI 模型</p><p>枚举值：</p><ul><li>ivc-vl-1.0： 视图大模型</li></ul>
                     * @param _aIModel <p>AI 模型</p><p>枚举值：</p><ul><li>ivc-vl-1.0： 视图大模型</li></ul>
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
                     * 获取<p>模板名称，仅支持中文/英文/数字/_/-，最长 32 个字符</p>
                     * @return Name <p>模板名称，仅支持中文/英文/数字/_/-，最长 32 个字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模板名称，仅支持中文/英文/数字/_/-，最长 32 个字符</p>
                     * @param _name <p>模板名称，仅支持中文/英文/数字/_/-，最长 32 个字符</p>
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
                     * 获取<p>提示词，最大 2MB</p>
                     * @return Prompt <p>提示词，最大 2MB</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>提示词，最大 2MB</p>
                     * @param _prompt <p>提示词，最大 2MB</p>
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
                     * 获取<p>生效时段列表，最多 100 条</p>
                     * @return Times <p>生效时段列表，最多 100 条</p>
                     * 
                     */
                    std::vector<EffectiveTime> GetTimes() const;

                    /**
                     * 设置<p>生效时段列表，最多 100 条</p>
                     * @param _times <p>生效时段列表，最多 100 条</p>
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
                     * 获取<p>模板描述，最长 256 个字符</p>
                     * @return Describe <p>模板描述，最长 256 个字符</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>模板描述，最长 256 个字符</p>
                     * @param _describe <p>模板描述，最长 256 个字符</p>
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
                     * 获取<p>图片场景配置（AnalysisMode=image 时必填）</p>
                     * @return ImageConfig <p>图片场景配置（AnalysisMode=image 时必填）</p>
                     * 
                     */
                    ImageSceneInfo GetImageConfig() const;

                    /**
                     * 设置<p>图片场景配置（AnalysisMode=image 时必填）</p>
                     * @param _imageConfig <p>图片场景配置（AnalysisMode=image 时必填）</p>
                     * 
                     */
                    void SetImageConfig(const ImageSceneInfo& _imageConfig);

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     * 
                     */
                    bool ImageConfigHasBeenSet() const;

                private:

                    /**
                     * <p>AI 模型</p><p>枚举值：</p><ul><li>ivc-vl-1.0： 视图大模型</li></ul>
                     */
                    std::string m_aIModel;
                    bool m_aIModelHasBeenSet;

                    /**
                     * <p>模板名称，仅支持中文/英文/数字/_/-，最长 32 个字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>提示词，最大 2MB</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>生效时段列表，最多 100 条</p>
                     */
                    std::vector<EffectiveTime> m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * <p>模板描述，最长 256 个字符</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>图片场景配置（AnalysisMode=image 时必填）</p>
                     */
                    ImageSceneInfo m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLTEMPLATEREQUEST_H_
