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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGERESPONSE_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ape/v20200513/model/ImageMarshal.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * DescribeImage返回参数结构体
                */
                class DescribeImageResponse : public AbstractModel
                {
                public:
                    DescribeImageResponse();
                    ~DescribeImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片ID
                     * @return ImageId 图片ID
                     * 
                     */
                    uint64_t GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取图片标题
                     * @return Title 图片标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取图片描述
                     * @return Description 图片描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取图片预览链接
                     * @return PreviewUrl 图片预览链接
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取图片缩略图
                     * @return ThumbUrl 图片缩略图
                     * 
                     */
                    std::string GetThumbUrl() const;

                    /**
                     * 判断参数 ThumbUrl 是否已赋值
                     * @return ThumbUrl 是否已赋值
                     * 
                     */
                    bool ThumbUrlHasBeenSet() const;

                    /**
                     * 获取图片供应商
                     * @return Vendor 图片供应商
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取图片售卖组合信息
                     * @return Marshals 图片售卖组合信息
                     * 
                     */
                    std::vector<ImageMarshal> GetMarshals() const;

                    /**
                     * 判断参数 Marshals 是否已赋值
                     * @return Marshals 是否已赋值
                     * 
                     */
                    bool MarshalsHasBeenSet() const;

                    /**
                     * 获取宽
                     * @return Width 宽
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高
                     * @return Height 高
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取图片格式 jpg/eps/psd/...
                     * @return ImageFormat 图片格式 jpg/eps/psd/...
                     * 
                     */
                    std::string GetImageFormat() const;

                    /**
                     * 判断参数 ImageFormat 是否已赋值
                     * @return ImageFormat 是否已赋值
                     * 
                     */
                    bool ImageFormatHasBeenSet() const;

                    /**
                     * 获取图片类型 摄影图片、插画、漫画、图表、矢量、psd、全景、gif、模板
                     * @return ImageSenseType 图片类型 摄影图片、插画、漫画、图表、矢量、psd、全景、gif、模板
                     * 
                     */
                    std::string GetImageSenseType() const;

                    /**
                     * 判断参数 ImageSenseType 是否已赋值
                     * @return ImageSenseType 是否已赋值
                     * 
                     */
                    bool ImageSenseTypeHasBeenSet() const;

                    /**
                     * 获取关键词，多关键词用空格分隔
                     * @return Keywords 关键词，多关键词用空格分隔
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取分层图库id
                     * @return LayeredGalleryId 分层图库id
                     * 
                     */
                    int64_t GetLayeredGalleryId() const;

                    /**
                     * 判断参数 LayeredGalleryId 是否已赋值
                     * @return LayeredGalleryId 是否已赋值
                     * 
                     */
                    bool LayeredGalleryIdHasBeenSet() const;

                    /**
                     * 获取构图方式：horizontal:横图、vertical:竖图、square:方图
                     * @return Orientation 构图方式：horizontal:横图、vertical:竖图、square:方图
                     * 
                     */
                    std::string GetOrientation() const;

                    /**
                     * 判断参数 Orientation 是否已赋值
                     * @return Orientation 是否已赋值
                     * 
                     */
                    bool OrientationHasBeenSet() const;

                private:

                    /**
                     * 图片ID
                     */
                    uint64_t m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 图片标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 图片描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 图片预览链接
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 图片缩略图
                     */
                    std::string m_thumbUrl;
                    bool m_thumbUrlHasBeenSet;

                    /**
                     * 图片供应商
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 图片售卖组合信息
                     */
                    std::vector<ImageMarshal> m_marshals;
                    bool m_marshalsHasBeenSet;

                    /**
                     * 宽
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 图片格式 jpg/eps/psd/...
                     */
                    std::string m_imageFormat;
                    bool m_imageFormatHasBeenSet;

                    /**
                     * 图片类型 摄影图片、插画、漫画、图表、矢量、psd、全景、gif、模板
                     */
                    std::string m_imageSenseType;
                    bool m_imageSenseTypeHasBeenSet;

                    /**
                     * 关键词，多关键词用空格分隔
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 分层图库id
                     */
                    int64_t m_layeredGalleryId;
                    bool m_layeredGalleryIdHasBeenSet;

                    /**
                     * 构图方式：horizontal:横图、vertical:竖图、square:方图
                     */
                    std::string m_orientation;
                    bool m_orientationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGERESPONSE_H_
