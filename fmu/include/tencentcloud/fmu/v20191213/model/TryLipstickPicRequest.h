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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_TRYLIPSTICKPICREQUEST_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_TRYLIPSTICKPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fmu/v20191213/model/LipColorInfo.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * TryLipstickPic请求参数结构体
                */
                class TryLipstickPicRequest : public AbstractModel
                {
                public:
                    TryLipstickPicRequest();
                    ~TryLipstickPicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唇色信息。 
您可以输入最多3个 LipColorInfo 来实现给一张图中的最多3张人脸试唇色。
                     * @return LipColorInfos 唇色信息。 
您可以输入最多3个 LipColorInfo 来实现给一张图中的最多3张人脸试唇色。
                     * 
                     */
                    std::vector<LipColorInfo> GetLipColorInfos() const;

                    /**
                     * 设置唇色信息。 
您可以输入最多3个 LipColorInfo 来实现给一张图中的最多3张人脸试唇色。
                     * @param _lipColorInfos 唇色信息。 
您可以输入最多3个 LipColorInfo 来实现给一张图中的最多3张人脸试唇色。
                     * 
                     */
                    void SetLipColorInfos(const std::vector<LipColorInfo>& _lipColorInfos);

                    /**
                     * 判断参数 LipColorInfos 是否已赋值
                     * @return LipColorInfos 是否已赋值
                     * 
                     */
                    bool LipColorInfosHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过6M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @return Image 图片 base64 数据，base64 编码后大小不可超过6M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过6M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @param _image 图片 base64 数据，base64 编码后大小不可超过6M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
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
                     * 获取图片的 Url ，对应图片 base64 编码后大小不可超过6M。 
图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的 Url 可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @return Url 图片的 Url ，对应图片 base64 编码后大小不可超过6M。 
图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的 Url 可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url ，对应图片 base64 编码后大小不可超过6M。 
图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的 Url 可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @param _url 图片的 Url ，对应图片 base64 编码后大小不可超过6M。 
图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的 Url 可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
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
                     * 获取返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     * @return RspImgType 返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     * @param _rspImgType 返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                private:

                    /**
                     * 唇色信息。 
您可以输入最多3个 LipColorInfo 来实现给一张图中的最多3张人脸试唇色。
                     */
                    std::vector<LipColorInfo> m_lipColorInfos;
                    bool m_lipColorInfosHasBeenSet;

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过6M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url ，对应图片 base64 编码后大小不可超过6M。 
图片的 Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的 Url 可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_TRYLIPSTICKPICREQUEST_H_
