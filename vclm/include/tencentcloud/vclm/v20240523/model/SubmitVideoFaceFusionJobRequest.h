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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOFACEFUSIONJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOFACEFUSIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/FaceTemplateInfo.h>
#include <tencentcloud/vclm/v20240523/model/FaceMergeInfo.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitVideoFaceFusionJob请求参数结构体
                */
                class SubmitVideoFaceFusionJobRequest : public AbstractModel
                {
                public:
                    SubmitVideoFaceFusionJobRequest();
                    ~SubmitVideoFaceFusionJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频素材下载地址。用户自定义模版视频下载地址，使用前需要先调用视频审核接口进行内容审核。视频限制：分辨率≤4k，fps≤25，视频大小≤1G，时长≤20 秒，支持格式mp4。

输入视频建议：
姿态：人脸相对镜头水平方向角度转动不超过 90°,垂直方向角度转动不超过 20°。遮挡：脸部遮挡面积不超过 50%，不要完全遮挡五官，不要有半透明遮挡（强光，玻璃，透明眼镜等）、以及细碎离散的脸部遮挡（如飘落的花瓣）。妆容及光照：避免浓妆、复杂妆容，避免复杂光照、闪烁，这些属性无法完全恢复，并对稳定性有影响。针对特殊表情和微表情，针对局部肌肉控制下的微表情，以及过于夸张的特殊表情等不保证表情效果完全恢复。
                     * @return VideoUrl 视频素材下载地址。用户自定义模版视频下载地址，使用前需要先调用视频审核接口进行内容审核。视频限制：分辨率≤4k，fps≤25，视频大小≤1G，时长≤20 秒，支持格式mp4。

输入视频建议：
姿态：人脸相对镜头水平方向角度转动不超过 90°,垂直方向角度转动不超过 20°。遮挡：脸部遮挡面积不超过 50%，不要完全遮挡五官，不要有半透明遮挡（强光，玻璃，透明眼镜等）、以及细碎离散的脸部遮挡（如飘落的花瓣）。妆容及光照：避免浓妆、复杂妆容，避免复杂光照、闪烁，这些属性无法完全恢复，并对稳定性有影响。针对特殊表情和微表情，针对局部肌肉控制下的微表情，以及过于夸张的特殊表情等不保证表情效果完全恢复。
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频素材下载地址。用户自定义模版视频下载地址，使用前需要先调用视频审核接口进行内容审核。视频限制：分辨率≤4k，fps≤25，视频大小≤1G，时长≤20 秒，支持格式mp4。

输入视频建议：
姿态：人脸相对镜头水平方向角度转动不超过 90°,垂直方向角度转动不超过 20°。遮挡：脸部遮挡面积不超过 50%，不要完全遮挡五官，不要有半透明遮挡（强光，玻璃，透明眼镜等）、以及细碎离散的脸部遮挡（如飘落的花瓣）。妆容及光照：避免浓妆、复杂妆容，避免复杂光照、闪烁，这些属性无法完全恢复，并对稳定性有影响。针对特殊表情和微表情，针对局部肌肉控制下的微表情，以及过于夸张的特殊表情等不保证表情效果完全恢复。
                     * @param _videoUrl 视频素材下载地址。用户自定义模版视频下载地址，使用前需要先调用视频审核接口进行内容审核。视频限制：分辨率≤4k，fps≤25，视频大小≤1G，时长≤20 秒，支持格式mp4。

输入视频建议：
姿态：人脸相对镜头水平方向角度转动不超过 90°,垂直方向角度转动不超过 20°。遮挡：脸部遮挡面积不超过 50%，不要完全遮挡五官，不要有半透明遮挡（强光，玻璃，透明眼镜等）、以及细碎离散的脸部遮挡（如飘落的花瓣）。妆容及光照：避免浓妆、复杂妆容，避免复杂光照、闪烁，这些属性无法完全恢复，并对稳定性有影响。针对特殊表情和微表情，针对局部肌肉控制下的微表情，以及过于夸张的特殊表情等不保证表情效果完全恢复。
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
                     * 获取视频素材模板的人脸位置信息。
目前最多支持融合视频素材中的 6 张人脸  
输入图片要求：  
1、用户图限制大小不超过 10MB  
2、图片最大分辨率不超过 4k，建议最小为 128，  人脸框最小为 68
3、支持格式 jpg，png  
4、如果用户图中未指定人脸且有多张人脸，  默认融合最大人脸  
输入图片建议：  包含上述视频中出现的人物的单人照，并且正面、清晰、无遮挡
                     * @return TemplateInfos 视频素材模板的人脸位置信息。
目前最多支持融合视频素材中的 6 张人脸  
输入图片要求：  
1、用户图限制大小不超过 10MB  
2、图片最大分辨率不超过 4k，建议最小为 128，  人脸框最小为 68
3、支持格式 jpg，png  
4、如果用户图中未指定人脸且有多张人脸，  默认融合最大人脸  
输入图片建议：  包含上述视频中出现的人物的单人照，并且正面、清晰、无遮挡
                     * 
                     */
                    std::vector<FaceTemplateInfo> GetTemplateInfos() const;

                    /**
                     * 设置视频素材模板的人脸位置信息。
目前最多支持融合视频素材中的 6 张人脸  
输入图片要求：  
1、用户图限制大小不超过 10MB  
2、图片最大分辨率不超过 4k，建议最小为 128，  人脸框最小为 68
3、支持格式 jpg，png  
4、如果用户图中未指定人脸且有多张人脸，  默认融合最大人脸  
输入图片建议：  包含上述视频中出现的人物的单人照，并且正面、清晰、无遮挡
                     * @param _templateInfos 视频素材模板的人脸位置信息。
目前最多支持融合视频素材中的 6 张人脸  
输入图片要求：  
1、用户图限制大小不超过 10MB  
2、图片最大分辨率不超过 4k，建议最小为 128，  人脸框最小为 68
3、支持格式 jpg，png  
4、如果用户图中未指定人脸且有多张人脸，  默认融合最大人脸  
输入图片建议：  包含上述视频中出现的人物的单人照，并且正面、清晰、无遮挡
                     * 
                     */
                    void SetTemplateInfos(const std::vector<FaceTemplateInfo>& _templateInfos);

                    /**
                     * 判断参数 TemplateInfos 是否已赋值
                     * @return TemplateInfos 是否已赋值
                     * 
                     */
                    bool TemplateInfosHasBeenSet() const;

                    /**
                     * 获取用户人脸图片位置信息。
输入图片要求：
1、用户图限制大小不超过 10MB
2、图片最大分辨率不超过 4k，建议最小为 128，人脸框最小为 68
3、支持格式 jpg，png
4、如果未指定人脸且用户图中有多张人脸，
默认融合最大人脸
输入图建议：
正脸无遮挡
                     * @return MergeInfos 用户人脸图片位置信息。
输入图片要求：
1、用户图限制大小不超过 10MB
2、图片最大分辨率不超过 4k，建议最小为 128，人脸框最小为 68
3、支持格式 jpg，png
4、如果未指定人脸且用户图中有多张人脸，
默认融合最大人脸
输入图建议：
正脸无遮挡
                     * 
                     */
                    std::vector<FaceMergeInfo> GetMergeInfos() const;

                    /**
                     * 设置用户人脸图片位置信息。
输入图片要求：
1、用户图限制大小不超过 10MB
2、图片最大分辨率不超过 4k，建议最小为 128，人脸框最小为 68
3、支持格式 jpg，png
4、如果未指定人脸且用户图中有多张人脸，
默认融合最大人脸
输入图建议：
正脸无遮挡
                     * @param _mergeInfos 用户人脸图片位置信息。
输入图片要求：
1、用户图限制大小不超过 10MB
2、图片最大分辨率不超过 4k，建议最小为 128，人脸框最小为 68
3、支持格式 jpg，png
4、如果未指定人脸且用户图中有多张人脸，
默认融合最大人脸
输入图建议：
正脸无遮挡
                     * 
                     */
                    void SetMergeInfos(const std::vector<FaceMergeInfo>& _mergeInfos);

                    /**
                     * 判断参数 MergeInfos 是否已赋值
                     * @return MergeInfos 是否已赋值
                     * 
                     */
                    bool MergeInfosHasBeenSet() const;

                    /**
                     * 获取为生成视频添加标识的开关，默认为1。 
1：添加标识。 0：不添加标识。 其他数值：默认按1处理。 
建议您使用显著标识来提示，该视频是 AI 生成的视频。
                     * @return LogoAdd 为生成视频添加标识的开关，默认为1。 
1：添加标识。 0：不添加标识。 其他数值：默认按1处理。 
建议您使用显著标识来提示，该视频是 AI 生成的视频。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成视频添加标识的开关，默认为1。 
1：添加标识。 0：不添加标识。 其他数值：默认按1处理。 
建议您使用显著标识来提示，该视频是 AI 生成的视频。
                     * @param _logoAdd 为生成视频添加标识的开关，默认为1。 
1：添加标识。 0：不添加标识。 其他数值：默认按1处理。 
建议您使用显著标识来提示，该视频是 AI 生成的视频。
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取视频水印Logo参数标识内容设置。   
默认在融合结果图右下角添加“AI生成”类似字样，您可根据自身需要替换为其他的Logo图片。   
输入建议：输入水印图片宽高需小于视频宽高
                     * @return LogoParam 视频水印Logo参数标识内容设置。   
默认在融合结果图右下角添加“AI生成”类似字样，您可根据自身需要替换为其他的Logo图片。   
输入建议：输入水印图片宽高需小于视频宽高
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置视频水印Logo参数标识内容设置。   
默认在融合结果图右下角添加“AI生成”类似字样，您可根据自身需要替换为其他的Logo图片。   
输入建议：输入水印图片宽高需小于视频宽高
                     * @param _logoParam 视频水印Logo参数标识内容设置。   
默认在融合结果图右下角添加“AI生成”类似字样，您可根据自身需要替换为其他的Logo图片。   
输入建议：输入水印图片宽高需小于视频宽高
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * 视频素材下载地址。用户自定义模版视频下载地址，使用前需要先调用视频审核接口进行内容审核。视频限制：分辨率≤4k，fps≤25，视频大小≤1G，时长≤20 秒，支持格式mp4。

输入视频建议：
姿态：人脸相对镜头水平方向角度转动不超过 90°,垂直方向角度转动不超过 20°。遮挡：脸部遮挡面积不超过 50%，不要完全遮挡五官，不要有半透明遮挡（强光，玻璃，透明眼镜等）、以及细碎离散的脸部遮挡（如飘落的花瓣）。妆容及光照：避免浓妆、复杂妆容，避免复杂光照、闪烁，这些属性无法完全恢复，并对稳定性有影响。针对特殊表情和微表情，针对局部肌肉控制下的微表情，以及过于夸张的特殊表情等不保证表情效果完全恢复。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 视频素材模板的人脸位置信息。
目前最多支持融合视频素材中的 6 张人脸  
输入图片要求：  
1、用户图限制大小不超过 10MB  
2、图片最大分辨率不超过 4k，建议最小为 128，  人脸框最小为 68
3、支持格式 jpg，png  
4、如果用户图中未指定人脸且有多张人脸，  默认融合最大人脸  
输入图片建议：  包含上述视频中出现的人物的单人照，并且正面、清晰、无遮挡
                     */
                    std::vector<FaceTemplateInfo> m_templateInfos;
                    bool m_templateInfosHasBeenSet;

                    /**
                     * 用户人脸图片位置信息。
输入图片要求：
1、用户图限制大小不超过 10MB
2、图片最大分辨率不超过 4k，建议最小为 128，人脸框最小为 68
3、支持格式 jpg，png
4、如果未指定人脸且用户图中有多张人脸，
默认融合最大人脸
输入图建议：
正脸无遮挡
                     */
                    std::vector<FaceMergeInfo> m_mergeInfos;
                    bool m_mergeInfosHasBeenSet;

                    /**
                     * 为生成视频添加标识的开关，默认为1。 
1：添加标识。 0：不添加标识。 其他数值：默认按1处理。 
建议您使用显著标识来提示，该视频是 AI 生成的视频。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 视频水印Logo参数标识内容设置。   
默认在融合结果图右下角添加“AI生成”类似字样，您可根据自身需要替换为其他的Logo图片。   
输入建议：输入水印图片宽高需小于视频宽高
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOFACEFUSIONJOBREQUEST_H_
