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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceImageInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoReferenceVideoInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcVideoExtraParam.h>
#include <tencentcloud/mps/v20190612/model/AigcStoreCosParam.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAigcVideoTask请求参数结构体
                */
                class CreateAigcVideoTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcVideoTaskRequest();
                    ~CreateAigcVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称。<br>当前支持的模型列表:<br>Hunyuan,<br>Hailuo，<br>Kling，<br>Vidu，<br>OS，<br>GV。</p>
                     * @return ModelName <p>模型名称。<br>当前支持的模型列表:<br>Hunyuan,<br>Hailuo，<br>Kling，<br>Vidu，<br>OS，<br>GV。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。<br>当前支持的模型列表:<br>Hunyuan,<br>Hailuo，<br>Kling，<br>Vidu，<br>OS，<br>GV。</p>
                     * @param _modelName <p>模型名称。<br>当前支持的模型列表:<br>Hunyuan,<br>Hailuo，<br>Kling，<br>Vidu，<br>OS，<br>GV。</p>
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
                     * 获取<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>Hailuo， 可选[02、2.3]。</li><li>Kling，可选[2.0、2.1、2.5、O1、2.6、3.0、3.0-Omni]。</li><li>Vidu,可选[q2、q2-pro、q2-turbo、q3-pro、q3-turbo]。</li><li>GV, 可选[3.1]。</li><li>OS，可选[2.0]。</li></ol>
                     * @return ModelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>Hailuo， 可选[02、2.3]。</li><li>Kling，可选[2.0、2.1、2.5、O1、2.6、3.0、3.0-Omni]。</li><li>Vidu,可选[q2、q2-pro、q2-turbo、q3-pro、q3-turbo]。</li><li>GV, 可选[3.1]。</li><li>OS，可选[2.0]。</li></ol>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>Hailuo， 可选[02、2.3]。</li><li>Kling，可选[2.0、2.1、2.5、O1、2.6、3.0、3.0-Omni]。</li><li>Vidu,可选[q2、q2-pro、q2-turbo、q3-pro、q3-turbo]。</li><li>GV, 可选[3.1]。</li><li>OS，可选[2.0]。</li></ol>
                     * @param _modelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>Hailuo， 可选[02、2.3]。</li><li>Kling，可选[2.0、2.1、2.5、O1、2.6、3.0、3.0-Omni]。</li><li>Vidu,可选[q2、q2-pro、q2-turbo、q3-pro、q3-turbo]。</li><li>GV, 可选[3.1]。</li><li>OS，可选[2.0]。</li></ol>
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
                     * 获取<p>指定场景生视频。<br>注意：仅部分模型支持指定场景。</p><ol><li>Kling支持动作控制，motion_control。</li><li>Mingmou支持横转竖，land2port。</li><li>Vidu支持特效模板，template_effect。</li></ol>
                     * @return SceneType <p>指定场景生视频。<br>注意：仅部分模型支持指定场景。</p><ol><li>Kling支持动作控制，motion_control。</li><li>Mingmou支持横转竖，land2port。</li><li>Vidu支持特效模板，template_effect。</li></ol>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>指定场景生视频。<br>注意：仅部分模型支持指定场景。</p><ol><li>Kling支持动作控制，motion_control。</li><li>Mingmou支持横转竖，land2port。</li><li>Vidu支持特效模板，template_effect。</li></ol>
                     * @param _sceneType <p>指定场景生视频。<br>注意：仅部分模型支持指定场景。</p><ol><li>Kling支持动作控制，motion_control。</li><li>Mingmou支持横转竖，land2port。</li><li>Vidu支持特效模板，template_effect。</li></ol>
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
                     * 获取<p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     * @return Prompt <p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     * @param _prompt <p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
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
                     * 获取<p>用于描述您想要阻止模型生成的内容。<br>注意：部分模型支持。<br>例如：<br>顶部照明、明亮的色彩<br>人物、动物<br>多辆汽车、风。</p>
                     * @return NegativePrompt <p>用于描述您想要阻止模型生成的内容。<br>注意：部分模型支持。<br>例如：<br>顶部照明、明亮的色彩<br>人物、动物<br>多辆汽车、风。</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>用于描述您想要阻止模型生成的内容。<br>注意：部分模型支持。<br>例如：<br>顶部照明、明亮的色彩<br>人物、动物<br>多辆汽车、风。</p>
                     * @param _negativePrompt <p>用于描述您想要阻止模型生成的内容。<br>注意：部分模型支持。<br>例如：<br>顶部照明、明亮的色彩<br>人物、动物<br>多辆汽车、风。</p>
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取<p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * @return EnhancePrompt <p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置<p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * @param _enhancePrompt <p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * 
                     */
                    void SetEnhancePrompt(const bool& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取<p>用于指导视频生成的图片 URL。该URL需外网可访问。<br>注意：</p><ol><li>推荐图片大小不超过10M，不同模型大小限制不相同。</li><li>支持的图片格式：jpeg、png。</li><li>使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。</li></ol>
                     * @return ImageUrl <p>用于指导视频生成的图片 URL。该URL需外网可访问。<br>注意：</p><ol><li>推荐图片大小不超过10M，不同模型大小限制不相同。</li><li>支持的图片格式：jpeg、png。</li><li>使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。</li></ol>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>用于指导视频生成的图片 URL。该URL需外网可访问。<br>注意：</p><ol><li>推荐图片大小不超过10M，不同模型大小限制不相同。</li><li>支持的图片格式：jpeg、png。</li><li>使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。</li></ol>
                     * @param _imageUrl <p>用于指导视频生成的图片 URL。该URL需外网可访问。<br>注意：</p><ol><li>推荐图片大小不超过10M，不同模型大小限制不相同。</li><li>支持的图片格式：jpeg、png。</li><li>使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。</li></ol>
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
                     * 获取<p>模型将以此参数传入的图片作为尾帧画面来生成视频。<br>支持此参数的模型：</p><ol><li>GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。</li><li>Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。</li><li>Vidu, q2-pro, q2-turbo 支持首尾帧。</li></ol><p>注意：</p><ol><li>推荐图片大小不超过10M，各模型限制不同。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     * @return LastImageUrl <p>模型将以此参数传入的图片作为尾帧画面来生成视频。<br>支持此参数的模型：</p><ol><li>GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。</li><li>Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。</li><li>Vidu, q2-pro, q2-turbo 支持首尾帧。</li></ol><p>注意：</p><ol><li>推荐图片大小不超过10M，各模型限制不同。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     * 
                     */
                    std::string GetLastImageUrl() const;

                    /**
                     * 设置<p>模型将以此参数传入的图片作为尾帧画面来生成视频。<br>支持此参数的模型：</p><ol><li>GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。</li><li>Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。</li><li>Vidu, q2-pro, q2-turbo 支持首尾帧。</li></ol><p>注意：</p><ol><li>推荐图片大小不超过10M，各模型限制不同。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     * @param _lastImageUrl <p>模型将以此参数传入的图片作为尾帧画面来生成视频。<br>支持此参数的模型：</p><ol><li>GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。</li><li>Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。</li><li>Vidu, q2-pro, q2-turbo 支持首尾帧。</li></ol><p>注意：</p><ol><li>推荐图片大小不超过10M，各模型限制不同。</li><li>支持的图片格式：jpeg、png。</li></ol>
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
                     * 获取<p>最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。</p><p>支持多图输入的模型：</p><ol><li>GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。</li><li>Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。</li></ol><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     * @return ImageInfos <p>最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。</p><p>支持多图输入的模型：</p><ol><li>GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。</li><li>Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。</li></ol><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     * 
                     */
                    std::vector<AigcVideoReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。</p><p>支持多图输入的模型：</p><ol><li>GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。</li><li>Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。</li></ol><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     * @param _imageInfos <p>最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。</p><p>支持多图输入的模型：</p><ol><li>GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。</li><li>Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。</li></ol><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     * 
                     */
                    void SetImageInfos(const std::vector<AigcVideoReferenceImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>目前仅Kling O1版本支持参考视频信息传入。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声。</p>
                     * @return VideoInfos <p>目前仅Kling O1版本支持参考视频信息传入。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声。</p>
                     * 
                     */
                    std::vector<AigcVideoReferenceVideoInfo> GetVideoInfos() const;

                    /**
                     * 设置<p>目前仅Kling O1版本支持参考视频信息传入。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声。</p>
                     * @param _videoInfos <p>目前仅Kling O1版本支持参考视频信息传入。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声。</p>
                     * 
                     */
                    void SetVideoInfos(const std::vector<AigcVideoReferenceVideoInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的时长。<br>注意：</p><ol><li>Kling支持 5、10秒。默认: 5秒。</li><li>Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。</li><li>Vidu支持1-10秒。</li><li>GV支持 8秒。 默认：8秒。</li><li>OS支持4、8、12秒。 默认：8秒。</li></ol>
                     * @return Duration <p>生成视频的时长。<br>注意：</p><ol><li>Kling支持 5、10秒。默认: 5秒。</li><li>Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。</li><li>Vidu支持1-10秒。</li><li>GV支持 8秒。 默认：8秒。</li><li>OS支持4、8、12秒。 默认：8秒。</li></ol>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>生成视频的时长。<br>注意：</p><ol><li>Kling支持 5、10秒。默认: 5秒。</li><li>Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。</li><li>Vidu支持1-10秒。</li><li>GV支持 8秒。 默认：8秒。</li><li>OS支持4、8、12秒。 默认：8秒。</li></ol>
                     * @param _duration <p>生成视频的时长。<br>注意：</p><ol><li>Kling支持 5、10秒。默认: 5秒。</li><li>Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。</li><li>Vidu支持1-10秒。</li><li>GV支持 8秒。 默认：8秒。</li><li>OS支持4、8、12秒。 默认：8秒。</li></ol>
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
                     * 获取<p>用于传入要求的额外参数。</p>
                     * @return ExtraParameters <p>用于传入要求的额外参数。</p>
                     * 
                     */
                    AigcVideoExtraParam GetExtraParameters() const;

                    /**
                     * 设置<p>用于传入要求的额外参数。</p>
                     * @param _extraParameters <p>用于传入要求的额外参数。</p>
                     * 
                     */
                    void SetExtraParameters(const AigcVideoExtraParam& _extraParameters);

                    /**
                     * 判断参数 ExtraParameters 是否已赋值
                     * @return ExtraParameters 是否已赋值
                     * 
                     */
                    bool ExtraParametersHasBeenSet() const;

                    /**
                     * 获取<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @return StoreCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @param _storeCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    void SetStoreCosParam(const AigcStoreCosParam& _storeCosParam);

                    /**
                     * 判断参数 StoreCosParam 是否已赋值
                     * @return StoreCosParam 是否已赋值
                     * 
                     */
                    bool StoreCosParamHasBeenSet() const;

                    /**
                     * 获取<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     * @return AdditionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     * @param _additionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
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
                     * 获取<p>接口操作者名称。</p>
                     * @return Operator <p>接口操作者名称。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>接口操作者名称。</p>
                     * @param _operator <p>接口操作者名称。</p>
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
                     * <p>模型名称。<br>当前支持的模型列表:<br>Hunyuan,<br>Hailuo，<br>Kling，<br>Vidu，<br>OS，<br>GV。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>Hailuo， 可选[02、2.3]。</li><li>Kling，可选[2.0、2.1、2.5、O1、2.6、3.0、3.0-Omni]。</li><li>Vidu,可选[q2、q2-pro、q2-turbo、q3-pro、q3-turbo]。</li><li>GV, 可选[3.1]。</li><li>OS，可选[2.0]。</li></ol>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>指定场景生视频。<br>注意：仅部分模型支持指定场景。</p><ol><li>Kling支持动作控制，motion_control。</li><li>Mingmou支持横转竖，land2port。</li><li>Vidu支持特效模板，template_effect。</li></ol>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>用于描述您想要阻止模型生成的内容。<br>注意：部分模型支持。<br>例如：<br>顶部照明、明亮的色彩<br>人物、动物<br>多辆汽车、风。</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>用于指导视频生成的图片 URL。该URL需外网可访问。<br>注意：</p><ol><li>推荐图片大小不超过10M，不同模型大小限制不相同。</li><li>支持的图片格式：jpeg、png。</li><li>使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。</li></ol>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>模型将以此参数传入的图片作为尾帧画面来生成视频。<br>支持此参数的模型：</p><ol><li>GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。</li><li>Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。</li><li>Vidu, q2-pro, q2-turbo 支持首尾帧。</li></ol><p>注意：</p><ol><li>推荐图片大小不超过10M，各模型限制不同。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     */
                    std::string m_lastImageUrl;
                    bool m_lastImageUrlHasBeenSet;

                    /**
                     * <p>最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。</p><p>支持多图输入的模型：</p><ol><li>GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。</li><li>Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。</li></ol><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、png。</li></ol>
                     */
                    std::vector<AigcVideoReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>目前仅Kling O1版本支持参考视频信息传入。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声。</p>
                     */
                    std::vector<AigcVideoReferenceVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * <p>生成视频的时长。<br>注意：</p><ol><li>Kling支持 5、10秒。默认: 5秒。</li><li>Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。</li><li>Vidu支持1-10秒。</li><li>GV支持 8秒。 默认：8秒。</li><li>OS支持4、8、12秒。 默认：8秒。</li></ol>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>用于传入要求的额外参数。</p>
                     */
                    AigcVideoExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。<br>示例：<br>{"camera_control":{"type":"simple"}}</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * <p>接口操作者名称。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
