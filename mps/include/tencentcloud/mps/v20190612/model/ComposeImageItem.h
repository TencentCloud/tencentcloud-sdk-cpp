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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeSourceMedia.h>
#include <tencentcloud/mps/v20190612/model/ComposeTrackTime.h>
#include <tencentcloud/mps/v20190612/model/ComposeImageOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 图片元素信息。
                */
                class ComposeImageItem : public AbstractModel
                {
                public:
                    ComposeImageItem();
                    ~ComposeImageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元素对应媒体信息。
                     * @return SourceMedia 元素对应媒体信息。
                     * 
                     */
                    ComposeSourceMedia GetSourceMedia() const;

                    /**
                     * 设置元素对应媒体信息。
                     * @param _sourceMedia 元素对应媒体信息。
                     * 
                     */
                    void SetSourceMedia(const ComposeSourceMedia& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     * 
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。
                     * @return TrackTime 元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。
                     * 
                     */
                    ComposeTrackTime GetTrackTime() const;

                    /**
                     * 设置元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。
                     * @param _trackTime 元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。
                     * 
                     */
                    void SetTrackTime(const ComposeTrackTime& _trackTime);

                    /**
                     * 判断参数 TrackTime 是否已赋值
                     * @return TrackTime 是否已赋值
                     * 
                     */
                    bool TrackTimeHasBeenSet() const;

                    /**
                     * 获取元素中心点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 XPos 单位为像素，如 100px 表示 XPos 为100像素。</li>
默认：50%。
                     * @return XPos 元素中心点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 XPos 单位为像素，如 100px 表示 XPos 为100像素。</li>
默认：50%。
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置元素中心点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 XPos 单位为像素，如 100px 表示 XPos 为100像素。</li>
默认：50%。
                     * @param _xPos 元素中心点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 XPos 单位为像素，如 100px 表示 XPos 为100像素。</li>
默认：50%。
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
                     * 获取元素中心点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 YPos 单位为像素，如 100px 表示 YPos 为100像素。</li>
默认：50%。
                     * @return YPos 元素中心点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 YPos 单位为像素，如 100px 表示 YPos 为100像素。</li>
默认：50%。
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置元素中心点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 YPos 单位为像素，如 100px 表示 YPos 为100像素。</li>
默认：50%。
                     * @param _yPos 元素中心点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 YPos 单位为像素，如 100px 表示 YPos 为100像素。</li>
默认：50%。
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
                     * 获取视频片段的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Width 单位为像素，如 100px 表示 Width 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     * @return Width 视频片段的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Width 单位为像素，如 100px 表示 Width 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置视频片段的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Width 单位为像素，如 100px 表示 Width 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     * @param _width 视频片段的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Width 单位为像素，如 100px 表示 Width 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
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
                     * 获取元素的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Height 单位为像素，如 100px 表示 Height 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     * @return Height 元素的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Height 单位为像素，如 100px 表示 Height 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置元素的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Height 单位为像素，如 100px 表示 Height 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     * @param _height 元素的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Height 单位为像素，如 100px 表示 Height 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
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
                     * 获取对图像画面进行的操作，如图像旋转等。
                     * @return ImageOperations 对图像画面进行的操作，如图像旋转等。
                     * 
                     */
                    std::vector<ComposeImageOperation> GetImageOperations() const;

                    /**
                     * 设置对图像画面进行的操作，如图像旋转等。
                     * @param _imageOperations 对图像画面进行的操作，如图像旋转等。
                     * 
                     */
                    void SetImageOperations(const std::vector<ComposeImageOperation>& _imageOperations);

                    /**
                     * 判断参数 ImageOperations 是否已赋值
                     * @return ImageOperations 是否已赋值
                     * 
                     */
                    bool ImageOperationsHasBeenSet() const;

                private:

                    /**
                     * 元素对应媒体信息。
                     */
                    ComposeSourceMedia m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * 元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。
                     */
                    ComposeTrackTime m_trackTime;
                    bool m_trackTimeHasBeenSet;

                    /**
                     * 元素中心点距离画布原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 XPos 为画布宽度指定百分比的位置，如 10% 表示 XPos 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 XPos 单位为像素，如 100px 表示 XPos 为100像素。</li>
默认：50%。
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * 元素中心点距离画布原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 YPos 为画布高度指定百分比的位置，如 10% 表示 YPos 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 YPos 单位为像素，如 100px 表示 YPos 为100像素。</li>
默认：50%。
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 视频片段的宽度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Width 为画布宽度的百分比大小，如 10% 表示 Width 为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Width 单位为像素，如 100px 表示 Width 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 元素的高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示元素 Height 为画布高度的百分比大小，如 10% 表示 Height 为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示元素 Height 单位为像素，如 100px 表示 Height 为100像素。</li>
为空（或0） 的场景：
<li>当 Width、Height 均为空，则 Width 和 Height 取源素材本身的 Width、Height。</li>
<li>当 Width 为空，Height 非空，则 Width 按源素材比例缩放。</li>
<li>当 Width 非空，Height 为空，则 Height 按源素材比例缩放。</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 对图像画面进行的操作，如图像旋转等。
                     */
                    std::vector<ComposeImageOperation> m_imageOperations;
                    bool m_imageOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEITEM_H_
