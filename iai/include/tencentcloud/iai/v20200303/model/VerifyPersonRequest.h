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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONREQUEST_H_

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
                * VerifyPerson请求参数结构体
                */
                class VerifyPersonRequest : public AbstractModel
                {
                public:
                    VerifyPersonRequest();
                    ~VerifyPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待验证的人员ID。人员ID具体信息请参考人员库管理相关接口。
                     * @return PersonId 待验证的人员ID。人员ID具体信息请参考人员库管理相关接口。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置待验证的人员ID。人员ID具体信息请参考人员库管理相关接口。
                     * @param _personId 待验证的人员ID。人员ID具体信息请参考人员库管理相关接口。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _image 图片 base64 数据。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取图片的 Url 
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
-  图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url 
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
-  图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
-  图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _url 图片的 Url 
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
-  图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * @return QualityControl 图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * @param _qualityControl 图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
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

                    /**
                     * 获取是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * @return NeedRotateDetection 是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * @param _needRotateDetection 是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * 
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     * 
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                private:

                    /**
                     * 待验证的人员ID。人员ID具体信息请参考人员库管理相关接口。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 图片 base64 数据。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
-  图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * 是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONREQUEST_H_
