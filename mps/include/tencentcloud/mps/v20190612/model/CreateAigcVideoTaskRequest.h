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
                     * 获取模型名称。
当前支持的模型列表:
Hunyuan,
Hailuo，
Kling，
Vidu，
OS，
GV。
                     * @return ModelName 模型名称。
当前支持的模型列表:
Hunyuan,
Hailuo，
Kling，
Vidu，
OS，
GV。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称。
当前支持的模型列表:
Hunyuan,
Hailuo，
Kling，
Vidu，
OS，
GV。
                     * @param _modelName 模型名称。
当前支持的模型列表:
Hunyuan,
Hailuo，
Kling，
Vidu，
OS，
GV。
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
                     * 获取指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。
1. Hailuo， 可选[02、2.3]。
2. Kling，可选[2.0、2.1、2.5、O1、2.6]。
3. Vidu,可选[q2、q2-pro、q2-turbo]。
4. GV, 可选[3.1]。
5. OS，可选[2.0]。
                     * @return ModelVersion 指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。
1. Hailuo， 可选[02、2.3]。
2. Kling，可选[2.0、2.1、2.5、O1、2.6]。
3. Vidu,可选[q2、q2-pro、q2-turbo]。
4. GV, 可选[3.1]。
5. OS，可选[2.0]。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。
1. Hailuo， 可选[02、2.3]。
2. Kling，可选[2.0、2.1、2.5、O1、2.6]。
3. Vidu,可选[q2、q2-pro、q2-turbo]。
4. GV, 可选[3.1]。
5. OS，可选[2.0]。
                     * @param _modelVersion 指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。
1. Hailuo， 可选[02、2.3]。
2. Kling，可选[2.0、2.1、2.5、O1、2.6]。
3. Vidu,可选[q2、q2-pro、q2-turbo]。
4. GV, 可选[3.1]。
5. OS，可选[2.0]。
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
                     * 获取生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。
                     * @return Prompt 生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。
                     * @param _prompt 生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。
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
                     * 获取用于描述您想要阻止模型生成的内容。
注意：部分模型支持。
例如：
顶部照明、明亮的色彩
人物、动物
多辆汽车、风。
                     * @return NegativePrompt 用于描述您想要阻止模型生成的内容。
注意：部分模型支持。
例如：
顶部照明、明亮的色彩
人物、动物
多辆汽车、风。
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置用于描述您想要阻止模型生成的内容。
注意：部分模型支持。
例如：
顶部照明、明亮的色彩
人物、动物
多辆汽车、风。
                     * @param _negativePrompt 用于描述您想要阻止模型生成的内容。
注意：部分模型支持。
例如：
顶部照明、明亮的色彩
人物、动物
多辆汽车、风。
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
                     * 获取默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     * @return EnhancePrompt 默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     * @param _enhancePrompt 默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
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
                     * 获取用于指导视频生成的图片 URL。该URL需外网可访问。
注意：
1. 推荐图片大小不超过10M，不同模型大小限制不相同。
2. 支持的图片格式：jpeg、png。
3. 使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。
                     * @return ImageUrl 用于指导视频生成的图片 URL。该URL需外网可访问。
注意：
1. 推荐图片大小不超过10M，不同模型大小限制不相同。
2. 支持的图片格式：jpeg、png。
3. 使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置用于指导视频生成的图片 URL。该URL需外网可访问。
注意：
1. 推荐图片大小不超过10M，不同模型大小限制不相同。
2. 支持的图片格式：jpeg、png。
3. 使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。
                     * @param _imageUrl 用于指导视频生成的图片 URL。该URL需外网可访问。
注意：
1. 推荐图片大小不超过10M，不同模型大小限制不相同。
2. 支持的图片格式：jpeg、png。
3. 使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。
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
                     * 获取模型将以此参数传入的图片作为尾帧画面来生成视频。
支持此参数的模型：
1. GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。
2. Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。
3. Vidu, q2-pro, q2-turbo 支持首尾帧。

注意：
1. 推荐图片大小不超过10M，各模型限制不同。
2. 支持的图片格式：jpeg、png。
                     * @return LastImageUrl 模型将以此参数传入的图片作为尾帧画面来生成视频。
支持此参数的模型：
1. GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。
2. Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。
3. Vidu, q2-pro, q2-turbo 支持首尾帧。

注意：
1. 推荐图片大小不超过10M，各模型限制不同。
2. 支持的图片格式：jpeg、png。
                     * 
                     */
                    std::string GetLastImageUrl() const;

                    /**
                     * 设置模型将以此参数传入的图片作为尾帧画面来生成视频。
支持此参数的模型：
1. GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。
2. Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。
3. Vidu, q2-pro, q2-turbo 支持首尾帧。

注意：
1. 推荐图片大小不超过10M，各模型限制不同。
2. 支持的图片格式：jpeg、png。
                     * @param _lastImageUrl 模型将以此参数传入的图片作为尾帧画面来生成视频。
支持此参数的模型：
1. GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。
2. Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。
3. Vidu, q2-pro, q2-turbo 支持首尾帧。

注意：
1. 推荐图片大小不超过10M，各模型限制不同。
2. 支持的图片格式：jpeg、png。
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
                     * 获取最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     * @return ImageInfos 最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     * 
                     */
                    std::vector<AigcVideoReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     * @param _imageInfos 最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
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
                     * 获取生成视频的时长。
注意：
1. Kling支持 5、10秒。默认: 5秒。
2. Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。
3. Vidu支持1-10秒。
4. GV支持 8秒。 默认：8秒。
5. OS支持4、8、12秒。 默认：8秒。
                     * @return Duration 生成视频的时长。
注意：
1. Kling支持 5、10秒。默认: 5秒。
2. Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。
3. Vidu支持1-10秒。
4. GV支持 8秒。 默认：8秒。
5. OS支持4、8、12秒。 默认：8秒。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置生成视频的时长。
注意：
1. Kling支持 5、10秒。默认: 5秒。
2. Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。
3. Vidu支持1-10秒。
4. GV支持 8秒。 默认：8秒。
5. OS支持4、8、12秒。 默认：8秒。
                     * @param _duration 生成视频的时长。
注意：
1. Kling支持 5、10秒。默认: 5秒。
2. Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。
3. Vidu支持1-10秒。
4. GV支持 8秒。 默认：8秒。
5. OS支持4、8、12秒。 默认：8秒。
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
                     * 获取用于传入要求的额外参数。
                     * @return ExtraParameters 用于传入要求的额外参数。
                     * 
                     */
                    AigcVideoExtraParam GetExtraParameters() const;

                    /**
                     * 设置用于传入要求的额外参数。
                     * @param _extraParameters 用于传入要求的额外参数。
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
                     * 获取文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     * @return StoreCosParam 文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     * @param _storeCosParam 文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
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
                     * 获取用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。
示例：
{\"camera_control\":{\"type\":\"simple\"}}
                     * @return AdditionalParameters 用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。
示例：
{\"camera_control\":{\"type\":\"simple\"}}
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。
示例：
{\"camera_control\":{\"type\":\"simple\"}}
                     * @param _additionalParameters 用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。
示例：
{\"camera_control\":{\"type\":\"simple\"}}
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
                     * 获取接口操作者名称。
                     * @return Operator 接口操作者名称。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置接口操作者名称。
                     * @param _operator 接口操作者名称。
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
                     * 模型名称。
当前支持的模型列表:
Hunyuan,
Hailuo，
Kling，
Vidu，
OS，
GV。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。
1. Hailuo， 可选[02、2.3]。
2. Kling，可选[2.0、2.1、2.5、O1、2.6]。
3. Vidu,可选[q2、q2-pro、q2-turbo]。
4. GV, 可选[3.1]。
5. OS，可选[2.0]。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 生成视频的描述。(注：最大支持2000字符)。当未传入图片时，此参数必填。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 用于描述您想要阻止模型生成的内容。
注意：部分模型支持。
例如：
顶部照明、明亮的色彩
人物、动物
多辆汽车、风。
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 用于指导视频生成的图片 URL。该URL需外网可访问。
注意：
1. 推荐图片大小不超过10M，不同模型大小限制不相同。
2. 支持的图片格式：jpeg、png。
3. 使用OS模型时，需输入图片尺寸为: 1280x720、720x1280。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 模型将以此参数传入的图片作为尾帧画面来生成视频。
支持此参数的模型：
1. GV，传入尾帧图片时，必须同时传入ImageUrl作为首帧。
2. Kling， 在Resolution:1080P的情况下 2.1版本支持首尾帧。
3. Vidu, q2-pro, q2-turbo 支持首尾帧。

注意：
1. 推荐图片大小不超过10M，各模型限制不同。
2. 支持的图片格式：jpeg、png。
                     */
                    std::string m_lastImageUrl;
                    bool m_lastImageUrlHasBeenSet;

                    /**
                     * 最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用ImageUrl和LastImageUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过ImageInfos里面的ReferenceType作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     */
                    std::vector<AigcVideoReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * 生成视频的时长。
注意：
1. Kling支持 5、10秒。默认: 5秒。
2. Hailuo的std模式可支持6、10秒，其他仅6秒。默认：6秒。
3. Vidu支持1-10秒。
4. GV支持 8秒。 默认：8秒。
5. OS支持4、8、12秒。 默认：8秒。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 用于传入要求的额外参数。
                     */
                    AigcVideoExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * 文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * 用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。
示例：
{\"camera_control\":{\"type\":\"simple\"}}
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * 接口操作者名称。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
