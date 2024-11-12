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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKREQUEST_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ImageInfo.h>
#include <tencentcloud/mrs/v20200910/model/ImageMaskFlags.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * ImageMask请求参数结构体
                */
                class ImageMaskRequest : public AbstractModel
                {
                public:
                    ImageMaskRequest();
                    ~ImageMaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片信息,目前只支持传图片base64
                     * @return Image 图片信息,目前只支持传图片base64
                     * 
                     */
                    ImageInfo GetImage() const;

                    /**
                     * 设置图片信息,目前只支持传图片base64
                     * @param _image 图片信息,目前只支持传图片base64
                     * 
                     */
                    void SetImage(const ImageInfo& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取图片脱敏选项, 不传默认都脱敏
                     * @return MaskFlag 图片脱敏选项, 不传默认都脱敏
                     * 
                     */
                    ImageMaskFlags GetMaskFlag() const;

                    /**
                     * 设置图片脱敏选项, 不传默认都脱敏
                     * @param _maskFlag 图片脱敏选项, 不传默认都脱敏
                     * 
                     */
                    void SetMaskFlag(const ImageMaskFlags& _maskFlag);

                    /**
                     * 判断参数 MaskFlag 是否已赋值
                     * @return MaskFlag 是否已赋值
                     * 
                     */
                    bool MaskFlagHasBeenSet() const;

                    /**
                     * 获取是否自动矫正图片方向
                     * @return AutoFixImageDirection 是否自动矫正图片方向
                     * 
                     */
                    bool GetAutoFixImageDirection() const;

                    /**
                     * 设置是否自动矫正图片方向
                     * @param _autoFixImageDirection 是否自动矫正图片方向
                     * 
                     */
                    void SetAutoFixImageDirection(const bool& _autoFixImageDirection);

                    /**
                     * 判断参数 AutoFixImageDirection 是否已赋值
                     * @return AutoFixImageDirection 是否已赋值
                     * 
                     */
                    bool AutoFixImageDirectionHasBeenSet() const;

                private:

                    /**
                     * 图片信息,目前只支持传图片base64
                     */
                    ImageInfo m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片脱敏选项, 不传默认都脱敏
                     */
                    ImageMaskFlags m_maskFlag;
                    bool m_maskFlagHasBeenSet;

                    /**
                     * 是否自动矫正图片方向
                     */
                    bool m_autoFixImageDirection;
                    bool m_autoFixImageDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKREQUEST_H_
