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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CROPIMAGEREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CROPIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * CropImage请求参数结构体
                */
                class CropImageRequest : public AbstractModel
                {
                public:
                    CropImageRequest();
                    ~CropImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要裁剪区域的宽度，与Height共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片宽度的像素值。
                     * @return Width 需要裁剪区域的宽度，与Height共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片宽度的像素值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置需要裁剪区域的宽度，与Height共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片宽度的像素值。
                     * @param _width 需要裁剪区域的宽度，与Height共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片宽度的像素值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取需要裁剪区域的高度，与Width共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片高度的像素值。
宽高比例（Width : Height）会简化为最简分数，即如果Width输入10、Height输入20，会简化为1：2。
Width : Height建议取值在[1, 2.5]之间，超过这个范围可能会影响效果。
                     * @return Height 需要裁剪区域的高度，与Width共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片高度的像素值。
宽高比例（Width : Height）会简化为最简分数，即如果Width输入10、Height输入20，会简化为1：2。
Width : Height建议取值在[1, 2.5]之间，超过这个范围可能会影响效果。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置需要裁剪区域的高度，与Width共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片高度的像素值。
宽高比例（Width : Height）会简化为最简分数，即如果Width输入10、Height输入20，会简化为1：2。
Width : Height建议取值在[1, 2.5]之间，超过这个范围可能会影响效果。
                     * @param _height 需要裁剪区域的高度，与Width共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片高度的像素值。
宽高比例（Width : Height）会简化为最简分数，即如果Width输入10、Height输入20，会简化为1：2。
Width : Height建议取值在[1, 2.5]之间，超过这个范围可能会影响效果。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取图片URL地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果。
• 长宽比：长边：短边<5。 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @return ImageUrl 图片URL地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果。
• 长宽比：长边：短边<5。 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片URL地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果。
• 长宽比：长边：短边<5。 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @param _imageUrl 图片URL地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果。
• 长宽比：长边：短边<5。 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
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
                     * 获取图片经过Base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要Base64编码，并且要去掉编码头部。
                     * @return ImageBase64 图片经过Base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要Base64编码，并且要去掉编码头部。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片经过Base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要Base64编码，并且要去掉编码头部。
                     * @param _imageBase64 图片经过Base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要Base64编码，并且要去掉编码头部。
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                private:

                    /**
                     * 需要裁剪区域的宽度，与Height共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片宽度的像素值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 需要裁剪区域的高度，与Width共同组成所需裁剪的图片宽高比例。
输入数字请大于0、小于图片高度的像素值。
宽高比例（Width : Height）会简化为最简分数，即如果Width输入10、Height输入20，会简化为1：2。
Width : Height建议取值在[1, 2.5]之间，超过这个范围可能会影响效果。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 图片URL地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果。
• 长宽比：长边：短边<5。 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片经过Base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要Base64编码，并且要去掉编码头部。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CROPIMAGEREQUEST_H_
