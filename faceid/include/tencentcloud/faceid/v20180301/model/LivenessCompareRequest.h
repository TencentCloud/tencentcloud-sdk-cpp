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
                     * 获取<p>活体检测类型。</p><ul><li>取值：LIP/ACTION/SILENT。</li><li>LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。</li></ul>
                     * @return LivenessType <p>活体检测类型。</p><ul><li>取值：LIP/ACTION/SILENT。</li><li>LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。</li></ul>
                     * 
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置<p>活体检测类型。</p><ul><li>取值：LIP/ACTION/SILENT。</li><li>LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。</li></ul>
                     * @param _livenessType <p>活体检测类型。</p><ul><li>取值：LIP/ACTION/SILENT。</li><li>LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。</li></ul>
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
                     * 获取<p>用于人脸比对的照片的Base64值。</p><ul><li>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li></ul>
                     * @return ImageBase64 <p>用于人脸比对的照片的Base64值。</p><ul><li>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li></ul>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>用于人脸比对的照片的Base64值。</p><ul><li>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li></ul>
                     * @param _imageBase64 <p>用于人脸比对的照片的Base64值。</p><ul><li>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li></ul>
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
                     * 获取<p>用于人脸比对照片的URL地址。</p><ul><li>图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * @return ImageUrl <p>用于人脸比对照片的URL地址。</p><ul><li>图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>用于人脸比对照片的URL地址。</p><ul><li>图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * @param _imageUrl <p>用于人脸比对照片的URL地址。</p><ul><li>图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
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
                     * 获取<p>验证数据。</p><ul><li>数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；</li><li>动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；</li><li>静默模式传参：空。</li></ul>
                     * @return ValidateData <p>验证数据。</p><ul><li>数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；</li><li>动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；</li><li>静默模式传参：空。</li></ul>
                     * 
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置<p>验证数据。</p><ul><li>数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；</li><li>动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；</li><li>静默模式传参：空。</li></ul>
                     * @param _validateData <p>验证数据。</p><ul><li>数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；</li><li>动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；</li><li>静默模式传参：空。</li></ul>
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
                     * 获取<p>额外配置，传入JSON字符串。</p><ul><li>格式如下：<br>{<br>&quot;BestFrameNum&quot;: 2  //需要返回多张最佳截图，取值范围2-10<br>}</li></ul>
                     * @return Optional <p>额外配置，传入JSON字符串。</p><ul><li>格式如下：<br>{<br>&quot;BestFrameNum&quot;: 2  //需要返回多张最佳截图，取值范围2-10<br>}</li></ul>
                     * 
                     */
                    std::string GetOptional() const;

                    /**
                     * 设置<p>额外配置，传入JSON字符串。</p><ul><li>格式如下：<br>{<br>&quot;BestFrameNum&quot;: 2  //需要返回多张最佳截图，取值范围2-10<br>}</li></ul>
                     * @param _optional <p>额外配置，传入JSON字符串。</p><ul><li>格式如下：<br>{<br>&quot;BestFrameNum&quot;: 2  //需要返回多张最佳截图，取值范围2-10<br>}</li></ul>
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
                     * 获取<p>用于活体检测的视频，视频的Base64值。</p><ul><li>Base64编码后的大小不超过8M，支持mp4、avi、flv格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li></ul>
                     * @return VideoBase64 <p>用于活体检测的视频，视频的Base64值。</p><ul><li>Base64编码后的大小不超过8M，支持mp4、avi、flv格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li></ul>
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 设置<p>用于活体检测的视频，视频的Base64值。</p><ul><li>Base64编码后的大小不超过8M，支持mp4、avi、flv格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li></ul>
                     * @param _videoBase64 <p>用于活体检测的视频，视频的Base64值。</p><ul><li>Base64编码后的大小不超过8M，支持mp4、avi、flv格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li></ul>
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
                     * 获取<p>用于活体检测的视频Url 地址。</p><ul><li>视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li><li>建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * @return VideoUrl <p>用于活体检测的视频Url 地址。</p><ul><li>视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li><li>建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>用于活体检测的视频Url 地址。</p><ul><li>视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li><li>建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     * @param _videoUrl <p>用于活体检测的视频Url 地址。</p><ul><li>视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li><li>建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
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
                     * <p>活体检测类型。</p><ul><li>取值：LIP/ACTION/SILENT。</li><li>LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。</li></ul>
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * <p>用于人脸比对的照片的Base64值。</p><ul><li>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li></ul>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>用于人脸比对照片的URL地址。</p><ul><li>图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。</li><li>图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageBase64。</li><li>图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>验证数据。</p><ul><li>数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；</li><li>动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；</li><li>静默模式传参：空。</li></ul>
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                    /**
                     * <p>额外配置，传入JSON字符串。</p><ul><li>格式如下：<br>{<br>&quot;BestFrameNum&quot;: 2  //需要返回多张最佳截图，取值范围2-10<br>}</li></ul>
                     */
                    std::string m_optional;
                    bool m_optionalHasBeenSet;

                    /**
                     * <p>用于活体检测的视频，视频的Base64值。</p><ul><li>Base64编码后的大小不超过8M，支持mp4、avi、flv格式。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li></ul>
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * <p>用于活体检测的视频Url 地址。</p><ul><li>视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。</li><li>视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。</li><li>建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。</li><li>非腾讯云存储的 Url 速度和稳定性可能受一定影响。</li></ul>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPAREREQUEST_H_
