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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECLOUDEFFECTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECLOUDEFFECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveCloudEffect请求参数结构体
                */
                class CreateLiveCloudEffectRequest : public AbstractModel
                {
                public:
                    CreateLiveCloudEffectRequest();
                    ~CreateLiveCloudEffectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用于生成云端特效的 Prompt。示例：飞鸟。Prompt 和 ImageUrl 二选一。</p>
                     * @return Prompt <p>用于生成云端特效的 Prompt。示例：飞鸟。Prompt 和 ImageUrl 二选一。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>用于生成云端特效的 Prompt。示例：飞鸟。Prompt 和 ImageUrl 二选一。</p>
                     * @param _prompt <p>用于生成云端特效的 Prompt。示例：飞鸟。Prompt 和 ImageUrl 二选一。</p>
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
                     * 获取<p>模板生礼物的模板ID。目前支持的模板ID：queen_accession, wizard_of_oz，red_envelopes，fishermen，captain_america。</p>
                     * @return TemplateId <p>模板生礼物的模板ID。目前支持的模板ID：queen_accession, wizard_of_oz，red_envelopes，fishermen，captain_america。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板生礼物的模板ID。目前支持的模板ID：queen_accession, wizard_of_oz，red_envelopes，fishermen，captain_america。</p>
                     * @param _templateId <p>模板生礼物的模板ID。目前支持的模板ID：queen_accession, wizard_of_oz，red_envelopes，fishermen，captain_america。</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>输入我的图片地址，用于生成云端特效。ImageUrl 和 Prompt 二选一。</p>
                     * @return ImageUrl <p>输入我的图片地址，用于生成云端特效。ImageUrl 和 Prompt 二选一。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>输入我的图片地址，用于生成云端特效。ImageUrl 和 Prompt 二选一。</p>
                     * @param _imageUrl <p>输入我的图片地址，用于生成云端特效。ImageUrl 和 Prompt 二选一。</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>指定生成云端特效的方式。默认自动选取。标准方式：text2video，高品质方式：text2video_hq。</p>
                     * @return Type <p>指定生成云端特效的方式。默认自动选取。标准方式：text2video，高品质方式：text2video_hq。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>指定生成云端特效的方式。默认自动选取。标准方式：text2video，高品质方式：text2video_hq。</p>
                     * @param _type <p>指定生成云端特效的方式。默认自动选取。标准方式：text2video，高品质方式：text2video_hq。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>操作者名称。</p>
                     * @return Operator <p>操作者名称。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者名称。</p>
                     * @param _operator <p>操作者名称。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>用于生成云端特效的 Prompt。示例：飞鸟。Prompt 和 ImageUrl 二选一。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>模板生礼物的模板ID。目前支持的模板ID：queen_accession, wizard_of_oz，red_envelopes，fishermen，captain_america。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>输入我的图片地址，用于生成云端特效。ImageUrl 和 Prompt 二选一。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>指定生成云端特效的方式。默认自动选取。标准方式：text2video，高品质方式：text2video_hq。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>操作者名称。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECLOUDEFFECTREQUEST_H_
