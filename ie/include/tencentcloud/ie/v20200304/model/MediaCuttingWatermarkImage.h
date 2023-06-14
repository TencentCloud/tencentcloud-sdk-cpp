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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARKIMAGE_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARKIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 媒体剪切图像水印参数。
                */
                class MediaCuttingWatermarkImage : public AbstractModel
                {
                public:
                    MediaCuttingWatermarkImage();
                    ~MediaCuttingWatermarkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印源的ID，对应SourceInfoSet内的源。
注意1：对应的 MediaSourceInfo.Type需要为Image。
注意2：对于动图，只取第一帧图像作为水印源。
                     * @return SourceId 水印源的ID，对应SourceInfoSet内的源。
注意1：对应的 MediaSourceInfo.Type需要为Image。
注意2：对于动图，只取第一帧图像作为水印源。
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置水印源的ID，对应SourceInfoSet内的源。
注意1：对应的 MediaSourceInfo.Type需要为Image。
注意2：对于动图，只取第一帧图像作为水印源。
                     * @param _sourceId 水印源的ID，对应SourceInfoSet内的源。
注意1：对应的 MediaSourceInfo.Type需要为Image。
注意2：对于动图，只取第一帧图像作为水印源。
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取水印水平坐标，单位像素，默认：0。
                     * @return PosX 水印水平坐标，单位像素，默认：0。
                     * 
                     */
                    uint64_t GetPosX() const;

                    /**
                     * 设置水印水平坐标，单位像素，默认：0。
                     * @param _posX 水印水平坐标，单位像素，默认：0。
                     * 
                     */
                    void SetPosX(const uint64_t& _posX);

                    /**
                     * 判断参数 PosX 是否已赋值
                     * @return PosX 是否已赋值
                     * 
                     */
                    bool PosXHasBeenSet() const;

                    /**
                     * 获取水印垂直坐标，单位像素，默认：0。
                     * @return PosY 水印垂直坐标，单位像素，默认：0。
                     * 
                     */
                    uint64_t GetPosY() const;

                    /**
                     * 设置水印垂直坐标，单位像素，默认：0。
                     * @param _posY 水印垂直坐标，单位像素，默认：0。
                     * 
                     */
                    void SetPosY(const uint64_t& _posY);

                    /**
                     * 判断参数 PosY 是否已赋值
                     * @return PosY 是否已赋值
                     * 
                     */
                    bool PosYHasBeenSet() const;

                    /**
                     * 获取水印宽度，单位像素，默认：0。
                     * @return Width 水印宽度，单位像素，默认：0。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置水印宽度，单位像素，默认：0。
                     * @param _width 水印宽度，单位像素，默认：0。
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
                     * 获取水印高度，单位像素，默认：0。
注意：对于宽高符合以下规则：
1、Width>0 且 Height>0，按指定宽高拉伸；
2、Width=0 且 Height>0，以Height为基准等比缩放；
3、Width>0 且 Height=0，以Width为基准等比缩放；
4、Width=0 且 Height=0，采用源的宽高。
                     * @return Height 水印高度，单位像素，默认：0。
注意：对于宽高符合以下规则：
1、Width>0 且 Height>0，按指定宽高拉伸；
2、Width=0 且 Height>0，以Height为基准等比缩放；
3、Width>0 且 Height=0，以Width为基准等比缩放；
4、Width=0 且 Height=0，采用源的宽高。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置水印高度，单位像素，默认：0。
注意：对于宽高符合以下规则：
1、Width>0 且 Height>0，按指定宽高拉伸；
2、Width=0 且 Height>0，以Height为基准等比缩放；
3、Width>0 且 Height=0，以Width为基准等比缩放；
4、Width=0 且 Height=0，采用源的宽高。
                     * @param _height 水印高度，单位像素，默认：0。
注意：对于宽高符合以下规则：
1、Width>0 且 Height>0，按指定宽高拉伸；
2、Width=0 且 Height>0，以Height为基准等比缩放；
3、Width>0 且 Height=0，以Width为基准等比缩放；
4、Width=0 且 Height=0，采用源的宽高。
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
                     * 获取指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * @return PosOriginType 指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * 
                     */
                    std::string GetPosOriginType() const;

                    /**
                     * 设置指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * @param _posOriginType 指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * 
                     */
                    void SetPosOriginType(const std::string& _posOriginType);

                    /**
                     * 判断参数 PosOriginType 是否已赋值
                     * @return PosOriginType 是否已赋值
                     * 
                     */
                    bool PosOriginTypeHasBeenSet() const;

                private:

                    /**
                     * 水印源的ID，对应SourceInfoSet内的源。
注意1：对应的 MediaSourceInfo.Type需要为Image。
注意2：对于动图，只取第一帧图像作为水印源。
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 水印水平坐标，单位像素，默认：0。
                     */
                    uint64_t m_posX;
                    bool m_posXHasBeenSet;

                    /**
                     * 水印垂直坐标，单位像素，默认：0。
                     */
                    uint64_t m_posY;
                    bool m_posYHasBeenSet;

                    /**
                     * 水印宽度，单位像素，默认：0。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印高度，单位像素，默认：0。
注意：对于宽高符合以下规则：
1、Width>0 且 Height>0，按指定宽高拉伸；
2、Width=0 且 Height>0，以Height为基准等比缩放；
3、Width>0 且 Height=0，以Width为基准等比缩放；
4、Width=0 且 Height=0，采用源的宽高。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     */
                    std::string m_posOriginType;
                    bool m_posOriginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARKIMAGE_H_
