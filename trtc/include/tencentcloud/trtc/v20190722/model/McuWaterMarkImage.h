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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 图片水印参数。
                */
                class McuWaterMarkImage : public AbstractModel
                {
                public:
                    McuWaterMarkImage();
                    ~McuWaterMarkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
                     * @return WaterMarkUrl 水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
                     */
                    std::string GetWaterMarkUrl() const;

                    /**
                     * 设置水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
                     * @param WaterMarkUrl 水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
                     */
                    void SetWaterMarkUrl(const std::string& _waterMarkUrl);

                    /**
                     * 判断参数 WaterMarkUrl 是否已赋值
                     * @return WaterMarkUrl 是否已赋值
                     */
                    bool WaterMarkUrlHasBeenSet() const;

                    /**
                     * 获取水印在输出时的宽。单位为像素值。
                     * @return WaterMarkWidth 水印在输出时的宽。单位为像素值。
                     */
                    uint64_t GetWaterMarkWidth() const;

                    /**
                     * 设置水印在输出时的宽。单位为像素值。
                     * @param WaterMarkWidth 水印在输出时的宽。单位为像素值。
                     */
                    void SetWaterMarkWidth(const uint64_t& _waterMarkWidth);

                    /**
                     * 判断参数 WaterMarkWidth 是否已赋值
                     * @return WaterMarkWidth 是否已赋值
                     */
                    bool WaterMarkWidthHasBeenSet() const;

                    /**
                     * 获取水印在输出时的高。单位为像素值。
                     * @return WaterMarkHeight 水印在输出时的高。单位为像素值。
                     */
                    uint64_t GetWaterMarkHeight() const;

                    /**
                     * 设置水印在输出时的高。单位为像素值。
                     * @param WaterMarkHeight 水印在输出时的高。单位为像素值。
                     */
                    void SetWaterMarkHeight(const uint64_t& _waterMarkHeight);

                    /**
                     * 判断参数 WaterMarkHeight 是否已赋值
                     * @return WaterMarkHeight 是否已赋值
                     */
                    bool WaterMarkHeightHasBeenSet() const;

                    /**
                     * 获取水印在输出时的X偏移。单位为像素值。
                     * @return LocationX 水印在输出时的X偏移。单位为像素值。
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置水印在输出时的X偏移。单位为像素值。
                     * @param LocationX 水印在输出时的X偏移。单位为像素值。
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取水印在输出时的Y偏移。单位为像素值。
                     * @return LocationY 水印在输出时的Y偏移。单位为像素值。
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置水印在输出时的Y偏移。单位为像素值。
                     * @param LocationY 水印在输出时的Y偏移。单位为像素值。
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取水印在输出时的层级，不填默认为0。
                     * @return ZOrder 水印在输出时的层级，不填默认为0。
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置水印在输出时的层级，不填默认为0。
                     * @param ZOrder 水印在输出时的层级，不填默认为0。
                     */
                    void SetZOrder(const uint64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     */
                    bool ZOrderHasBeenSet() const;

                private:

                    /**
                     * 水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
                     */
                    std::string m_waterMarkUrl;
                    bool m_waterMarkUrlHasBeenSet;

                    /**
                     * 水印在输出时的宽。单位为像素值。
                     */
                    uint64_t m_waterMarkWidth;
                    bool m_waterMarkWidthHasBeenSet;

                    /**
                     * 水印在输出时的高。单位为像素值。
                     */
                    uint64_t m_waterMarkHeight;
                    bool m_waterMarkHeightHasBeenSet;

                    /**
                     * 水印在输出时的X偏移。单位为像素值。
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 水印在输出时的Y偏移。单位为像素值。
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * 水印在输出时的层级，不填默认为0。
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_
