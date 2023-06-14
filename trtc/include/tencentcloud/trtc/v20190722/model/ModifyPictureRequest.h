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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYPICTUREREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYPICTUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ModifyPicture请求参数结构体
                */
                class ModifyPictureRequest : public AbstractModel
                {
                public:
                    ModifyPictureRequest();
                    ~ModifyPictureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片id
                     * @return PictureId 图片id
                     * 
                     */
                    uint64_t GetPictureId() const;

                    /**
                     * 设置图片id
                     * @param _pictureId 图片id
                     * 
                     */
                    void SetPictureId(const uint64_t& _pictureId);

                    /**
                     * 判断参数 PictureId 是否已赋值
                     * @return PictureId 是否已赋值
                     * 
                     */
                    bool PictureIdHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return SdkAppId 应用id
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用id
                     * @param _sdkAppId 应用id
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取图片长度
                     * @return Height 图片长度
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置图片长度
                     * @param _height 图片长度
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取图片宽度
                     * @return Width 图片宽度
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置图片宽度
                     * @param _width 图片宽度
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取显示位置x轴方向
                     * @return XPosition 显示位置x轴方向
                     * 
                     */
                    uint64_t GetXPosition() const;

                    /**
                     * 设置显示位置x轴方向
                     * @param _xPosition 显示位置x轴方向
                     * 
                     */
                    void SetXPosition(const uint64_t& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     * 
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取显示位置y轴方向
                     * @return YPosition 显示位置y轴方向
                     * 
                     */
                    uint64_t GetYPosition() const;

                    /**
                     * 设置显示位置y轴方向
                     * @param _yPosition 显示位置y轴方向
                     * 
                     */
                    void SetYPosition(const uint64_t& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     * 
                     */
                    bool YPositionHasBeenSet() const;

                private:

                    /**
                     * 图片id
                     */
                    uint64_t m_pictureId;
                    bool m_pictureIdHasBeenSet;

                    /**
                     * 应用id
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 图片长度
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 图片宽度
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 显示位置x轴方向
                     */
                    uint64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * 显示位置y轴方向
                     */
                    uint64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYPICTUREREQUEST_H_
