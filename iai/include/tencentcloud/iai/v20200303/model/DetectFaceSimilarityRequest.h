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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectFaceSimilarity请求参数结构体
                */
                class DetectFaceSimilarityRequest : public AbstractModel
                {
                public:
                    DetectFaceSimilarityRequest();
                    ~DetectFaceSimilarityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取A 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return ImageA A 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImageA() const;

                    /**
                     * 设置A 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _imageA A 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetImageA(const std::string& _imageA);

                    /**
                     * 判断参数 ImageA 是否已赋值
                     * @return ImageA 是否已赋值
                     * 
                     */
                    bool ImageAHasBeenSet() const;

                    /**
                     * 获取B 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return ImageB B 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImageB() const;

                    /**
                     * 设置B 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _imageB B 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetImageB(const std::string& _imageB);

                    /**
                     * 判断参数 ImageB 是否已赋值
                     * @return ImageB 是否已赋值
                     * 
                     */
                    bool ImageBHasBeenSet() const;

                    /**
                     * 获取A 图片的 Url。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- A 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return UrlA A 图片的 Url。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- A 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrlA() const;

                    /**
                     * 设置A 图片的 Url。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- A 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _urlA A 图片的 Url。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- A 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetUrlA(const std::string& _urlA);

                    /**
                     * 判断参数 UrlA 是否已赋值
                     * @return UrlA 是否已赋值
                     * 
                     */
                    bool UrlAHasBeenSet() const;

                    /**
                     * 获取B 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- B 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return UrlB B 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- B 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrlB() const;

                    /**
                     * 设置B 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- B 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _urlB B 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- B 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetUrlB(const std::string& _urlB);

                    /**
                     * 判断参数 UrlB 是否已赋值
                     * @return UrlB 是否已赋值
                     * 
                     */
                    bool UrlBHasBeenSet() const;

                    /**
                     * 获取图片质量控制。 
- 取值范围：
0: 不进行控制； 
1: 较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况； 
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况； 
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况； 
4: 很高的质量要求，各个维度均为最好或最多，在某一维度上存在轻微问题； 
默认 0。 

- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * @return QualityControl 图片质量控制。 
- 取值范围：
0: 不进行控制； 
1: 较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况； 
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况； 
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况； 
4: 很高的质量要求，各个维度均为最好或最多，在某一维度上存在轻微问题； 
默认 0。 

- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置图片质量控制。 
- 取值范围：
0: 不进行控制； 
1: 较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况； 
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况； 
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况； 
4: 很高的质量要求，各个维度均为最好或最多，在某一维度上存在轻微问题； 
默认 0。 

- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * @param _qualityControl 图片质量控制。 
- 取值范围：
0: 不进行控制； 
1: 较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况； 
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况； 
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况； 
4: 很高的质量要求，各个维度均为最好或最多，在某一维度上存在轻微问题； 
默认 0。 

- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * 
                     */
                    void SetQualityControl(const uint64_t& _qualityControl);

                    /**
                     * 判断参数 QualityControl 是否已赋值
                     * @return QualityControl 是否已赋值
                     * 
                     */
                    bool QualityControlHasBeenSet() const;

                private:

                    /**
                     * A 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_imageA;
                    bool m_imageAHasBeenSet;

                    /**
                     * B 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中置信度最高的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_imageB;
                    bool m_imageBHasBeenSet;

                    /**
                     * A 图片的 Url。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- A 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_urlA;
                    bool m_urlAHasBeenSet;

                    /**
                     * B 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- B 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_urlB;
                    bool m_urlBHasBeenSet;

                    /**
                     * 图片质量控制。 
- 取值范围：
0: 不进行控制； 
1: 较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况； 
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况； 
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况； 
4: 很高的质量要求，各个维度均为最好或最多，在某一维度上存在轻微问题； 
默认 0。 

- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYREQUEST_H_
