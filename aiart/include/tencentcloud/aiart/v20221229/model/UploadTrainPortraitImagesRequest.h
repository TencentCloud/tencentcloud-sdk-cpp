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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_UPLOADTRAINPORTRAITIMAGESREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_UPLOADTRAINPORTRAITIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/Filter.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * UploadTrainPortraitImages请求参数结构体
                */
                class UploadTrainPortraitImagesRequest : public AbstractModel
                {
                public:
                    UploadTrainPortraitImagesRequest();
                    ~UploadTrainPortraitImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取写真模型 ID。由英文大小写字母、数字及下划线组成。
用于唯一标识一个写真模型，一个写真模型只能用于一个人物的写真图片生成。
                     * @return ModelId 写真模型 ID。由英文大小写字母、数字及下划线组成。
用于唯一标识一个写真模型，一个写真模型只能用于一个人物的写真图片生成。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置写真模型 ID。由英文大小写字母、数字及下划线组成。
用于唯一标识一个写真模型，一个写真模型只能用于一个人物的写真图片生成。
                     * @param _modelId 写真模型 ID。由英文大小写字母、数字及下划线组成。
用于唯一标识一个写真模型，一个写真模型只能用于一个人物的写真图片生成。
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取写真模型训练用的基础图像 URL，用于固定写真模型可生成的人物。
图片数量：1张。
图片内容：单人，脸部清晰。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。

                     * @return BaseUrl 写真模型训练用的基础图像 URL，用于固定写真模型可生成的人物。
图片数量：1张。
图片内容：单人，脸部清晰。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。

                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置写真模型训练用的基础图像 URL，用于固定写真模型可生成的人物。
图片数量：1张。
图片内容：单人，脸部清晰。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。

                     * @param _baseUrl 写真模型训练用的基础图像 URL，用于固定写真模型可生成的人物。
图片数量：1张。
图片内容：单人，脸部清晰。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。

                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取写真模型训练用的图像 URL 列表，仅常规训练模式需要上传。
图片数量：19 - 24 张。
图片内容：单人，脸部清晰，和基础图像中的人物为同一人。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。
                     * @return Urls 写真模型训练用的图像 URL 列表，仅常规训练模式需要上传。
图片数量：19 - 24 张。
图片内容：单人，脸部清晰，和基础图像中的人物为同一人。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置写真模型训练用的图像 URL 列表，仅常规训练模式需要上传。
图片数量：19 - 24 张。
图片内容：单人，脸部清晰，和基础图像中的人物为同一人。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。
                     * @param _urls 写真模型训练用的图像 URL 列表，仅常规训练模式需要上传。
图片数量：19 - 24 张。
图片内容：单人，脸部清晰，和基础图像中的人物为同一人。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取训练图像质量过滤开关配置。
支持开启或关闭对训练图像分辨率下限、脸部区域大小、脸部遮挡的过滤，默认开启以上过滤。
如果训练图像内包含多人脸或无人脸、和 Base 人像不为同一人也将被过滤，不可关闭该过滤条件。
建议：关闭以上过滤可能导致写真生成效果受损，建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的图像进行训练。
                     * @return Filter 训练图像质量过滤开关配置。
支持开启或关闭对训练图像分辨率下限、脸部区域大小、脸部遮挡的过滤，默认开启以上过滤。
如果训练图像内包含多人脸或无人脸、和 Base 人像不为同一人也将被过滤，不可关闭该过滤条件。
建议：关闭以上过滤可能导致写真生成效果受损，建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的图像进行训练。
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置训练图像质量过滤开关配置。
支持开启或关闭对训练图像分辨率下限、脸部区域大小、脸部遮挡的过滤，默认开启以上过滤。
如果训练图像内包含多人脸或无人脸、和 Base 人像不为同一人也将被过滤，不可关闭该过滤条件。
建议：关闭以上过滤可能导致写真生成效果受损，建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的图像进行训练。
                     * @param _filter 训练图像质量过滤开关配置。
支持开启或关闭对训练图像分辨率下限、脸部区域大小、脸部遮挡的过滤，默认开启以上过滤。
如果训练图像内包含多人脸或无人脸、和 Base 人像不为同一人也将被过滤，不可关闭该过滤条件。
建议：关闭以上过滤可能导致写真生成效果受损，建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的图像进行训练。
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取训练模式。
默认使用常规训练模式。如果使用快速训练模式和免训练模式，只需要在 BaseUrl 中传入1张图片，Urls.N 中无需传入图片。
0：常规训练模式，上传多张图片用于模型训练，完成训练后可生成写真图片。
1：快速训练模式，仅需上传1张图片用于模型训练，训练速度更快，完成训练后可生成写真图片。
2：免训练模式，仅需上传1张图片，跳过模型训练环节，直接生成写真图片。
                     * @return TrainMode 训练模式。
默认使用常规训练模式。如果使用快速训练模式和免训练模式，只需要在 BaseUrl 中传入1张图片，Urls.N 中无需传入图片。
0：常规训练模式，上传多张图片用于模型训练，完成训练后可生成写真图片。
1：快速训练模式，仅需上传1张图片用于模型训练，训练速度更快，完成训练后可生成写真图片。
2：免训练模式，仅需上传1张图片，跳过模型训练环节，直接生成写真图片。
                     * 
                     */
                    int64_t GetTrainMode() const;

                    /**
                     * 设置训练模式。
默认使用常规训练模式。如果使用快速训练模式和免训练模式，只需要在 BaseUrl 中传入1张图片，Urls.N 中无需传入图片。
0：常规训练模式，上传多张图片用于模型训练，完成训练后可生成写真图片。
1：快速训练模式，仅需上传1张图片用于模型训练，训练速度更快，完成训练后可生成写真图片。
2：免训练模式，仅需上传1张图片，跳过模型训练环节，直接生成写真图片。
                     * @param _trainMode 训练模式。
默认使用常规训练模式。如果使用快速训练模式和免训练模式，只需要在 BaseUrl 中传入1张图片，Urls.N 中无需传入图片。
0：常规训练模式，上传多张图片用于模型训练，完成训练后可生成写真图片。
1：快速训练模式，仅需上传1张图片用于模型训练，训练速度更快，完成训练后可生成写真图片。
2：免训练模式，仅需上传1张图片，跳过模型训练环节，直接生成写真图片。
                     * 
                     */
                    void SetTrainMode(const int64_t& _trainMode);

                    /**
                     * 判断参数 TrainMode 是否已赋值
                     * @return TrainMode 是否已赋值
                     * 
                     */
                    bool TrainModeHasBeenSet() const;

                private:

                    /**
                     * 写真模型 ID。由英文大小写字母、数字及下划线组成。
用于唯一标识一个写真模型，一个写真模型只能用于一个人物的写真图片生成。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 写真模型训练用的基础图像 URL，用于固定写真模型可生成的人物。
图片数量：1张。
图片内容：单人，脸部清晰。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。

                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * 写真模型训练用的图像 URL 列表，仅常规训练模式需要上传。
图片数量：19 - 24 张。
图片内容：单人，脸部清晰，和基础图像中的人物为同一人。
图片限制：单边分辨率小于2000，转成 Base64 字符串后小于 5MB。
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 训练图像质量过滤开关配置。
支持开启或关闭对训练图像分辨率下限、脸部区域大小、脸部遮挡的过滤，默认开启以上过滤。
如果训练图像内包含多人脸或无人脸、和 Base 人像不为同一人也将被过滤，不可关闭该过滤条件。
建议：关闭以上过滤可能导致写真生成效果受损，建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的图像进行训练。
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 训练模式。
默认使用常规训练模式。如果使用快速训练模式和免训练模式，只需要在 BaseUrl 中传入1张图片，Urls.N 中无需传入图片。
0：常规训练模式，上传多张图片用于模型训练，完成训练后可生成写真图片。
1：快速训练模式，仅需上传1张图片用于模型训练，训练速度更快，完成训练后可生成写真图片。
2：免训练模式，仅需上传1张图片，跳过模型训练环节，直接生成写真图片。
                     */
                    int64_t m_trainMode;
                    bool m_trainModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_UPLOADTRAINPORTRAITIMAGESREQUEST_H_
