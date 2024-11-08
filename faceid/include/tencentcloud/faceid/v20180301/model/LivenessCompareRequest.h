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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPAREREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * LivenessCompare请求参数结构体
                */
                class LivenessCompareRequest : public AbstractModel
                {
                public:
                    LivenessCompareRequest();
                    ~LivenessCompareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @return LivenessType 活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * 
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @param _livenessType 活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * 
                     */
                    void SetLivenessType(const std::string& _livenessType);

                    /**
                     * 判断参数 LivenessType 是否已赋值
                     * @return LivenessType 是否已赋值
                     * 
                     */
                    bool LivenessTypeHasBeenSet() const;

                    /**
                     * 获取用于人脸比对的照片的Base64值。
- Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
                     * @return ImageBase64 用于人脸比对的照片的Base64值。
- Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置用于人脸比对的照片的Base64值。
- Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
                     * @param _imageBase64 用于人脸比对的照片的Base64值。
- Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取用于人脸比对照片的URL地址。
- 图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 用于人脸比对照片的URL地址。
- 图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置用于人脸比对照片的URL地址。
- 图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 用于人脸比对照片的URL地址。
- 图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * @return ValidateData 验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * 
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * @param _validateData 验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * 
                     */
                    void SetValidateData(const std::string& _validateData);

                    /**
                     * 判断参数 ValidateData 是否已赋值
                     * @return ValidateData 是否已赋值
                     * 
                     */
                    bool ValidateDataHasBeenSet() const;

                    /**
                     * 获取额外配置，传入JSON字符串。

- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * @return Optional 额外配置，传入JSON字符串。

- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * 
                     */
                    std::string GetOptional() const;

                    /**
                     * 设置额外配置，传入JSON字符串。

- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * @param _optional 额外配置，传入JSON字符串。

- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * 
                     */
                    void SetOptional(const std::string& _optional);

                    /**
                     * 判断参数 Optional 是否已赋值
                     * @return Optional 是否已赋值
                     * 
                     */
                    bool OptionalHasBeenSet() const;

                    /**
                     * 获取用于活体检测的视频，视频的Base64值。
- Base64编码后的大小不超过8M，支持mp4、avi、flv格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
                     * @return VideoBase64 用于活体检测的视频，视频的Base64值。
- Base64编码后的大小不超过8M，支持mp4、avi、flv格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 设置用于活体检测的视频，视频的Base64值。
- Base64编码后的大小不超过8M，支持mp4、avi、flv格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
                     * @param _videoBase64 用于活体检测的视频，视频的Base64值。
- Base64编码后的大小不超过8M，支持mp4、avi、flv格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
                     * 
                     */
                    void SetVideoBase64(const std::string& _videoBase64);

                    /**
                     * 判断参数 VideoBase64 是否已赋值
                     * @return VideoBase64 是否已赋值
                     * 
                     */
                    bool VideoBase64HasBeenSet() const;

                    /**
                     * 获取用于活体检测的视频Url 地址。
- 视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return VideoUrl 用于活体检测的视频Url 地址。
- 视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置用于活体检测的视频Url 地址。
- 视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _videoUrl 用于活体检测的视频Url 地址。
- 视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                private:

                    /**
                     * 活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * 用于人脸比对的照片的Base64值。
- Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 用于人脸比对照片的URL地址。
- 图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。
- 图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。
- 图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                    /**
                     * 额外配置，传入JSON字符串。

- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     */
                    std::string m_optional;
                    bool m_optionalHasBeenSet;

                    /**
                     * 用于活体检测的视频，视频的Base64值。
- Base64编码后的大小不超过8M，支持mp4、avi、flv格式。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * 用于活体检测的视频Url 地址。
- 视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPAREREQUEST_H_
