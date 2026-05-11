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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCENEVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCENEVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/SceneVideoReferenceImageInfo.h>
#include <tencentcloud/live/v20180801/model/SceneVideoReferenceVideoInfo.h>
#include <tencentcloud/live/v20180801/model/SceneVideoExtraParam.h>
#include <tencentcloud/live/v20180801/model/SceneStoreCosParam.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateSceneVideoTask请求参数结构体
                */
                class CreateSceneVideoTaskRequest : public AbstractModel
                {
                public:
                    CreateSceneVideoTaskRequest();
                    ~CreateSceneVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称。</p>
                     * @return ModelName <p>模型名称。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。</p>
                     * @param _modelName <p>模型名称。</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型版本号。</p>
                     * @return ModelVersion <p>模型版本号。</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本号。</p>
                     * @param _modelVersion <p>模型版本号。</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>场景化类型。</p><p>枚举值：</p><ul><li>template_effect： 模板特效。</li></ul>
                     * @return SceneType <p>场景化类型。</p><p>枚举值：</p><ul><li>template_effect： 模板特效。</li></ul>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>场景化类型。</p><p>枚举值：</p><ul><li>template_effect： 模板特效。</li></ul>
                     * @param _sceneType <p>场景化类型。</p><p>枚举值：</p><ul><li>template_effect： 模板特效。</li></ul>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>输入的Prompt。避免出现违规词汇，审核会进行拦截。</p>
                     * @return Prompt <p>输入的Prompt。避免出现违规词汇，审核会进行拦截。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>输入的Prompt。避免出现违规词汇，审核会进行拦截。</p>
                     * @param _prompt <p>输入的Prompt。避免出现违规词汇，审核会进行拦截。</p>
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
                     * 获取<p>指定输出的视频时长。</p><p>部分场景不支持指定时长。</p>
                     * @return Duration <p>指定输出的视频时长。</p><p>部分场景不支持指定时长。</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>指定输出的视频时长。</p><p>部分场景不支持指定时长。</p>
                     * @param _duration <p>指定输出的视频时长。</p><p>部分场景不支持指定时长。</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>输入的首帧参考图片Url。需外网可访问。</p>
                     * @return ImageUrl <p>输入的首帧参考图片Url。需外网可访问。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>输入的首帧参考图片Url。需外网可访问。</p>
                     * @param _imageUrl <p>输入的首帧参考图片Url。需外网可访问。</p>
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
                     * 获取<p>输入的尾帧参考图片Url。</p>
                     * @return LastImageUrl <p>输入的尾帧参考图片Url。</p>
                     * 
                     */
                    std::string GetLastImageUrl() const;

                    /**
                     * 设置<p>输入的尾帧参考图片Url。</p>
                     * @param _lastImageUrl <p>输入的尾帧参考图片Url。</p>
                     * 
                     */
                    void SetLastImageUrl(const std::string& _lastImageUrl);

                    /**
                     * 判断参数 LastImageUrl 是否已赋值
                     * @return LastImageUrl 是否已赋值
                     * 
                     */
                    bool LastImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>多图参考生视频时，通过该参数指定多张参考图。</p>
                     * @return ImageInfos <p>多图参考生视频时，通过该参数指定多张参考图。</p>
                     * 
                     */
                    std::vector<SceneVideoReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>多图参考生视频时，通过该参数指定多张参考图。</p>
                     * @param _imageInfos <p>多图参考生视频时，通过该参数指定多张参考图。</p>
                     * 
                     */
                    void SetImageInfos(const std::vector<SceneVideoReferenceImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>视频编辑时，指定参考视频信息。</p>
                     * @return VideoInfos <p>视频编辑时，指定参考视频信息。</p>
                     * 
                     */
                    std::vector<SceneVideoReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置<p>视频编辑时，指定参考视频信息。</p>
                     * @param _videoInfos <p>视频编辑时，指定参考视频信息。</p>
                     * 
                     */
                    void SetVideoInfos(const std::vector<SceneVideoReferenceVideoInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取<p>常规扩展参数。</p>
                     * @return ExtraParameters <p>常规扩展参数。</p>
                     * 
                     */
                    SceneVideoExtraParam GetExtraParameters() const;

                    /**
                     * 设置<p>常规扩展参数。</p>
                     * @param _extraParameters <p>常规扩展参数。</p>
                     * 
                     */
                    void SetExtraParameters(const SceneVideoExtraParam& _extraParameters);

                    /**
                     * 判断参数 ExtraParameters 是否已赋值
                     * @return ExtraParameters 是否已赋值
                     * 
                     */
                    bool ExtraParametersHasBeenSet() const;

                    /**
                     * 获取<p>模型扩展参数，用于透传到模型侧。</p>
                     * @return AdditionalParameters <p>模型扩展参数，用于透传到模型侧。</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>模型扩展参数，用于透传到模型侧。</p>
                     * @param _additionalParameters <p>模型扩展参数，用于透传到模型侧。</p>
                     * 
                     */
                    void SetAdditionalParameters(const std::string& _additionalParameters);

                    /**
                     * 判断参数 AdditionalParameters 是否已赋值
                     * @return AdditionalParameters 是否已赋值
                     * 
                     */
                    bool AdditionalParametersHasBeenSet() const;

                    /**
                     * 获取<p>输出结果存储到私有cos，需授权响应角色权限。</p>
                     * @return StoreCosParam <p>输出结果存储到私有cos，需授权响应角色权限。</p>
                     * 
                     */
                    SceneStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置<p>输出结果存储到私有cos，需授权响应角色权限。</p>
                     * @param _storeCosParam <p>输出结果存储到私有cos，需授权响应角色权限。</p>
                     * 
                     */
                    void SetStoreCosParam(const SceneStoreCosParam& _storeCosParam);

                    /**
                     * 判断参数 StoreCosParam 是否已赋值
                     * @return StoreCosParam 是否已赋值
                     * 
                     */
                    bool StoreCosParamHasBeenSet() const;

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
                     * <p>模型名称。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本号。</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>场景化类型。</p><p>枚举值：</p><ul><li>template_effect： 模板特效。</li></ul>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>输入的Prompt。避免出现违规词汇，审核会进行拦截。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>指定输出的视频时长。</p><p>部分场景不支持指定时长。</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>输入的首帧参考图片Url。需外网可访问。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>输入的尾帧参考图片Url。</p>
                     */
                    std::string m_lastImageUrl;
                    bool m_lastImageUrlHasBeenSet;

                    /**
                     * <p>多图参考生视频时，通过该参数指定多张参考图。</p>
                     */
                    std::vector<SceneVideoReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>视频编辑时，指定参考视频信息。</p>
                     */
                    std::vector<SceneVideoReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * <p>常规扩展参数。</p>
                     */
                    SceneVideoExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>模型扩展参数，用于透传到模型侧。</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * <p>输出结果存储到私有cos，需授权响应角色权限。</p>
                     */
                    SceneStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

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

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCENEVIDEOTASKREQUEST_H_
