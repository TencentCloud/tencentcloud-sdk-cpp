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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRREQUEST_H_

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
                * IDCardOCR请求参数结构体
                */
                class IDCardOCRRequest : public AbstractModel
                {
                public:
                    IDCardOCRRequest();
                    ~IDCardOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @return ImageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     * @param _imageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
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
                     * 获取<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     * @return ImageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     * @param _imageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
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
                     * 获取<p>FRONT：身份证有照片的一面（人像面），<br>BACK：身份证有国徽的一面（国徽面），<br>该参数如果不填，将为您自动判断身份证正反面。</p>
                     * @return CardSide <p>FRONT：身份证有照片的一面（人像面），<br>BACK：身份证有国徽的一面（国徽面），<br>该参数如果不填，将为您自动判断身份证正反面。</p>
                     * 
                     */
                    std::string GetCardSide() const;

                    /**
                     * 设置<p>FRONT：身份证有照片的一面（人像面），<br>BACK：身份证有国徽的一面（国徽面），<br>该参数如果不填，将为您自动判断身份证正反面。</p>
                     * @param _cardSide <p>FRONT：身份证有照片的一面（人像面），<br>BACK：身份证有国徽的一面（国徽面），<br>该参数如果不填，将为您自动判断身份证正反面。</p>
                     * 
                     */
                    void SetCardSide(const std::string& _cardSide);

                    /**
                     * 判断参数 CardSide 是否已赋值
                     * @return CardSide 是否已赋值
                     * 
                     */
                    bool CardSideHasBeenSet() const;

                    /**
                     * 获取<p>以下可选字段均为bool 类型，默认false：<br>CropIdCard，身份证照片裁剪（去掉证件外多余的边缘、自动矫正拍摄角度）<br>CropPortrait，人像照片裁剪（自动抠取身份证头像区域）<br>CopyWarn，复印件告警<br>BorderCheckWarn，边框不完整和框内遮挡告警<br>ReshootWarn，屏幕翻拍告警<br>DetectPsWarn，疑似存在PS痕迹告警（CardWarnType参数为 Advanced时同时开启电子身份证、水印告警）<br>TempIdWarn，临时身份证告警<br>InvalidDateWarn，身份证有效日期不合法告警<br>Quality，图片质量分数（评价图片的模糊程度）<br>MultiCardDetect，是否开启正反面同框识别（仅支持二代身份证正反页同框识别或临时身份证正反页同框识别）<br>ReflectWarn，是否开启反光检测<br>SDK 设置方式参考：Config = Json.stringify({&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true})<br>API 3.0 Explorer 设置方式参考：Config = {&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true}</p>
                     * @return Config <p>以下可选字段均为bool 类型，默认false：<br>CropIdCard，身份证照片裁剪（去掉证件外多余的边缘、自动矫正拍摄角度）<br>CropPortrait，人像照片裁剪（自动抠取身份证头像区域）<br>CopyWarn，复印件告警<br>BorderCheckWarn，边框不完整和框内遮挡告警<br>ReshootWarn，屏幕翻拍告警<br>DetectPsWarn，疑似存在PS痕迹告警（CardWarnType参数为 Advanced时同时开启电子身份证、水印告警）<br>TempIdWarn，临时身份证告警<br>InvalidDateWarn，身份证有效日期不合法告警<br>Quality，图片质量分数（评价图片的模糊程度）<br>MultiCardDetect，是否开启正反面同框识别（仅支持二代身份证正反页同框识别或临时身份证正反页同框识别）<br>ReflectWarn，是否开启反光检测<br>SDK 设置方式参考：Config = Json.stringify({&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true})<br>API 3.0 Explorer 设置方式参考：Config = {&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true}</p>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>以下可选字段均为bool 类型，默认false：<br>CropIdCard，身份证照片裁剪（去掉证件外多余的边缘、自动矫正拍摄角度）<br>CropPortrait，人像照片裁剪（自动抠取身份证头像区域）<br>CopyWarn，复印件告警<br>BorderCheckWarn，边框不完整和框内遮挡告警<br>ReshootWarn，屏幕翻拍告警<br>DetectPsWarn，疑似存在PS痕迹告警（CardWarnType参数为 Advanced时同时开启电子身份证、水印告警）<br>TempIdWarn，临时身份证告警<br>InvalidDateWarn，身份证有效日期不合法告警<br>Quality，图片质量分数（评价图片的模糊程度）<br>MultiCardDetect，是否开启正反面同框识别（仅支持二代身份证正反页同框识别或临时身份证正反页同框识别）<br>ReflectWarn，是否开启反光检测<br>SDK 设置方式参考：Config = Json.stringify({&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true})<br>API 3.0 Explorer 设置方式参考：Config = {&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true}</p>
                     * @param _config <p>以下可选字段均为bool 类型，默认false：<br>CropIdCard，身份证照片裁剪（去掉证件外多余的边缘、自动矫正拍摄角度）<br>CropPortrait，人像照片裁剪（自动抠取身份证头像区域）<br>CopyWarn，复印件告警<br>BorderCheckWarn，边框不完整和框内遮挡告警<br>ReshootWarn，屏幕翻拍告警<br>DetectPsWarn，疑似存在PS痕迹告警（CardWarnType参数为 Advanced时同时开启电子身份证、水印告警）<br>TempIdWarn，临时身份证告警<br>InvalidDateWarn，身份证有效日期不合法告警<br>Quality，图片质量分数（评价图片的模糊程度）<br>MultiCardDetect，是否开启正反面同框识别（仅支持二代身份证正反页同框识别或临时身份证正反页同框识别）<br>ReflectWarn，是否开启反光检测<br>SDK 设置方式参考：Config = Json.stringify({&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true})<br>API 3.0 Explorer 设置方式参考：Config = {&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true}</p>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>默认值为true，打开识别结果纠正开关。开关开启后，身份证号、出生日期、性别，三个字段会进行矫正补齐，统一结果输出；若关闭此开关，以上三个字段不会进行矫正补齐，保持原始识别结果输出，若原图出现篡改情况，这三个字段的识别结果可能会不统一。</p>
                     * @return EnableRecognitionRectify <p>默认值为true，打开识别结果纠正开关。开关开启后，身份证号、出生日期、性别，三个字段会进行矫正补齐，统一结果输出；若关闭此开关，以上三个字段不会进行矫正补齐，保持原始识别结果输出，若原图出现篡改情况，这三个字段的识别结果可能会不统一。</p>
                     * 
                     */
                    bool GetEnableRecognitionRectify() const;

                    /**
                     * 设置<p>默认值为true，打开识别结果纠正开关。开关开启后，身份证号、出生日期、性别，三个字段会进行矫正补齐，统一结果输出；若关闭此开关，以上三个字段不会进行矫正补齐，保持原始识别结果输出，若原图出现篡改情况，这三个字段的识别结果可能会不统一。</p>
                     * @param _enableRecognitionRectify <p>默认值为true，打开识别结果纠正开关。开关开启后，身份证号、出生日期、性别，三个字段会进行矫正补齐，统一结果输出；若关闭此开关，以上三个字段不会进行矫正补齐，保持原始识别结果输出，若原图出现篡改情况，这三个字段的识别结果可能会不统一。</p>
                     * 
                     */
                    void SetEnableRecognitionRectify(const bool& _enableRecognitionRectify);

                    /**
                     * 判断参数 EnableRecognitionRectify 是否已赋值
                     * @return EnableRecognitionRectify 是否已赋值
                     * 
                     */
                    bool EnableRecognitionRectifyHasBeenSet() const;

                    /**
                     * 获取<p>默认值为false。</p><p>此开关需要在反光检测开关开启下才会生效（即此开关生效的前提是config入参里的&quot;ReflectWarn&quot;:true），若EnableReflectDetail设置为true，则会返回反光点覆盖区域详情。反光点覆盖区域详情分为四部分：人像照片位置、国徽位置、识别字段位置、其他位置。一个反光点允许覆盖多个区域，且一张图片可能存在多个反光点。</p>
                     * @return EnableReflectDetail <p>默认值为false。</p><p>此开关需要在反光检测开关开启下才会生效（即此开关生效的前提是config入参里的&quot;ReflectWarn&quot;:true），若EnableReflectDetail设置为true，则会返回反光点覆盖区域详情。反光点覆盖区域详情分为四部分：人像照片位置、国徽位置、识别字段位置、其他位置。一个反光点允许覆盖多个区域，且一张图片可能存在多个反光点。</p>
                     * 
                     */
                    bool GetEnableReflectDetail() const;

                    /**
                     * 设置<p>默认值为false。</p><p>此开关需要在反光检测开关开启下才会生效（即此开关生效的前提是config入参里的&quot;ReflectWarn&quot;:true），若EnableReflectDetail设置为true，则会返回反光点覆盖区域详情。反光点覆盖区域详情分为四部分：人像照片位置、国徽位置、识别字段位置、其他位置。一个反光点允许覆盖多个区域，且一张图片可能存在多个反光点。</p>
                     * @param _enableReflectDetail <p>默认值为false。</p><p>此开关需要在反光检测开关开启下才会生效（即此开关生效的前提是config入参里的&quot;ReflectWarn&quot;:true），若EnableReflectDetail设置为true，则会返回反光点覆盖区域详情。反光点覆盖区域详情分为四部分：人像照片位置、国徽位置、识别字段位置、其他位置。一个反光点允许覆盖多个区域，且一张图片可能存在多个反光点。</p>
                     * 
                     */
                    void SetEnableReflectDetail(const bool& _enableReflectDetail);

                    /**
                     * 判断参数 EnableReflectDetail 是否已赋值
                     * @return EnableReflectDetail 是否已赋值
                     * 
                     */
                    bool EnableReflectDetailHasBeenSet() const;

                    /**
                     * 获取<p>用于控制是否开启日期校验，默认值为true，打开会进行日期校验。</p>
                     * @return EnableDateVerify <p>用于控制是否开启日期校验，默认值为true，打开会进行日期校验。</p>
                     * @deprecated
                     */
                    bool GetEnableDateVerify() const;

                    /**
                     * 设置<p>用于控制是否开启日期校验，默认值为true，打开会进行日期校验。</p>
                     * @param _enableDateVerify <p>用于控制是否开启日期校验，默认值为true，打开会进行日期校验。</p>
                     * @deprecated
                     */
                    void SetEnableDateVerify(const bool& _enableDateVerify);

                    /**
                     * 判断参数 EnableDateVerify 是否已赋值
                     * @return EnableDateVerify 是否已赋值
                     * @deprecated
                     */
                    bool EnableDateVerifyHasBeenSet() const;

                    /**
                     * 获取<p>Basic：使用基础卡证告警能力（含基础PS告警）； Advanced：开启进阶PS告警能力，PS告警效果更佳但需要更长耗时；建议测试对比后选用，默认值为 Basic</p>
                     * @return CardWarnType <p>Basic：使用基础卡证告警能力（含基础PS告警）； Advanced：开启进阶PS告警能力，PS告警效果更佳但需要更长耗时；建议测试对比后选用，默认值为 Basic</p>
                     * 
                     */
                    std::string GetCardWarnType() const;

                    /**
                     * 设置<p>Basic：使用基础卡证告警能力（含基础PS告警）； Advanced：开启进阶PS告警能力，PS告警效果更佳但需要更长耗时；建议测试对比后选用，默认值为 Basic</p>
                     * @param _cardWarnType <p>Basic：使用基础卡证告警能力（含基础PS告警）； Advanced：开启进阶PS告警能力，PS告警效果更佳但需要更长耗时；建议测试对比后选用，默认值为 Basic</p>
                     * 
                     */
                    void SetCardWarnType(const std::string& _cardWarnType);

                    /**
                     * 判断参数 CardWarnType 是否已赋值
                     * @return CardWarnType 是否已赋值
                     * 
                     */
                    bool CardWarnTypeHasBeenSet() const;

                private:

                    /**
                     * <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M，分辨率建议500*800以上，支持PNG、JPG、JPEG、BMP格式。建议卡片部分占据图片2/3以上。建议图片存储于腾讯云，可保障更高的下载速度和稳定性。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>FRONT：身份证有照片的一面（人像面），<br>BACK：身份证有国徽的一面（国徽面），<br>该参数如果不填，将为您自动判断身份证正反面。</p>
                     */
                    std::string m_cardSide;
                    bool m_cardSideHasBeenSet;

                    /**
                     * <p>以下可选字段均为bool 类型，默认false：<br>CropIdCard，身份证照片裁剪（去掉证件外多余的边缘、自动矫正拍摄角度）<br>CropPortrait，人像照片裁剪（自动抠取身份证头像区域）<br>CopyWarn，复印件告警<br>BorderCheckWarn，边框不完整和框内遮挡告警<br>ReshootWarn，屏幕翻拍告警<br>DetectPsWarn，疑似存在PS痕迹告警（CardWarnType参数为 Advanced时同时开启电子身份证、水印告警）<br>TempIdWarn，临时身份证告警<br>InvalidDateWarn，身份证有效日期不合法告警<br>Quality，图片质量分数（评价图片的模糊程度）<br>MultiCardDetect，是否开启正反面同框识别（仅支持二代身份证正反页同框识别或临时身份证正反页同框识别）<br>ReflectWarn，是否开启反光检测<br>SDK 设置方式参考：Config = Json.stringify({&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true})<br>API 3.0 Explorer 设置方式参考：Config = {&quot;CropIdCard&quot;:true,&quot;CropPortrait&quot;:true}</p>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>默认值为true，打开识别结果纠正开关。开关开启后，身份证号、出生日期、性别，三个字段会进行矫正补齐，统一结果输出；若关闭此开关，以上三个字段不会进行矫正补齐，保持原始识别结果输出，若原图出现篡改情况，这三个字段的识别结果可能会不统一。</p>
                     */
                    bool m_enableRecognitionRectify;
                    bool m_enableRecognitionRectifyHasBeenSet;

                    /**
                     * <p>默认值为false。</p><p>此开关需要在反光检测开关开启下才会生效（即此开关生效的前提是config入参里的&quot;ReflectWarn&quot;:true），若EnableReflectDetail设置为true，则会返回反光点覆盖区域详情。反光点覆盖区域详情分为四部分：人像照片位置、国徽位置、识别字段位置、其他位置。一个反光点允许覆盖多个区域，且一张图片可能存在多个反光点。</p>
                     */
                    bool m_enableReflectDetail;
                    bool m_enableReflectDetailHasBeenSet;

                    /**
                     * <p>用于控制是否开启日期校验，默认值为true，打开会进行日期校验。</p>
                     */
                    bool m_enableDateVerify;
                    bool m_enableDateVerifyHasBeenSet;

                    /**
                     * <p>Basic：使用基础卡证告警能力（含基础PS告警）； Advanced：开启进阶PS告警能力，PS告警效果更佳但需要更长耗时；建议测试对比后选用，默认值为 Basic</p>
                     */
                    std::string m_cardWarnType;
                    bool m_cardWarnTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRREQUEST_H_
