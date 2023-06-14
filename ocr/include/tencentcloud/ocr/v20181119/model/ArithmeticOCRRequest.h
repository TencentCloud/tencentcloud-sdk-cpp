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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ARITHMETICOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ARITHMETICOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ArithmeticOCR请求参数结构体
                */
                class ArithmeticOCRRequest : public AbstractModel
                {
                public:
                    ArithmeticOCRRequest();
                    ~ArithmeticOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
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
                     * 获取图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取用于选择是否支持横屏拍摄。打开则支持横屏拍摄图片角度判断，角度信息在返回参数的angle中，默认值为true
                     * @return SupportHorizontalImage 用于选择是否支持横屏拍摄。打开则支持横屏拍摄图片角度判断，角度信息在返回参数的angle中，默认值为true
                     * 
                     */
                    bool GetSupportHorizontalImage() const;

                    /**
                     * 设置用于选择是否支持横屏拍摄。打开则支持横屏拍摄图片角度判断，角度信息在返回参数的angle中，默认值为true
                     * @param _supportHorizontalImage 用于选择是否支持横屏拍摄。打开则支持横屏拍摄图片角度判断，角度信息在返回参数的angle中，默认值为true
                     * 
                     */
                    void SetSupportHorizontalImage(const bool& _supportHorizontalImage);

                    /**
                     * 判断参数 SupportHorizontalImage 是否已赋值
                     * @return SupportHorizontalImage 是否已赋值
                     * 
                     */
                    bool SupportHorizontalImageHasBeenSet() const;

                    /**
                     * 获取是否拒绝非速算图，打开则拒绝非速算图(注：非速算图是指风景人物等明显不是速算图片的图片)，默认值为false
                     * @return RejectNonArithmeticPic 是否拒绝非速算图，打开则拒绝非速算图(注：非速算图是指风景人物等明显不是速算图片的图片)，默认值为false
                     * 
                     */
                    bool GetRejectNonArithmeticPic() const;

                    /**
                     * 设置是否拒绝非速算图，打开则拒绝非速算图(注：非速算图是指风景人物等明显不是速算图片的图片)，默认值为false
                     * @param _rejectNonArithmeticPic 是否拒绝非速算图，打开则拒绝非速算图(注：非速算图是指风景人物等明显不是速算图片的图片)，默认值为false
                     * 
                     */
                    void SetRejectNonArithmeticPic(const bool& _rejectNonArithmeticPic);

                    /**
                     * 判断参数 RejectNonArithmeticPic 是否已赋值
                     * @return RejectNonArithmeticPic 是否已赋值
                     * 
                     */
                    bool RejectNonArithmeticPicHasBeenSet() const;

                    /**
                     * 获取是否展开耦合算式中的竖式计算，默认值为false
                     * @return EnableDispRelatedVertical 是否展开耦合算式中的竖式计算，默认值为false
                     * 
                     */
                    bool GetEnableDispRelatedVertical() const;

                    /**
                     * 设置是否展开耦合算式中的竖式计算，默认值为false
                     * @param _enableDispRelatedVertical 是否展开耦合算式中的竖式计算，默认值为false
                     * 
                     */
                    void SetEnableDispRelatedVertical(const bool& _enableDispRelatedVertical);

                    /**
                     * 判断参数 EnableDispRelatedVertical 是否已赋值
                     * @return EnableDispRelatedVertical 是否已赋值
                     * 
                     */
                    bool EnableDispRelatedVerticalHasBeenSet() const;

                    /**
                     * 获取是否展示竖式算式的中间结果和格式控制字符，默认值为false
                     * @return EnableDispMidResult 是否展示竖式算式的中间结果和格式控制字符，默认值为false
                     * 
                     */
                    bool GetEnableDispMidResult() const;

                    /**
                     * 设置是否展示竖式算式的中间结果和格式控制字符，默认值为false
                     * @param _enableDispMidResult 是否展示竖式算式的中间结果和格式控制字符，默认值为false
                     * 
                     */
                    void SetEnableDispMidResult(const bool& _enableDispMidResult);

                    /**
                     * 判断参数 EnableDispMidResult 是否已赋值
                     * @return EnableDispMidResult 是否已赋值
                     * 
                     */
                    bool EnableDispMidResultHasBeenSet() const;

                    /**
                     * 获取是否开启pdf识别，默认值为true
                     * @return EnablePdfRecognize 是否开启pdf识别，默认值为true
                     * 
                     */
                    bool GetEnablePdfRecognize() const;

                    /**
                     * 设置是否开启pdf识别，默认值为true
                     * @param _enablePdfRecognize 是否开启pdf识别，默认值为true
                     * 
                     */
                    void SetEnablePdfRecognize(const bool& _enablePdfRecognize);

                    /**
                     * 判断参数 EnablePdfRecognize 是否已赋值
                     * @return EnablePdfRecognize 是否已赋值
                     * 
                     */
                    bool EnablePdfRecognizeHasBeenSet() const;

                    /**
                     * 获取pdf页码，从0开始，默认为0
                     * @return PdfPageIndex pdf页码，从0开始，默认为0
                     * 
                     */
                    int64_t GetPdfPageIndex() const;

                    /**
                     * 设置pdf页码，从0开始，默认为0
                     * @param _pdfPageIndex pdf页码，从0开始，默认为0
                     * 
                     */
                    void SetPdfPageIndex(const int64_t& _pdfPageIndex);

                    /**
                     * 判断参数 PdfPageIndex 是否已赋值
                     * @return PdfPageIndex 是否已赋值
                     * 
                     */
                    bool PdfPageIndexHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 用于选择是否支持横屏拍摄。打开则支持横屏拍摄图片角度判断，角度信息在返回参数的angle中，默认值为true
                     */
                    bool m_supportHorizontalImage;
                    bool m_supportHorizontalImageHasBeenSet;

                    /**
                     * 是否拒绝非速算图，打开则拒绝非速算图(注：非速算图是指风景人物等明显不是速算图片的图片)，默认值为false
                     */
                    bool m_rejectNonArithmeticPic;
                    bool m_rejectNonArithmeticPicHasBeenSet;

                    /**
                     * 是否展开耦合算式中的竖式计算，默认值为false
                     */
                    bool m_enableDispRelatedVertical;
                    bool m_enableDispRelatedVerticalHasBeenSet;

                    /**
                     * 是否展示竖式算式的中间结果和格式控制字符，默认值为false
                     */
                    bool m_enableDispMidResult;
                    bool m_enableDispMidResultHasBeenSet;

                    /**
                     * 是否开启pdf识别，默认值为true
                     */
                    bool m_enablePdfRecognize;
                    bool m_enablePdfRecognizeHasBeenSet;

                    /**
                     * pdf页码，从0开始，默认为0
                     */
                    int64_t m_pdfPageIndex;
                    bool m_pdfPageIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ARITHMETICOCRREQUEST_H_
