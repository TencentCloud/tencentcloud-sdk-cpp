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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CLOUDEFFECTTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CLOUDEFFECTTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 云端特效模板信息。
                */
                class CloudEffectTemplateInfo : public AbstractModel
                {
                public:
                    CloudEffectTemplateInfo();
                    ~CloudEffectTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>特效模板ID。</p>
                     * @return TemplateId <p>特效模板ID。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>特效模板ID。</p>
                     * @param _templateId <p>特效模板ID。</p>
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
                     * 获取<p>特效模板名称。</p>
                     * @return TemplateName <p>特效模板名称。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>特效模板名称。</p>
                     * @param _templateName <p>特效模板名称。</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>模板预览URL。</p>
                     * @return VideoUrl <p>模板预览URL。</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>模板预览URL。</p>
                     * @param _videoUrl <p>模板预览URL。</p>
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取<p>模板封面图片URL。</p>
                     * @return CoverImageUrl <p>模板封面图片URL。</p>
                     * 
                     */
                    std::string GetCoverImageUrl() const;

                    /**
                     * 设置<p>模板封面图片URL。</p>
                     * @param _coverImageUrl <p>模板封面图片URL。</p>
                     * 
                     */
                    void SetCoverImageUrl(const std::string& _coverImageUrl);

                    /**
                     * 判断参数 CoverImageUrl 是否已赋值
                     * @return CoverImageUrl 是否已赋值
                     * 
                     */
                    bool CoverImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>模板视频宽高比。</p>
                     * @return VideoRatio <p>模板视频宽高比。</p>
                     * 
                     */
                    std::string GetVideoRatio() const;

                    /**
                     * 设置<p>模板视频宽高比。</p>
                     * @param _videoRatio <p>模板视频宽高比。</p>
                     * 
                     */
                    void SetVideoRatio(const std::string& _videoRatio);

                    /**
                     * 判断参数 VideoRatio 是否已赋值
                     * @return VideoRatio 是否已赋值
                     * 
                     */
                    bool VideoRatioHasBeenSet() const;

                private:

                    /**
                     * <p>特效模板ID。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>特效模板名称。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>模板预览URL。</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * <p>模板封面图片URL。</p>
                     */
                    std::string m_coverImageUrl;
                    bool m_coverImageUrlHasBeenSet;

                    /**
                     * <p>模板视频宽高比。</p>
                     */
                    std::string m_videoRatio;
                    bool m_videoRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CLOUDEFFECTTEMPLATEINFO_H_
