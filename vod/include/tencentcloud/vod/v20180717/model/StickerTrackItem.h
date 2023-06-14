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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STICKERTRACKITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STICKERTRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageTransform.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 贴图轨上的贴图信息。
                */
                class StickerTrackItem : public AbstractModel
                {
                public:
                    StickerTrackItem();
                    ~StickerTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取贴图片段的媒体素材来源，可以是：
<li>点播的媒体文件 ID；</li>
<li>其他媒体文件的下载 URL。</li>
注意：当使用其他媒体文件的下载 URL 作为素材来源，且开启了访问控制（如防盗链）时，需要在 URL 携带访问控制参数（如防盗链签名）。
                     * @return SourceMedia 贴图片段的媒体素材来源，可以是：
<li>点播的媒体文件 ID；</li>
<li>其他媒体文件的下载 URL。</li>
注意：当使用其他媒体文件的下载 URL 作为素材来源，且开启了访问控制（如防盗链）时，需要在 URL 携带访问控制参数（如防盗链签名）。
                     * 
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置贴图片段的媒体素材来源，可以是：
<li>点播的媒体文件 ID；</li>
<li>其他媒体文件的下载 URL。</li>
注意：当使用其他媒体文件的下载 URL 作为素材来源，且开启了访问控制（如防盗链）时，需要在 URL 携带访问控制参数（如防盗链签名）。
                     * @param _sourceMedia 贴图片段的媒体素材来源，可以是：
<li>点播的媒体文件 ID；</li>
<li>其他媒体文件的下载 URL。</li>
注意：当使用其他媒体文件的下载 URL 作为素材来源，且开启了访问控制（如防盗链）时，需要在 URL 携带访问控制参数（如防盗链签名）。
                     * 
                     */
                    void SetSourceMedia(const std::string& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     * 
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取贴图的持续时间，单位为秒。
                     * @return Duration 贴图的持续时间，单位为秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置贴图的持续时间，单位为秒。
                     * @param _duration 贴图的持续时间，单位为秒。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取贴图在轨道上的起始时间，单位为秒。
                     * @return StartTime 贴图在轨道上的起始时间，单位为秒。
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置贴图在轨道上的起始时间，单位为秒。
                     * @param _startTime 贴图在轨道上的起始时间，单位为秒。
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取原点位置，取值有：
<li>Center：坐标原点为中心位置，如画布中心。</li>
默认值：Center。
                     * @return CoordinateOrigin 原点位置，取值有：
<li>Center：坐标原点为中心位置，如画布中心。</li>
默认值：Center。
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置原点位置，取值有：
<li>Center：坐标原点为中心位置，如画布中心。</li>
默认值：Center。
                     * @param _coordinateOrigin 原点位置，取值有：
<li>Center：坐标原点为中心位置，如画布中心。</li>
默认值：Center。
                     * 
                     */
                    void SetCoordinateOrigin(const std::string& _coordinateOrigin);

                    /**
                     * 判断参数 CoordinateOrigin 是否已赋值
                     * @return CoordinateOrigin 是否已赋值
                     * 
                     */
                    bool CoordinateOriginHasBeenSet() const;

                    /**
                     * 获取贴图原点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li><li>当字符串以 px 结尾，表示贴图 XPos 单位为像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     * @return XPos 贴图原点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li><li>当字符串以 px 结尾，表示贴图 XPos 单位为像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置贴图原点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li><li>当字符串以 px 结尾，表示贴图 XPos 单位为像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     * @param _xPos 贴图原点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li><li>当字符串以 px 结尾，表示贴图 XPos 单位为像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     * 
                     */
                    void SetXPos(const std::string& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取贴图原点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 YPos 单位为像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     * @return YPos 贴图原点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 YPos 单位为像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置贴图原点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 YPos 单位为像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     * @param _yPos 贴图原点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 YPos 单位为像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取贴图的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Width 单位为像素，如 100px 表示 Width 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空0，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * @return Width 贴图的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Width 单位为像素，如 100px 表示 Width 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空0，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置贴图的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Width 单位为像素，如 100px 表示 Width 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空0，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * @param _width 贴图的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Width 单位为像素，如 100px 表示 Width 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空0，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取贴图的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Height 单位为像素，如 100px 表示 Hieght 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * @return Height 贴图的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Height 单位为像素，如 100px 表示 Hieght 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置贴图的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Height 单位为像素，如 100px 表示 Hieght 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * @param _height 贴图的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Height 单位为像素，如 100px 表示 Hieght 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取对贴图进行的操作，如图像旋转等。
                     * @return ImageOperations 对贴图进行的操作，如图像旋转等。
                     * 
                     */
                    std::vector<ImageTransform> GetImageOperations() const;

                    /**
                     * 设置对贴图进行的操作，如图像旋转等。
                     * @param _imageOperations 对贴图进行的操作，如图像旋转等。
                     * 
                     */
                    void SetImageOperations(const std::vector<ImageTransform>& _imageOperations);

                    /**
                     * 判断参数 ImageOperations 是否已赋值
                     * @return ImageOperations 是否已赋值
                     * 
                     */
                    bool ImageOperationsHasBeenSet() const;

                private:

                    /**
                     * 贴图片段的媒体素材来源，可以是：
<li>点播的媒体文件 ID；</li>
<li>其他媒体文件的下载 URL。</li>
注意：当使用其他媒体文件的下载 URL 作为素材来源，且开启了访问控制（如防盗链）时，需要在 URL 携带访问控制参数（如防盗链签名）。
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * 贴图的持续时间，单位为秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 贴图在轨道上的起始时间，单位为秒。
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 原点位置，取值有：
<li>Center：坐标原点为中心位置，如画布中心。</li>
默认值：Center。
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * 贴图原点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li><li>当字符串以 px 结尾，表示贴图 XPos 单位为像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * 贴图原点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 YPos 单位为像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 贴图的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Width 单位为像素，如 100px 表示 Width 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空0，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 贴图的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示贴图 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示贴图 Height 单位为像素，如 100px 表示 Hieght 为 100 像素。</li>
<li>当 Width、Height 均为空，则 Width 和 Height 取贴图素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按比例缩放</li>
<li>当 Width 非空，Height 为空，则 Height 按比例缩放。</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 对贴图进行的操作，如图像旋转等。
                     */
                    std::vector<ImageTransform> m_imageOperations;
                    bool m_imageOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STICKERTRACKITEM_H_
