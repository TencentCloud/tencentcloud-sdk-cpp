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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACEREQUEST_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectFace请求参数结构体
                */
                class DetectFaceRequest : public AbstractModel
                {
                public:
                    DetectFaceRequest();
                    ~DetectFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取最多处理的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为120。 
此参数用于控制处理待检测图片中的人脸个数，值越小，处理速度越快。
                     * @return MaxFaceNum 最多处理的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为120。 
此参数用于控制处理待检测图片中的人脸个数，值越小，处理速度越快。
                     */
                    uint64_t GetMaxFaceNum() const;

                    /**
                     * 设置最多处理的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为120。 
此参数用于控制处理待检测图片中的人脸个数，值越小，处理速度越快。
                     * @param MaxFaceNum 最多处理的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为120。 
此参数用于控制处理待检测图片中的人脸个数，值越小，处理速度越快。
                     */
                    void SetMaxFaceNum(const uint64_t& _maxFaceNum);

                    /**
                     * 判断参数 MaxFaceNum 是否已赋值
                     * @return MaxFaceNum 是否已赋值
                     */
                    bool MaxFaceNumHasBeenSet() const;

                    /**
                     * 获取人脸长和宽的最小尺寸，单位为像素。默认为40。低于此尺寸的人脸不会被检测。
                     * @return MinFaceSize 人脸长和宽的最小尺寸，单位为像素。默认为40。低于此尺寸的人脸不会被检测。
                     */
                    uint64_t GetMinFaceSize() const;

                    /**
                     * 设置人脸长和宽的最小尺寸，单位为像素。默认为40。低于此尺寸的人脸不会被检测。
                     * @param MinFaceSize 人脸长和宽的最小尺寸，单位为像素。默认为40。低于此尺寸的人脸不会被检测。
                     */
                    void SetMinFaceSize(const uint64_t& _minFaceSize);

                    /**
                     * 判断参数 MinFaceSize 是否已赋值
                     * @return MinFaceSize 是否已赋值
                     */
                    bool MinFaceSizeHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据。支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据。支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据。支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param Image 图片 base64 数据。支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param Url 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取是否需要返回人脸属性信息（FaceAttributesInfo）。0 为不需要返回，1 为需要返回。默认为 0。 
非 1 值均视为不需要返回，此时 FaceAttributesInfo 不具备参考意义。  
最多返回面积最大的 5 张人脸属性信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceAttributesInfo 不具备参考意义。  
提取人脸属性信息较为耗时，如不需要人脸属性信息，建议关闭此项功能，加快人脸检测速度。
                     * @return NeedFaceAttributes 是否需要返回人脸属性信息（FaceAttributesInfo）。0 为不需要返回，1 为需要返回。默认为 0。 
非 1 值均视为不需要返回，此时 FaceAttributesInfo 不具备参考意义。  
最多返回面积最大的 5 张人脸属性信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceAttributesInfo 不具备参考意义。  
提取人脸属性信息较为耗时，如不需要人脸属性信息，建议关闭此项功能，加快人脸检测速度。
                     */
                    uint64_t GetNeedFaceAttributes() const;

                    /**
                     * 设置是否需要返回人脸属性信息（FaceAttributesInfo）。0 为不需要返回，1 为需要返回。默认为 0。 
非 1 值均视为不需要返回，此时 FaceAttributesInfo 不具备参考意义。  
最多返回面积最大的 5 张人脸属性信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceAttributesInfo 不具备参考意义。  
提取人脸属性信息较为耗时，如不需要人脸属性信息，建议关闭此项功能，加快人脸检测速度。
                     * @param NeedFaceAttributes 是否需要返回人脸属性信息（FaceAttributesInfo）。0 为不需要返回，1 为需要返回。默认为 0。 
非 1 值均视为不需要返回，此时 FaceAttributesInfo 不具备参考意义。  
最多返回面积最大的 5 张人脸属性信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceAttributesInfo 不具备参考意义。  
提取人脸属性信息较为耗时，如不需要人脸属性信息，建议关闭此项功能，加快人脸检测速度。
                     */
                    void SetNeedFaceAttributes(const uint64_t& _needFaceAttributes);

                    /**
                     * 判断参数 NeedFaceAttributes 是否已赋值
                     * @return NeedFaceAttributes 是否已赋值
                     */
                    bool NeedFaceAttributesHasBeenSet() const;

                    /**
                     * 获取是否开启质量检测。0 为关闭，1 为开启。默认为 0。 
非 1 值均视为不进行质量检测。
最多返回面积最大的 5 张人脸质量分信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceQualityInfo不具备参考意义。  
建议：人脸入库操作建议开启此功能。
                     * @return NeedQualityDetection 是否开启质量检测。0 为关闭，1 为开启。默认为 0。 
非 1 值均视为不进行质量检测。
最多返回面积最大的 5 张人脸质量分信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceQualityInfo不具备参考意义。  
建议：人脸入库操作建议开启此功能。
                     */
                    uint64_t GetNeedQualityDetection() const;

                    /**
                     * 设置是否开启质量检测。0 为关闭，1 为开启。默认为 0。 
非 1 值均视为不进行质量检测。
最多返回面积最大的 5 张人脸质量分信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceQualityInfo不具备参考意义。  
建议：人脸入库操作建议开启此功能。
                     * @param NeedQualityDetection 是否开启质量检测。0 为关闭，1 为开启。默认为 0。 
非 1 值均视为不进行质量检测。
最多返回面积最大的 5 张人脸质量分信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceQualityInfo不具备参考意义。  
建议：人脸入库操作建议开启此功能。
                     */
                    void SetNeedQualityDetection(const uint64_t& _needQualityDetection);

                    /**
                     * 判断参数 NeedQualityDetection 是否已赋值
                     * @return NeedQualityDetection 是否已赋值
                     */
                    bool NeedQualityDetectionHasBeenSet() const;

                private:

                    /**
                     * 最多处理的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为120。 
此参数用于控制处理待检测图片中的人脸个数，值越小，处理速度越快。
                     */
                    uint64_t m_maxFaceNum;
                    bool m_maxFaceNumHasBeenSet;

                    /**
                     * 人脸长和宽的最小尺寸，单位为像素。默认为40。低于此尺寸的人脸不会被检测。
                     */
                    uint64_t m_minFaceSize;
                    bool m_minFaceSizeHasBeenSet;

                    /**
                     * 图片 base64 数据。支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 是否需要返回人脸属性信息（FaceAttributesInfo）。0 为不需要返回，1 为需要返回。默认为 0。 
非 1 值均视为不需要返回，此时 FaceAttributesInfo 不具备参考意义。  
最多返回面积最大的 5 张人脸属性信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceAttributesInfo 不具备参考意义。  
提取人脸属性信息较为耗时，如不需要人脸属性信息，建议关闭此项功能，加快人脸检测速度。
                     */
                    uint64_t m_needFaceAttributes;
                    bool m_needFaceAttributesHasBeenSet;

                    /**
                     * 是否开启质量检测。0 为关闭，1 为开启。默认为 0。 
非 1 值均视为不进行质量检测。
最多返回面积最大的 5 张人脸质量分信息，超过 5 张人脸（第 6 张及以后的人脸）的 FaceQualityInfo不具备参考意义。  
建议：人脸入库操作建议开启此功能。
                     */
                    uint64_t m_needQualityDetection;
                    bool m_needQualityDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_DETECTFACEREQUEST_H_
