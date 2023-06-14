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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_WATERMARKINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_WATERMARKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 水印信息。
                */
                class WatermarkInfo : public AbstractModel
                {
                public:
                    WatermarkInfo();
                    ~WatermarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印 ID。
                     * @return WatermarkId 水印 ID。
                     * 
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置水印 ID。
                     * @param _watermarkId 水印 ID。
                     * 
                     */
                    void SetWatermarkId(const int64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                    /**
                     * 获取水印图片 URL。
                     * @return PictureUrl 水印图片 URL。
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 设置水印图片 URL。
                     * @param _pictureUrl 水印图片 URL。
                     * 
                     */
                    void SetPictureUrl(const std::string& _pictureUrl);

                    /**
                     * 判断参数 PictureUrl 是否已赋值
                     * @return PictureUrl 是否已赋值
                     * 
                     */
                    bool PictureUrlHasBeenSet() const;

                    /**
                     * 获取显示位置，X 轴偏移。
                     * @return XPosition 显示位置，X 轴偏移。
                     * 
                     */
                    int64_t GetXPosition() const;

                    /**
                     * 设置显示位置，X 轴偏移。
                     * @param _xPosition 显示位置，X 轴偏移。
                     * 
                     */
                    void SetXPosition(const int64_t& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     * 
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取显示位置，Y 轴偏移。
                     * @return YPosition 显示位置，Y 轴偏移。
                     * 
                     */
                    int64_t GetYPosition() const;

                    /**
                     * 设置显示位置，Y 轴偏移。
                     * @param _yPosition 显示位置，Y 轴偏移。
                     * 
                     */
                    void SetYPosition(const int64_t& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     * 
                     */
                    bool YPositionHasBeenSet() const;

                    /**
                     * 获取水印名称。
                     * @return WatermarkName 水印名称。
                     * 
                     */
                    std::string GetWatermarkName() const;

                    /**
                     * 设置水印名称。
                     * @param _watermarkName 水印名称。
                     * 
                     */
                    void SetWatermarkName(const std::string& _watermarkName);

                    /**
                     * 判断参数 WatermarkName 是否已赋值
                     * @return WatermarkName 是否已赋值
                     * 
                     */
                    bool WatermarkNameHasBeenSet() const;

                    /**
                     * 获取当前状态。0：未使用，1:使用中。
                     * @return Status 当前状态。0：未使用，1:使用中。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前状态。0：未使用，1:使用中。
                     * @param _status 当前状态。0：未使用，1:使用中。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取添加时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return CreateTime 添加时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置添加时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _createTime 添加时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取水印宽。
                     * @return Width 水印宽。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置水印宽。
                     * @param _width 水印宽。
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
                     * 获取水印高。
                     * @return Height 水印高。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置水印高。
                     * @param _height 水印高。
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
                     * 获取背景水印宽。
                     * @return BackgroundWidth 背景水印宽。
                     * 
                     */
                    int64_t GetBackgroundWidth() const;

                    /**
                     * 设置背景水印宽。
                     * @param _backgroundWidth 背景水印宽。
                     * 
                     */
                    void SetBackgroundWidth(const int64_t& _backgroundWidth);

                    /**
                     * 判断参数 BackgroundWidth 是否已赋值
                     * @return BackgroundWidth 是否已赋值
                     * 
                     */
                    bool BackgroundWidthHasBeenSet() const;

                    /**
                     * 获取背景水印高。
                     * @return BackgroundHeight 背景水印高。
                     * 
                     */
                    int64_t GetBackgroundHeight() const;

                    /**
                     * 设置背景水印高。
                     * @param _backgroundHeight 背景水印高。
                     * 
                     */
                    void SetBackgroundHeight(const int64_t& _backgroundHeight);

                    /**
                     * 判断参数 BackgroundHeight 是否已赋值
                     * @return BackgroundHeight 是否已赋值
                     * 
                     */
                    bool BackgroundHeightHasBeenSet() const;

                private:

                    /**
                     * 水印 ID。
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                    /**
                     * 水印图片 URL。
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * 显示位置，X 轴偏移。
                     */
                    int64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * 显示位置，Y 轴偏移。
                     */
                    int64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                    /**
                     * 水印名称。
                     */
                    std::string m_watermarkName;
                    bool m_watermarkNameHasBeenSet;

                    /**
                     * 当前状态。0：未使用，1:使用中。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 添加时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 水印宽。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印高。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 背景水印宽。
                     */
                    int64_t m_backgroundWidth;
                    bool m_backgroundWidthHasBeenSet;

                    /**
                     * 背景水印高。
                     */
                    int64_t m_backgroundHeight;
                    bool m_backgroundHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_WATERMARKINFO_H_
